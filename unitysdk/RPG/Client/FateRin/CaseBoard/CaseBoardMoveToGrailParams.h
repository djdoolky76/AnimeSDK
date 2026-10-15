#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FateRinCaseBoardMoveBaseInfo; }

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDMOVETOGRAILPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0xCEFC1C0)

namespace RPG::Client::FateRin::CaseBoard
{
	class CaseBoardMoveToGrailParams : public ::System::Object
	{
	public:
		::RPG::GameCore::FateRinCaseBoardMoveBaseInfo* BaseInfo; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDMOVETOGRAILPARAMS_CTOR_OFFSET))(this);
		}

	};
}
