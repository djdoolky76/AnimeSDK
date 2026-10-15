#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AssistantTipsData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HHGNCBKMHLC_CTOR_OFFSET UNITYSDK_OFFSET(0x15CBFDB0)
#define HHGNCBKMHLC_GET_PASSEDTIPS_OFFSET UNITYSDK_OFFSET(0x15CBFDA0)
#define HHGNCBKMHLC_JGLAJNNIHPG_OFFSET UNITYSDK_OFFSET(0x15CBFC80)
#define HHGNCBKMHLC_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x15CBFBD0)
#define HHGNCBKMHLC_KLDPIEICGEA_OFFSET UNITYSDK_OFFSET(0x15CBFCC0)

inline static constexpr unsigned int HHGNCBKMHLC_TypeDefinitionIndex = 62442;

	class HHGNCBKMHLC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AssistantTipsData*>* KGKDGABPFAM; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::AssistantTipsData*>* _PassedTips_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGNCBKMHLC_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGNCBKMHLC_JJNFOPNOPBF_OFFSET))(this);
		}

		::System::Boolean JGLAJNNIHPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGNCBKMHLC_JGLAJNNIHPG_OFFSET))(this);
		}

		::System::Void KLDPIEICGEA(::RPG::Client::AssistantTipsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssistantTipsData*))((::PBYTE)hIl2Cpp + HHGNCBKMHLC_KLDPIEICGEA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AssistantTipsData*>* get_PassedTips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AssistantTipsData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGNCBKMHLC_GET_PASSEDTIPS_OFFSET))(this);
		}

	};
