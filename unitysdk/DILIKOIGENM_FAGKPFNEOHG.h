#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DILIKOIGENM;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftCoinViewModel; }

#define DILIKOIGENM_FAGKPFNEOHG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xF213A20)
#define DILIKOIGENM_FAGKPFNEOHG_CTOR_OFFSET UNITYSDK_OFFSET(0xF213A10)

	class DILIKOIGENM_FAGKPFNEOHG : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* NMFGHOLPOJG; // 0x10
		::System::Void _ctor(::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel*))((::PBYTE)hIl2Cpp + DILIKOIGENM_FAGKPFNEOHG_CTOR_OFFSET))(this, a1);
		}

		::DILIKOIGENM* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::DILIKOIGENM*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DILIKOIGENM_FAGKPFNEOHG_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
