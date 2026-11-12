#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CPNCJIABDNP.h"
class BANDDFEHONE;
class GEDMHFPPBHN;
class ICCCNAJCCLE;
namespace RPG::Client { class BattleAvatarNihiluxCustomUIData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFKAIFPGEBK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD5C15A0)
#define AFKAIFPGEBK_CTOR_OFFSET UNITYSDK_OFFSET(0xD5C1B00)
#define AFKAIFPGEBK_FMDHMPHHAAE_OFFSET UNITYSDK_OFFSET(0xD5C1A80)

inline static constexpr unsigned int AFKAIFPGEBK_TypeDefinitionIndex = 74226;

	class AFKAIFPGEBK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKAIFPGEBK_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::BANDDFEHONE*>* BPLPBPMEODA(::GEDMHFPPBHN* a1, ::System::Collections::Generic::List_1<::CPNCJIABDNP>* a2, ::RPG::Client::BattleAvatarNihiluxCustomUIData* a3)
		{
			return ((::System::Collections::Generic::List_1<::BANDDFEHONE*>*(*)(::GEDMHFPPBHN*, ::System::Collections::Generic::List_1<::CPNCJIABDNP>*, ::RPG::Client::BattleAvatarNihiluxCustomUIData*))((::PBYTE)hIl2Cpp + AFKAIFPGEBK_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		static ::ICCCNAJCCLE* FMDHMPHHAAE(::GEDMHFPPBHN* a1, ::RPG::Client::BattleAvatarNihiluxCustomUIData* a2)
		{
			return ((::ICCCNAJCCLE*(*)(::GEDMHFPPBHN*, ::RPG::Client::BattleAvatarNihiluxCustomUIData*))((::PBYTE)hIl2Cpp + AFKAIFPGEBK_FMDHMPHHAAE_OFFSET))(a1, a2);
		}

	};
