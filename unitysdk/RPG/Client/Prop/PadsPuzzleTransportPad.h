#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzleTriggerPad.h"
namespace RPG::Client::Prop { class PadsPuzzleTransportPad; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_CTOR_OFFSET UNITYSDK_OFFSET(0xDD5A250)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_INITSTATE_OFFSET UNITYSDK_OFFSET(0xDD59950)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_IOODJPNJODE_OFFSET UNITYSDK_OFFSET(0xDD59EE0)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_MGGPABPMCEN_OFFSET UNITYSDK_OFFSET(0xDD5A170)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xDD59C40)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xDD59E20)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xDD59D60)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_TRIGGERTELEPORTEFFECT_OFFSET UNITYSDK_OFFSET(0xDD560F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleTransportPad_TypeDefinitionIndex = 78747;

	class PadsPuzzleTransportPad : public ::RPG::Client::Prop::PadsPuzzleTriggerPad
	{
	public:
		::RPG::Client::Prop::PadsPuzzleTransportPad* theOtherTransportPad; // 0x70
		::UnityEngine::GameObject* effect; // 0x78
		::System::Boolean alreadyTransported; // 0x80
		::System::Byte _padding0[0x7];
		::UnityEngine::GameObject* FIAKAEBFOGO; // 0x88
		::UnityEngine::Animator* FALOCKLLNPK; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_CTOR_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_INITSTATE_OFFSET))(this);
		}

		::System::Void PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLERESET_OFFSET))(this);
		}

		::System::Void TriggerTeleportEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_TRIGGERTELEPORTEFFECT_OFFSET))(this);
		}

		::System::Void IOODJPNJODE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_IOODJPNJODE_OFFSET))(this);
		}

		::System::Void MGGPABPMCEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_MGGPABPMCEN_OFFSET))(this);
		}

	};
}
