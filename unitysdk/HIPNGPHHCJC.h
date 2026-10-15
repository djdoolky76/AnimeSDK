#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HIPNGPHHCJC_CTOR_OFFSET UNITYSDK_OFFSET(0x15D01320)
#define HIPNGPHHCJC_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x15D012E0)
#define HIPNGPHHCJC_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x15D01300)
#define HIPNGPHHCJC_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x15D012F0)
#define HIPNGPHHCJC_SET_QUESTID_OFFSET UNITYSDK_OFFSET(0x15D01310)

	class HIPNGPHHCJC : public ::System::Object
	{
	public:
		::System::UInt32 _Level_k__BackingField; // 0x10
		::System::UInt32 _QuestID_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPNGPHHCJC_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPNGPHHCJC_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIPNGPHHCJC_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPNGPHHCJC_GET_QUESTID_OFFSET))(this);
		}

		::System::Void set_QuestID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIPNGPHHCJC_SET_QUESTID_OFFSET))(this, a1);
		}

	};
