#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueFormulaData; }
namespace System { class String; }

#define OGNDLEOODHN_CTOR_OFFSET UNITYSDK_OFFSET(0xBE5D650)
#define OGNDLEOODHN_GET_FORMULA_OFFSET UNITYSDK_OFFSET(0xBE5D770)
#define OGNDLEOODHN_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBE5D660)
#define OGNDLEOODHN_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xBE5D700)

inline static constexpr unsigned int OGNDLEOODHN_TypeDefinitionIndex = 66992;

	class OGNDLEOODHN : public ::System::Object
	{
	public:
		::RPG::Client::RogueFormulaData* _Formula_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + OGNDLEOODHN_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNDLEOODHN_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNDLEOODHN_TRIGGERACTION_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaData* get_Formula()
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNDLEOODHN_GET_FORMULA_OFFSET))(this);
		}

	};
