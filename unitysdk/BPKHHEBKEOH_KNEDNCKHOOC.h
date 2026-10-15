#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFDIEEHGJED.h"
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BPKHHEBKEOH_KNEDNCKHOOC_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A8580)
#define BPKHHEBKEOH_KNEDNCKHOOC_GET_UIDTONEWCHIMERA_OFFSET UNITYSDK_OFFSET(0xC1A8750)
#define BPKHHEBKEOH_KNEDNCKHOOC_SET_UIDTONEWCHIMERA_OFFSET UNITYSDK_OFFSET(0xC1A8760)

	class BPKHHEBKEOH_KNEDNCKHOOC : public ::DFDIEEHGJED
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _UIDToNewChimera_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKHHEBKEOH_KNEDNCKHOOC_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_UIDToNewChimera()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKHHEBKEOH_KNEDNCKHOOC_GET_UIDTONEWCHIMERA_OFFSET))(this);
		}

		::System::Void set_UIDToNewChimera(::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + BPKHHEBKEOH_KNEDNCKHOOC_SET_UIDTONEWCHIMERA_OFFSET))(this, a1);
		}

	};
