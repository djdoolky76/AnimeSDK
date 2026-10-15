#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzlePadBase.h"
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_AMEKECLOMMM_OFFSET UNITYSDK_OFFSET(0xDD5A410)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xDD5A590)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_CTOR_OFFSET UNITYSDK_OFFSET(0xDD587C0)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD5A470)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_INITSTATE_OFFSET UNITYSDK_OFFSET(0xDD57DD0)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_IOODJPNJODE_OFFSET UNITYSDK_OFFSET(0xDD59F80)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_MGGPABPMCEN_OFFSET UNITYSDK_OFFSET(0xDD586E0)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_MOONMEJMNKI_OFFSET UNITYSDK_OFFSET(0xDD5A510)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_MPMEAPDGONI_OFFSET UNITYSDK_OFFSET(0xDD59900)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_NKNNIDKJKOJ_OFFSET UNITYSDK_OFFSET(0xDD5A600)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xDD58540)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xDD583D0)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_TRIGGERPAD_OFFSET UNITYSDK_OFFSET(0xDD53180)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleTriggerPad_TypeDefinitionIndex = 78758;

	class PadsPuzzleTriggerPad : public ::RPG::Client::Prop::PadsPuzzlePadBase
	{
	public:
		::System::Int32 ID; // 0x50
		::System::Byte _padding0[0x4];
		::UnityEngine::Collider* groupCollider; // 0x58
		::UnityEngine::GameObject* fadeOutEffect; // 0x60
		::UnityEngine::GameObject* GAEABIAMIMD; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_CTOR_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_INITSTATE_OFFSET))(this);
		}

		::System::Void TriggerPad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_TRIGGERPAD_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_PUZZLERESET_OFFSET))(this);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_DISPOSE_OFFSET))(this);
		}

		::System::Void IOODJPNJODE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_IOODJPNJODE_OFFSET))(this);
		}

		::System::Void MGGPABPMCEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_MGGPABPMCEN_OFFSET))(this);
		}

		::System::Void MOONMEJMNKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_MOONMEJMNKI_OFFSET))(this);
		}

		::System::Void MPMEAPDGONI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_MPMEAPDGONI_OFFSET))(this);
		}

		::System::Void AMEKECLOMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_AMEKECLOMMM_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void NKNNIDKJKOJ(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_NKNNIDKJKOJ_OFFSET))(this, a1);
		}

	};
}
