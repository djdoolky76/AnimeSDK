#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/HexPuzzleItemBase.h"
#include "unitysdk/RPG/Client/Prop/PushHexColor.h"
namespace RPG::Client::Prop { class PuzzleBoardBase; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROP_PUSHHEXPUZZLEFRAME_CTOR_OFFSET UNITYSDK_OFFSET(0xDD7CD30)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEFRAME_FINNPDJCNAI_OFFSET UNITYSDK_OFFSET(0xDD7CA70)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEFRAME_INIT_OFFSET UNITYSDK_OFFSET(0xDD7B1C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PushHexPuzzleFrame_TypeDefinitionIndex = 78618;

	class PushHexPuzzleFrame : public ::RPG::Client::Prop::HexPuzzleItemBase
	{
	public:
		::RPG::Client::Prop::PushHexColor Color; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* ColorRed; // 0x38
		::UnityEngine::Material* ColorBlue; // 0x40
		::UnityEngine::Material* ColorGreen; // 0x48
		::UnityEngine::Material* ColorYellow; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEFRAME_CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::PuzzleBoardBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleBoardBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEFRAME_INIT_OFFSET))(this, a1);
		}

		::System::Void FINNPDJCNAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEFRAME_FINNPDJCNAI_OFFSET))(this);
		}

	};
}
