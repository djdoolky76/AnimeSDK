#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistantRuleType.h"
#include "unitysdk/System/Object.h"
class NCDOCGFHEEL;

#define OINNJLHINFG_NCJLIOPPOJB_OFFSET UNITYSDK_OFFSET(0xBEA2880)

	class OINNJLHINFG : public ::System::Object
	{
	public:
		static ::NCDOCGFHEEL* NCJLIOPPOJB(::RPG::GameCore::AssistantRuleType a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::NCDOCGFHEEL*(*)(::RPG::GameCore::AssistantRuleType, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + OINNJLHINFG_NCJLIOPPOJB_OFFSET))(a1, a2);
		}

	};
