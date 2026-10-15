#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class MazePuzzleOrigamiColonyRow; }
namespace RPG::GameCore { class PlayOrigamiFinishTalk; }
namespace RPG::GameCore { class TaskContext; }

#define NIIFHJNPJBI_CTOR_OFFSET UNITYSDK_OFFSET(0xBBEBC30)
#define NIIFHJNPJBI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBEBC60)
#define NIIFHJNPJBI_IKFMENCGFGG_OFFSET UNITYSDK_OFFSET(0xBBEBF30)
#define NIIFHJNPJBI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBEBCB0)

	class NIIFHJNPJBI
	{
	public:
		::RPG::GameCore::MazePuzzleOrigamiColonyRow* IKNODJJFFHK; // 0x28
		::System::UInt32 KGGMOFBNALD; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayOrigamiFinishTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayOrigamiFinishTalk*))((::PBYTE)hIl2Cpp + NIIFHJNPJBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIIFHJNPJBI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIIFHJNPJBI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean IKFMENCGFGG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIIFHJNPJBI_IKFMENCGFGG_OFFSET))(this);
		}

	};
