#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
#include "unitysdk/UnityEngine/Color.h"
namespace EnviromentSystem { class EnviroGradientProperty; }
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_BDLHLJCNGKN_OFFSET UNITYSDK_OFFSET(0x155F1AA0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_CCTOR_OFFSET UNITYSDK_OFFSET(0x155F1F40)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x155F0A60)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x155E8EA0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x155F13A0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_EAIHBIMFKPE_OFFSET UNITYSDK_OFFSET(0x155F1300)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_EEPIDFNPIPG_OFFSET UNITYSDK_OFFSET(0x155F1E50)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_EPMCIGOPPHI_OFFSET UNITYSDK_OFFSET(0x155F07E0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_FLPKICBKAKK_OFFSET UNITYSDK_OFFSET(0x155F1DA0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_FMDIMGPGIHD_OFFSET UNITYSDK_OFFSET(0x155F0D20)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_FOMBNHMBCKN_OFFSET UNITYSDK_OFFSET(0x155F1570)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0x155F1ED0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_LGNNAOLPNIP_OFFSET UNITYSDK_OFFSET(0x155F0D70)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_LPCOOHGAICK_OFFSET UNITYSDK_OFFSET(0x155F1D60)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_MMIDCKGBONH_OFFSET UNITYSDK_OFFSET(0x155F0670)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x155F0FC0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroGradientProperty_TypeDefinitionIndex = 49604;

	class EnviroGradientProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::UnityEngine::Gradient* m_Value; // 0x48
		::UnityEngine::Gradient* m_TargetValue; // 0x50
		::System::Single m_TraisRate; // 0x58
		::System::Int32 _AtlasID; // 0x5C
		::System::Boolean m_TransReGen; // 0x60
		static ::Il2CppArray<::System::String*>** StaticGet_EnviromentGradientAtlasID()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("EnviromentSystem", "EnviroGradientProperty")->GetStaticField(0x48850);
		}

		static ::Il2CppArray<::UnityEngine::Color>** StaticGet__TmpColorArrayForGradient()
		{
			return (::Il2CppArray<::UnityEngine::Color>**)UnitySDK::FromName("EnviromentSystem", "EnviroGradientProperty")->GetStaticField(0x48858);
		}

		static ::UnityEngine::Texture2D** StaticGet_EnviroGradientAtlas()
		{
			return (::UnityEngine::Texture2D**)UnitySDK::FromName("EnviromentSystem", "EnviroGradientProperty")->GetStaticField(0x48860);
		}

		static ::System::Int32* StaticGet_EnviroGradientAtlasID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviroGradientProperty")->GetStaticField(0x10E20);
		}

		// static const ::System::Object Atlas_Height; // 0x0
		// static const ::System::Object Atlas_Width; // 0x0
		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroGradientProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroGradientProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_CCTOR_OFFSET))();
		}

		::System::Void MMIDCKGBONH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_MMIDCKGBONH_OFFSET))(this);
		}

		::UnityEngine::Gradient* EPMCIGOPPHI()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_EPMCIGOPPHI_OFFSET))(this);
		}

		::System::Boolean FMDIMGPGIHD(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_FMDIMGPGIHD_OFFSET))(this, a1);
		}

		::System::Void LGNNAOLPNIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_LGNNAOLPNIP_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_DIOEAJEHHND_OFFSET))(this);
		}

		static ::System::Void BDLHLJCNGKN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_BDLHLJCNGKN_OFFSET))();
		}

		::System::Void LPCOOHGAICK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_LPCOOHGAICK_OFFSET))(this);
		}

		::System::Void FOMBNHMBCKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_FOMBNHMBCKN_OFFSET))(this);
		}

		::System::Boolean FLPKICBKAKK(::UnityEngine::Gradient* a1, ::UnityEngine::Gradient* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_FLPKICBKAKK_OFFSET))(this, a1, a2);
		}

		::System::Void EEPIDFNPIPG(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_EEPIDFNPIPG_OFFSET))(this, a1);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Void EAIHBIMFKPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_EAIHBIMFKPE_OFFSET))(this);
		}

	};
}
