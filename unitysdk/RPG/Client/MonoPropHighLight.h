#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOPROPHIGHLIGHT_AHECPMILGFN_OFFSET UNITYSDK_OFFSET(0xD859570)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_AWAKE_OFFSET UNITYSDK_OFFSET(0xD8590C0)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_CCTOR_OFFSET UNITYSDK_OFFSET(0xD859780)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_CLKGPNLAKGN_OFFSET UNITYSDK_OFFSET(0xD859320)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_CTOR_OFFSET UNITYSDK_OFFSET(0xD859770)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD859520)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD8592D0)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_SETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xD859720)
#define RPG_CLIENT_MONOPROPHIGHLIGHT_UPDATE_OFFSET UNITYSDK_OFFSET(0xD859120)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPropHighLight_TypeDefinitionIndex = 68771;

	class MonoPropHighLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Duration; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Renderer*>* Renderers; // 0x20
		::UnityEngine::Material* HighLightMaterial; // 0x28
		::System::Single NDFEPODIHOH; // 0x30
		::System::Boolean MAOMNJFNJIK; // 0x34
		::System::Byte _padding1[0x3];
		::Il2CppArray<::UnityEngine::Material*>* ABAJIOEFDFB; // 0x38
		static ::System::Int32* StaticGet_LKMJIANNDJF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoPropHighLight")->GetStaticField(0x14FC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT_CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetHighLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT_SETHIGHLIGHT_OFFSET))(this, a1);
		}

		::System::Void CLKGPNLAKGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT_CLKGPNLAKGN_OFFSET))(this);
		}

		::System::Void AHECPMILGFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROPHIGHLIGHT_AHECPMILGFN_OFFSET))(this);
		}

	};
}
