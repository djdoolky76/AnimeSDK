#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFDMGLFFPMH.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HPIILKMDMFO_JCEIPJFPCJD_CAOGJKPPAHG_OFFSET UNITYSDK_OFFSET(0x17A637B0)
#define HPIILKMDMFO_JCEIPJFPCJD_DFLNDGLEBBB_OFFSET UNITYSDK_OFFSET(0x17A637A0)
#define HPIILKMDMFO_JCEIPJFPCJD_KGBCEDOCBOL_OFFSET UNITYSDK_OFFSET(0x17A637D0)
#define HPIILKMDMFO_JCEIPJFPCJD_KHBEPHLIBPC_OFFSET UNITYSDK_OFFSET(0x17A637C0)
#define HPIILKMDMFO_JCEIPJFPCJD_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17A63760)
#define HPIILKMDMFO_JCEIPJFPCJD__CTOR_OFFSET UNITYSDK_OFFSET(0x17A635D0)

inline static constexpr unsigned int HPIILKMDMFO_JCEIPJFPCJD_TypeDefinitionIndex = 58764;

class HPIILKMDMFO_JCEIPJFPCJD : public ::JJEJBPGJPJN
{
public:
	::System::Collections::Generic::List_1<::GFDMGLFFPMH>* _DELBIKCOAFF_k__BackingField; // 0x88
	::System::Collections::Generic::List_1<::System::Object*>* _BDCCAMIKIIB_k__BackingField; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIILKMDMFO_JCEIPJFPCJD__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIILKMDMFO_JCEIPJFPCJD_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::GFDMGLFFPMH>* DFLNDGLEBBB()
	{
		return ((::System::Collections::Generic::List_1<::GFDMGLFFPMH>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIILKMDMFO_JCEIPJFPCJD_DFLNDGLEBBB_OFFSET))(this);
	}

	::System::Void CAOGJKPPAHG(::System::Collections::Generic::List_1<::System::Object*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HPIILKMDMFO_JCEIPJFPCJD_CAOGJKPPAHG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Object*>* KHBEPHLIBPC()
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIILKMDMFO_JCEIPJFPCJD_KHBEPHLIBPC_OFFSET))(this);
	}

	::System::Void KGBCEDOCBOL(::System::Collections::Generic::List_1<::GFDMGLFFPMH>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GFDMGLFFPMH>*))((::PBYTE)hIl2Cpp + HPIILKMDMFO_JCEIPJFPCJD_KGBCEDOCBOL_OFFSET))(this, EGEGIMGMJHN);
	}
};
