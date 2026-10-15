#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnniversaryCollectionPanelEnum.h"
#include "unitysdk/System/Object.h"
class IMCNFFHOKLK;
namespace RPG::Client { class AnniversaryCollectionPanelData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLLAGBNKIJH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB52DE90)
#define KLLAGBNKIJH_CTOR_OFFSET UNITYSDK_OFFSET(0xB52E0E0)
#define KLLAGBNKIJH_JAEDGDEMCFM_OFFSET UNITYSDK_OFFSET(0xB52DEE0)

	class KLLAGBNKIJH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnniversaryCollectionPanelEnum, ::IMCNFFHOKLK*>* EEMPAAFDLAP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLAGBNKIJH_CTOR_OFFSET))(this);
		}

		::IMCNFFHOKLK* BPLPBPMEODA(::RPG::Client::AnniversaryCollectionPanelData* a1)
		{
			return ((::IMCNFFHOKLK*(*)(::PVOID, ::RPG::Client::AnniversaryCollectionPanelData*))((::PBYTE)hIl2Cpp + KLLAGBNKIJH_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::IMCNFFHOKLK* JAEDGDEMCFM(::RPG::Client::AnniversaryCollectionPanelData* a1)
		{
			return ((::IMCNFFHOKLK*(*)(::PVOID, ::RPG::Client::AnniversaryCollectionPanelData*))((::PBYTE)hIl2Cpp + KLLAGBNKIJH_JAEDGDEMCFM_OFFSET))(this, a1);
		}

	};
