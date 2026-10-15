#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DialogueConditionRow; }

#define AHCKMADNOKB_JONOPHJFBDI_OFFSET UNITYSDK_OFFSET(0xEB7AAB0)

	class AHCKMADNOKB : public ::System::Object
	{
	public:
		static ::System::Boolean JONOPHJFBDI(::RPG::GameCore::DialogueConditionRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::DialogueConditionRow*))((::PBYTE)hIl2Cpp + AHCKMADNOKB_JONOPHJFBDI_OFFSET))(a1);
		}

	};
