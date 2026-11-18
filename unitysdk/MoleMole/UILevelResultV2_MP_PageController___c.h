#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EDMAJMJNEEA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D000F0)
#define MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D00130)
#define MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__EXTRACTPLAYERINFO_B__38_1_OFFSET UNITYSDK_OFFSET(0x18D00240)
#define MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C___REFRESHAVATARINFO_B__26_0_OFFSET UNITYSDK_OFFSET(0x18D00140)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_MP_PageController___c_TypeDefinitionIndex = 67986;

	class UILevelResultV2_MP_PageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::EDMAJMJNEEA*, ::System::UInt32>** StaticGet___9__38_1()
		{
			return (::System::Func_2<::EDMAJMJNEEA*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_MP_PageController___c_TypeDefinitionIndex)->GetStaticField(0x4FAF0);
		}
		static ::System::Func_2<::EDMAJMJNEEA*, ::System::UInt32>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::EDMAJMJNEEA*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_MP_PageController___c_TypeDefinitionIndex)->GetStaticField(0x4FAF8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_MP_PageController___c_TypeDefinitionIndex)->GetStaticField(0x4FB00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __RefreshAvatarInfo_b__26_0(::EDMAJMJNEEA* p)
		{
			return ((::System::UInt32(*)(::PVOID, ::EDMAJMJNEEA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C___REFRESHAVATARINFO_B__26_0_OFFSET))(this, p);
		}

		::System::UInt32 _ExtractPlayerInfo_b__38_1(::EDMAJMJNEEA* p)
		{
			return ((::System::UInt32(*)(::PVOID, ::EDMAJMJNEEA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__EXTRACTPLAYERINFO_B__38_1_OFFSET))(this, p);
		}
	};
}
