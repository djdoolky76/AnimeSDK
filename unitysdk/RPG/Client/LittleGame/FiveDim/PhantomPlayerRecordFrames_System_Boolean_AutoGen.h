#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERRECORDFRAMES_SYSTEM_BOOLEAN_AUTOGEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA06EF0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PhantomPlayerRecordFrames_System_Boolean_AutoGen_TypeDefinitionIndex = 43636;

	class PhantomPlayerRecordFrames_System_Boolean_AutoGen
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERRECORDFRAMES_SYSTEM_BOOLEAN_AUTOGEN_CTOR_OFFSET))(this);
		}

	};
}
