#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueFormulaData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODENGLAMPEH_CTOR_OFFSET UNITYSDK_OFFSET(0xBD8A560)
#define ODENGLAMPEH_PAEOPFFDNJM_OFFSET UNITYSDK_OFFSET(0xBD8A750)
#define ODENGLAMPEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBD8A5E0)
#define ODENGLAMPEH_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xBD8A670)

inline static constexpr unsigned int ODENGLAMPEH_TypeDefinitionIndex = 66993;

	class ODENGLAMPEH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* FOBOPMENMHD; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueFormulaData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + ODENGLAMPEH_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODENGLAMPEH_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODENGLAMPEH_TRIGGERACTION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueFormulaData*>* PAEOPFFDNJM()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODENGLAMPEH_PAEOPFFDNJM_OFFSET))(this);
		}

	};
