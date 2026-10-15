#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FateRinCaseBoardSimpleTalkData; }
namespace System { class Action; }

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSIMPLETALKPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0xCF989B0)

namespace RPG::Client::FateRin::CaseBoard
{
	class CaseBoardSimpleTalkParams : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FateRinCaseBoardSimpleTalkData*>* TalkDatas; // 0x10
		::System::Action* OnComplete; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSIMPLETALKPARAMS_CTOR_OFFSET))(this);
		}

	};
}
