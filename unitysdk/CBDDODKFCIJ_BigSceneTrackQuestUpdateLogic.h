#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

#define CBDDODKFCIJ_BIGSCENETRACKQUESTUPDATELOGIC_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x14F12670)
#define CBDDODKFCIJ_BIGSCENETRACKQUESTUPDATELOGIC__CTOR_OFFSET UNITYSDK_OFFSET(0x14F12640)

inline static constexpr unsigned int CBDDODKFCIJ_BigSceneTrackQuestUpdateLogic_TypeDefinitionIndex = 74348;

class CBDDODKFCIJ_BigSceneTrackQuestUpdateLogic : public ::MoleMole::LogicMessageBase
{
public:
	::System::Int32 _version; // 0x20
	::System::Int32 _questID; // 0x24

	::System::Void _ctor(::System::Int32 version, ::System::Int32 questID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_BIGSCENETRACKQUESTUPDATELOGIC__CTOR_OFFSET))(this, version, questID);
	}

	::System::Void OnProcess()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_BIGSCENETRACKQUESTUPDATELOGIC_ONPROCESS_OFFSET))(this);
	}
};
