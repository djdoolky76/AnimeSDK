#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define STAGEHARMONYAUDIOLINKSLOT_OJKBKDDKCIK_CTOR_OFFSET UNITYSDK_OFFSET(0xE98B9E0)

inline static constexpr unsigned int StageHarmonyAudioLinkSlot_OJKBKDDKCIK_TypeDefinitionIndex = 47536;

	class StageHarmonyAudioLinkSlot_OJKBKDDKCIK : public ::System::Object
	{
	public:
		::System::Int32 CBPFGEHDHCK; // 0x10
		::System::Single FMMPKEJMKAN; // 0x14
		::System::Boolean HAMFJMEFEJE; // 0x18
		::System::Boolean PODBDMJEMJP; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 NMBKAIEIAPE; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_OJKBKDDKCIK_CTOR_OFFSET))(this);
		}

	};
