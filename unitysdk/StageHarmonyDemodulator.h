#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class StageHarmonyDemodulatorUsrInfo;
namespace System { class String; }

#define STAGEHARMONYDEMODULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE98D640)

inline static constexpr unsigned int StageHarmonyDemodulator_TypeDefinitionIndex = 47523;

	class StageHarmonyDemodulator : public ::System::Object
	{
	public:
		::System::String* PropertyName; // 0x10
		::StageHarmonyDemodulatorUsrInfo* usrInfo; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYDEMODULATOR_CTOR_OFFSET))(this);
		}

	};
