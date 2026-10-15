#pragma once
#include "unitysdk/unitysdk.h"
class GAKCNIMEPPO;
namespace RPG::Client::ChenLingBattle { class Grid; }
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::GameCore { class TaskContext; }

#define HLBFPBKLHBH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D5A680)
#define HLBFPBKLHBH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D5A6B0)
#define HLBFPBKLHBH_MKIMCLHCNCF_OFFSET UNITYSDK_OFFSET(0x15D5AAA0)
#define HLBFPBKLHBH_MMEBGCLICID_OFFSET UNITYSDK_OFFSET(0x15D5A900)

	class HLBFPBKLHBH
	{
	public:
		::GAKCNIMEPPO* IGHAHBNLIJA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GAKCNIMEPPO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GAKCNIMEPPO*))((::PBYTE)hIl2Cpp + HLBFPBKLHBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBFPBKLHBH_EVALUATE_OFFSET))(this);
		}

		::System::Boolean MMEBGCLICID(::RPG::Client::ChenLingBattle::Grid* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Grid*))((::PBYTE)hIl2Cpp + HLBFPBKLHBH_MMEBGCLICID_OFFSET))(this, a1);
		}

		::System::Boolean MKIMCLHCNCF(::RPG::Client::ChenLingBattle::HandCard* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + HLBFPBKLHBH_MKIMCLHCNCF_OFFSET))(this, a1);
		}

	};
