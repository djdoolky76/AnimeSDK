#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class StageHarmonyDemodulatorUsrInfo;
namespace System { class String; }

#define STAGEHARMONYDEMODULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC4CB60)

inline static constexpr unsigned int StageHarmonyDemodulator_TypeDefinitionIndex = 48552;

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
