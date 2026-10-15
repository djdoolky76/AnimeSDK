#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraDuelRankData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POBNHFMGBMO_CTOR_OFFSET UNITYSDK_OFFSET(0xC357A60)
#define POBNHFMGBMO_MGBLNNGAENN_OFFSET UNITYSDK_OFFSET(0xC358030)
#define POBNHFMGBMO_MMDKIAGJEAE_OFFSET UNITYSDK_OFFSET(0xC357FA0)
#define POBNHFMGBMO_ONPBAPMOGLL_OFFSET UNITYSDK_OFFSET(0xC357E60)

inline static constexpr unsigned int POBNHFMGBMO_TypeDefinitionIndex = 63378;

	class POBNHFMGBMO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelRankData*>* OOKLLACALNI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBNHFMGBMO_CTOR_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelRankData* ONPBAPMOGLL(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelRankData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POBNHFMGBMO_ONPBAPMOGLL_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelRankData* MMDKIAGJEAE(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelRankData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POBNHFMGBMO_MMDKIAGJEAE_OFFSET))(this, a1);
		}

		static ::System::UInt32 MGBLNNGAENN()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + POBNHFMGBMO_MGBLNNGAENN_OFFSET))();
		}

	};
