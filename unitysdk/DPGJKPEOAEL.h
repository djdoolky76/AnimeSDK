#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueFormulaData; }
namespace System { class String; }

#define DPGJKPEOAEL_CTOR_OFFSET UNITYSDK_OFFSET(0x11FF72F0)
#define DPGJKPEOAEL_GET_FORMULA_OFFSET UNITYSDK_OFFSET(0x11FF7410)
#define DPGJKPEOAEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11FF7300)
#define DPGJKPEOAEL_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x11FF73A0)

inline static constexpr unsigned int DPGJKPEOAEL_TypeDefinitionIndex = 66996;

	class DPGJKPEOAEL : public ::System::Object
	{
	public:
		::RPG::Client::RogueFormulaData* _Formula_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + DPGJKPEOAEL_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGJKPEOAEL_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGJKPEOAEL_TRIGGERACTION_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaData* get_Formula()
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGJKPEOAEL_GET_FORMULA_OFFSET))(this);
		}

	};
