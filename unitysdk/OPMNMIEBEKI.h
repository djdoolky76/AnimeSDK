#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCFMCBFNLND.h"
class KAKADGHNMFK;
class PEBLIEJAJPK;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define OPMNMIEBEKI_CTOR_OFFSET UNITYSDK_OFFSET(0xBFAC7D0)
#define OPMNMIEBEKI_LEEPJIGMNDK_OFFSET UNITYSDK_OFFSET(0xBFACC60)
#define OPMNMIEBEKI_NODPBIKOJCF_OFFSET UNITYSDK_OFFSET(0xBFAC850)
#define OPMNMIEBEKI__SELECTENTITYIDS_B__4_2_OFFSET UNITYSDK_OFFSET(0xBFACCE0)

inline static constexpr unsigned int OPMNMIEBEKI_TypeDefinitionIndex = 77643;

	class OPMNMIEBEKI : public ::OCFMCBFNLND
	{
	public:
		::System::Collections::Generic::Queue_1<::PEBLIEJAJPK*>* JIOFGGJAALC; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* PIJFBMKEOIE; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* IBKPFCOIKOI; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMNMIEBEKI_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* NODPBIKOJCF(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + OPMNMIEBEKI_NODPBIKOJCF_OFFSET))(this, a1);
		}

		::KAKADGHNMFK* LEEPJIGMNDK()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMNMIEBEKI_LEEPJIGMNDK_OFFSET))(this);
		}

		::System::Boolean _SelectEntityIDs_b__4_2(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + OPMNMIEBEKI__SELECTENTITYIDS_B__4_2_OFFSET))(this, a1);
		}

	};
