#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class RoleTweakColorData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_COLORDATA_AMKCMHEKOKE_OFFSET UNITYSDK_OFFSET(0x163E8FE0)
#define MOLEMOLE_COLORDATA_CLCKGCKPEIH_1_OFFSET UNITYSDK_OFFSET(0x163E8BA0)
#define MOLEMOLE_COLORDATA_CLCKGCKPEIH_OFFSET UNITYSDK_OFFSET(0x163E8DC0)
#define MOLEMOLE_COLORDATA_GET_TWEAKCOLOR0_OFFSET UNITYSDK_OFFSET(0x163E8B30)
#define MOLEMOLE_COLORDATA_GET_TWEAKCOLOR1_OFFSET UNITYSDK_OFFSET(0x163E8C20)
#define MOLEMOLE_COLORDATA_GET_TWEAKCOLOR2_OFFSET UNITYSDK_OFFSET(0x163E8CA0)
#define MOLEMOLE_COLORDATA_ISMATCH_OFFSET UNITYSDK_OFFSET(0x163E8D70)
#define MOLEMOLE_COLORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x163E8D20)

namespace MoleMole
{
	inline static constexpr unsigned int ColorData_TypeDefinitionIndex = 66085;

	class ColorData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::RoleTweakColorData*>** StaticGet_tweakColorConfigs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::RoleTweakColorData*>**)Il2CppClass::FromTypeDefinitionIndex(ColorData_TypeDefinitionIndex)->GetStaticField(0x44A30);
		}
		::System::Int32 avatarId; // 0x10
		::UnityEngine::Color unlockColor; // 0x14
		::System::Byte _padding0[0x4];
		::System::String* bgPath; // 0x28
		::UnityEngine::Color coreLevelColor; // 0x30
		::UnityEngine::Color coreBgColor; // 0x40
		::System::String* tweakColorKey; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color get_TweakColor0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORDATA_GET_TWEAKCOLOR0_OFFSET))(this);
		}

		::UnityEngine::Color get_TweakColor1()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORDATA_GET_TWEAKCOLOR1_OFFSET))(this);
		}

		::UnityEngine::Color get_TweakColor2()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORDATA_GET_TWEAKCOLOR2_OFFSET))(this);
		}

		::System::Boolean IsMatch(::System::String* LFPLEJICDJL)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORDATA_ISMATCH_OFFSET))(this, LFPLEJICDJL);
		}

		::System::Boolean CLCKGCKPEIH(::System::Int32 EOGLMAEPALE, ::UnityEngine::Color& JBBFCGAMDHI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORDATA_CLCKGCKPEIH_OFFSET))(this, EOGLMAEPALE, JBBFCGAMDHI);
		}

		::UnityEngine::Color CLCKGCKPEIH_1(::System::Int32 EOGLMAEPALE)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORDATA_CLCKGCKPEIH_1_OFFSET))(this, EOGLMAEPALE);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* AMKCMHEKOKE()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORDATA_AMKCMHEKOKE_OFFSET))(this);
		}
	};
}
