#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonsterData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEAAKMBHGFC_ALGFGDICNIA_OFFSET UNITYSDK_OFFSET(0xBB50510)
#define NEAAKMBHGFC_CTOR_OFFSET UNITYSDK_OFFSET(0xBB505E0)
#define NEAAKMBHGFC_PHCFJEMFJGC_OFFSET UNITYSDK_OFFSET(0xBB50370)
#define NEAAKMBHGFC_PKCALGKEPBG_OFFSET UNITYSDK_OFFSET(0xBB50400)

inline static constexpr unsigned int NEAAKMBHGFC_TypeDefinitionIndex = 63936;

	class NEAAKMBHGFC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAAKMBHGFC_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* PHCFJEMFJGC(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEAAKMBHGFC_PHCFJEMFJGC_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterData* PKCALGKEPBG(::System::UInt32 a1)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEAAKMBHGFC_PKCALGKEPBG_OFFSET))(this, a1);
		}

		::System::String* ALGFGDICNIA(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEAAKMBHGFC_ALGFGDICNIA_OFFSET))(this, a1);
		}

	};
