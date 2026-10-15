#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzleTriggerPad.h"
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD_CTOR_OFFSET UNITYSDK_OFFSET(0xDD629F0)
#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD_INITSTATE_OFFSET UNITYSDK_OFFSET(0xDD61EE0)
#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD_IOODJPNJODE_OFFSET UNITYSDK_OFFSET(0xDD62840)
#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xDD62260)
#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xDD626D0)
#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xDD62510)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleEndPad_TypeDefinitionIndex = 78744;

	class PadsPuzzleEndPad : public ::RPG::Client::Prop::PadsPuzzleTriggerPad
	{
	public:
		::UnityEngine::GameObject* effect; // 0x70
		::UnityEngine::GameObject* endEffect; // 0x78
		::UnityEngine::GameObject* FIAKAEBFOGO; // 0x80
		::UnityEngine::GameObject* EFEAFDMLFNC; // 0x88
		::UnityEngine::Animator* FALOCKLLNPK; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD_CTOR_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD_INITSTATE_OFFSET))(this);
		}

		::System::Void PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD_PUZZLERESET_OFFSET))(this);
		}

		::System::Void IOODJPNJODE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD_IOODJPNJODE_OFFSET))(this);
		}

	};
}
