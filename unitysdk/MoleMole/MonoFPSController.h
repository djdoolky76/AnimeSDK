#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOFPSCONTROLLER_AFNOALNPOIN_OFFSET UNITYSDK_OFFSET(0x12475950)
#define MOLEMOLE_MONOFPSCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x12475350)
#define MOLEMOLE_MONOFPSCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x124755E0)
#define MOLEMOLE_MONOFPSCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12475900)
#define MOLEMOLE_MONOFPSCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x124758A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoFPSController_TypeDefinitionIndex = 76551;

	class MonoFPSController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_NIINEACEKMG()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoFPSController_TypeDefinitionIndex)->GetStaticField(0x41BC0);
		}
		static ::System::Int32* StaticGet_MMPPHMOGOGP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoFPSController_TypeDefinitionIndex)->GetStaticField(0xF040);
		}
		static ::System::Int32* StaticGet_FJFCDDINDFP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoFPSController_TypeDefinitionIndex)->GetStaticField(0xF044);
		}
		::UnityEngine::UI::Text* FCCLIEJAKLI; // 0x18
		::UnityEngine::UI::Slider* LGGEPNMJIOB; // 0x20
		::System::Int32 CENMNHMGNGF; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSCONTROLLER_START_OFFSET))(this);
		}

		::System::Void AFNOALNPOIN(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSCONTROLLER_AFNOALNPOIN_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
