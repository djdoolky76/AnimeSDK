#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChooseDeliveryEntry; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define KBMBHCFHHBI_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xB31EED0)
#define KBMBHCFHHBI_BMDDBINFHBM_OFFSET UNITYSDK_OFFSET(0xB31EE00)
#define KBMBHCFHHBI_CTOR_OFFSET UNITYSDK_OFFSET(0xB31F080)
#define KBMBHCFHHBI_GKKDODPDBLA_OFFSET UNITYSDK_OFFSET(0xB31ECD0)
#define KBMBHCFHHBI_PLKGPPKFHBB_OFFSET UNITYSDK_OFFSET(0xB31EF60)

	class KBMBHCFHHBI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChooseDeliveryEntry*>* JDBDEKAJPFB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMBHCFHHBI_CTOR_OFFSET))(this);
		}

		::RPG::Client::ChooseDeliveryEntry* GKKDODPDBLA(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChooseDeliveryEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBMBHCFHHBI_GKKDODPDBLA_OFFSET))(this, a1);
		}

		::System::Boolean BMDDBINFHBM(::System::UInt32 a1, ::RPG::Client::ChooseDeliveryEntry* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::ChooseDeliveryEntry*))((::PBYTE)hIl2Cpp + KBMBHCFHHBI_BMDDBINFHBM_OFFSET))(this, a1, a2);
		}

		::System::Boolean AALCFBOGFKP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBMBHCFHHBI_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* PLKGPPKFHBB()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMBHCFHHBI_PLKGPPKFHBB_OFFSET))(this);
		}

	};
