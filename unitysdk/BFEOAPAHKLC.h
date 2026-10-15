#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueBuffData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFEOAPAHKLC_CTOR_OFFSET UNITYSDK_OFFSET(0xB161C90)
#define BFEOAPAHKLC_DEOFKLDKNMJ_OFFSET UNITYSDK_OFFSET(0xB161E40)
#define BFEOAPAHKLC_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB161D10)
#define BFEOAPAHKLC_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xB161DA0)

inline static constexpr unsigned int BFEOAPAHKLC_TypeDefinitionIndex = 66979;

	class BFEOAPAHKLC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* JMFEAGMLOEA; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueBuffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueBuffData*>*))((::PBYTE)hIl2Cpp + BFEOAPAHKLC_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEOAPAHKLC_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEOAPAHKLC_TRIGGERACTION_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueBuffData*>* DEOFKLDKNMJ()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEOAPAHKLC_DEOFKLDKNMJ_OFFSET))(this);
		}

	};
