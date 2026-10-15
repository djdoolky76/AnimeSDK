#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/PerformMark.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define OOLCJNAFGCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A0B40)
#define OOLCJNAFGCE_ONPDAALFIIH_OFFSET UNITYSDK_OFFSET(0x1C9A0AF0)

inline static constexpr unsigned int OOLCJNAFGCE_TypeDefinitionIndex = 42255;

	class OOLCJNAFGCE : public ::System::Object
	{
	public:
		::System::UInt32 ONPIPJNFCDO; // 0x10
		::RPG::Client::LittleGame::Match3::PerformMark NCAMLFJOLML; // 0x14
		::System::UInt32 FOPFDKNDOFL; // 0x18
		::System::Boolean AIAMHOBEECJ; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 DFEJABODPGM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOLCJNAFGCE_CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> ONPDAALFIIH()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + OOLCJNAFGCE_ONPDAALFIIH_OFFSET))(this);
		}

	};
