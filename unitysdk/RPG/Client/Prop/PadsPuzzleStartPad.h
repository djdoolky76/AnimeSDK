#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzleTriggerPad.h"
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_CTOR_OFFSET UNITYSDK_OFFSET(0x174307F0)
#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_INITSTATE_OFFSET UNITYSDK_OFFSET(0x17430050)
#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0x17430400)
#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0x17430620)
#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0x174304F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleStartPad_TypeDefinitionIndex = 81481;

	class PadsPuzzleStartPad : public ::RPG::Client::Prop::PadsPuzzleTriggerPad
	{
	public:
		::UnityEngine::GameObject* effect; // 0x70
		::UnityEngine::GameObject* startEffect; // 0x78
		::UnityEngine::GameObject* FIAKAEBFOGO; // 0x80
		::UnityEngine::GameObject* OBIODAHPKCB; // 0x88
		::UnityEngine::Animator* FALOCKLLNPK; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_CTOR_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_INITSTATE_OFFSET))(this);
		}

		::System::Void PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_PUZZLERESET_OFFSET))(this);
		}

	};
}
