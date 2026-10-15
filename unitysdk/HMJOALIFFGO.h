#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueFormulaData; }
namespace System { class String; }

#define HMJOALIFFGO_CTOR_OFFSET UNITYSDK_OFFSET(0x15D857E0)
#define HMJOALIFFGO_GET_FORMULA_OFFSET UNITYSDK_OFFSET(0x15D85A50)
#define HMJOALIFFGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15D857F0)
#define HMJOALIFFGO_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x15D85890)

	class HMJOALIFFGO : public ::System::Object
	{
	public:
		::RPG::Client::RogueFormulaData* _Formula_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + HMJOALIFFGO_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJOALIFFGO_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJOALIFFGO_TRIGGERACTION_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaData* get_Formula()
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJOALIFFGO_GET_FORMULA_OFFSET))(this);
		}

	};
