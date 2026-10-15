#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::OpenWorld { class PVSRuntimeReplayJudgeEntry; }
namespace System { class String; }

#define FCCHGILFKPE___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0x156A51F0)
#define FCCHGILFKPE___C__DISPLAYCLASS13_0__RECORDSTAGE_B__0_OFFSET UNITYSDK_OFFSET(0x156A53B0)

inline static constexpr unsigned int FCCHGILFKPE___c__DisplayClass13_0_TypeDefinitionIndex = 73770;

	class FCCHGILFKPE___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::String* stage; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCHGILFKPE___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RecordStage_b__0(::RPG::Client::OpenWorld::PVSRuntimeReplayJudgeEntry* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::PVSRuntimeReplayJudgeEntry*))((::PBYTE)hIl2Cpp + FCCHGILFKPE___C__DISPLAYCLASS13_0__RECORDSTAGE_B__0_OFFSET))(this, a1);
		}

	};
