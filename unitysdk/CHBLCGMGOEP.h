#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NADABFJHEHM.h"
namespace RPG::Client { class AnniversaryCollectionPanelData; }

#define CHBLCGMGOEP_CTOR_OFFSET UNITYSDK_OFFSET(0xCC910A0)
#define CHBLCGMGOEP_MNFDJHCGKNE_OFFSET UNITYSDK_OFFSET(0xCC910B0)

	class CHBLCGMGOEP : public ::NADABFJHEHM
	{
	public:
		::System::Void _ctor(::RPG::Client::AnniversaryCollectionPanelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnniversaryCollectionPanelData*))((::PBYTE)hIl2Cpp + CHBLCGMGOEP_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MNFDJHCGKNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBLCGMGOEP_MNFDJHCGKNE_OFFSET))(this);
		}

	};
