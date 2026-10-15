#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BundleArchiveFileJsonItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKHNJFFPMDC_BIKABOFADBP_OFFSET UNITYSDK_OFFSET(0xBA53DE0)
#define BKHNJFFPMDC_CTOR_OFFSET UNITYSDK_OFFSET(0xBA548D0)
#define BKHNJFFPMDC_DCDDKNNINEB_OFFSET UNITYSDK_OFFSET(0xBA54290)
#define BKHNJFFPMDC_FGHFJMHLLCG_OFFSET UNITYSDK_OFFSET(0xBA54480)
#define BKHNJFFPMDC_FIPDBFMPEKH_1_OFFSET UNITYSDK_OFFSET(0xBA54820)
#define BKHNJFFPMDC_FIPDBFMPEKH_OFFSET UNITYSDK_OFFSET(0xBA544D0)
#define BKHNJFFPMDC_HBKLOIKLEAP_OFFSET UNITYSDK_OFFSET(0xBA53E30)
#define BKHNJFFPMDC_LBHDGPKPDMJ_OFFSET UNITYSDK_OFFSET(0xBA54120)

inline static constexpr unsigned int BKHNJFFPMDC_TypeDefinitionIndex = 61210;

	class BKHNJFFPMDC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BundleArchiveFileJsonItem*>* ELLBAOHDHFE; // 0x10
		::System::String* LOAGDPONECC; // 0x18
		::System::Int32 BBGNJHAELDA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHNJFFPMDC_CTOR_OFFSET))(this);
		}

		::System::Void BIKABOFADBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHNJFFPMDC_BIKABOFADBP_OFFSET))(this);
		}

		::RPG::Client::BundleArchiveFileJsonItem* LBHDGPKPDMJ(::System::String* a1)
		{
			return ((::RPG::Client::BundleArchiveFileJsonItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BKHNJFFPMDC_LBHDGPKPDMJ_OFFSET))(this, a1);
		}

		::System::Void HBKLOIKLEAP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BKHNJFFPMDC_HBKLOIKLEAP_OFFSET))(this, a1);
		}

		::System::Void DCDDKNNINEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHNJFFPMDC_DCDDKNNINEB_OFFSET))(this);
		}

		::System::Void FGHFJMHLLCG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BKHNJFFPMDC_FGHFJMHLLCG_OFFSET))(this, a1);
		}

		::System::Void FIPDBFMPEKH(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BKHNJFFPMDC_FIPDBFMPEKH_OFFSET))(this, a1, a2);
		}

		::System::Void FIPDBFMPEKH_1(::RPG::Client::BundleArchiveFileJsonItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BundleArchiveFileJsonItem*))((::PBYTE)hIl2Cpp + BKHNJFFPMDC_FIPDBFMPEKH_1_OFFSET))(this, a1);
		}

	};
