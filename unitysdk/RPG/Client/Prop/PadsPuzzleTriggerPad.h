#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzlePadBase.h"
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_AMEKECLOMMM_OFFSET UNITYSDK_OFFSET(0x17431710)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x17431890)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_CTOR_OFFSET UNITYSDK_OFFSET(0x17430800)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17431770)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_INITSTATE_OFFSET UNITYSDK_OFFSET(0x174302D0)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_IOODJPNJODE_OFFSET UNITYSDK_OFFSET(0x17431070)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_MGGPABPMCEN_OFFSET UNITYSDK_OFFSET(0x17431340)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_MOONMEJMNKI_OFFSET UNITYSDK_OFFSET(0x17431810)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_MPMEAPDGONI_OFFSET UNITYSDK_OFFSET(0x174307B0)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_NKNNIDKJKOJ_OFFSET UNITYSDK_OFFSET(0x17431900)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0x17430DA0)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0x17430560)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGERPAD_TRIGGERPAD_OFFSET UNITYSDK_OFFSET(0x174315D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleTriggerPad_TypeDefinitionIndex = 81493;

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
