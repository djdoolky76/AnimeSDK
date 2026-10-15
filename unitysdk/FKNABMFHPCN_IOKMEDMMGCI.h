#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftExamItemState.h"
#include "unitysdk/System/Object.h"
class FIEEBCKMKDF;
class FKNABMFHPCN;

#define FKNABMFHPCN_IOKMEDMMGCI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x158051E0)
#define FKNABMFHPCN_IOKMEDMMGCI_CTOR_OFFSET UNITYSDK_OFFSET(0x15805270)

inline static constexpr unsigned int FKNABMFHPCN_IOKMEDMMGCI_TypeDefinitionIndex = 79643;

	class FKNABMFHPCN_IOKMEDMMGCI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNABMFHPCN_IOKMEDMMGCI_CTOR_OFFSET))(this);
		}

		::FKNABMFHPCN* BPLPBPMEODA(::FIEEBCKMKDF* a1, ::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState a2)
		{
			return ((::FKNABMFHPCN*(*)(::PVOID, ::FIEEBCKMKDF*, ::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState))((::PBYTE)hIl2Cpp + FKNABMFHPCN_IOKMEDMMGCI_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
