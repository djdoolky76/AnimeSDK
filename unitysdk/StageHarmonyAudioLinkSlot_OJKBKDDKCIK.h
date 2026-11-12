#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define STAGEHARMONYAUDIOLINKSLOT_OJKBKDDKCIK_CTOR_OFFSET UNITYSDK_OFFSET(0xF4A0FE0)

inline static constexpr unsigned int StageHarmonyAudioLinkSlot_OJKBKDDKCIK_TypeDefinitionIndex = 48565;

	class StageHarmonyAudioLinkSlot_OJKBKDDKCIK : public ::System::Object
	{
	public:
		::System::Single FMMPKEJMKAN; // 0x10
		::System::UInt32 NMBKAIEIAPE; // 0x14
		::System::Boolean HAMFJMEFEJE; // 0x18
		::System::Boolean PODBDMJEMJP; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 CBPFGEHDHCK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_OJKBKDDKCIK_CTOR_OFFSET))(this);
		}

	};
