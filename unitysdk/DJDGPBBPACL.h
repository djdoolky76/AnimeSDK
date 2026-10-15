#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueFormulaData; }
namespace System { class String; }

#define DJDGPBBPACL_CTOR_OFFSET UNITYSDK_OFFSET(0xF2291D0)
#define DJDGPBBPACL_GET_FORMULA_OFFSET UNITYSDK_OFFSET(0xF2292F0)
#define DJDGPBBPACL_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF2291E0)
#define DJDGPBBPACL_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xF229280)

inline static constexpr unsigned int DJDGPBBPACL_TypeDefinitionIndex = 66999;

	class DJDGPBBPACL : public ::System::Object
	{
	public:
		::RPG::Client::RogueFormulaData* _Formula_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + DJDGPBBPACL_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDGPBBPACL_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDGPBBPACL_TRIGGERACTION_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaData* get_Formula()
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDGPBBPACL_GET_FORMULA_OFFSET))(this);
		}

	};
