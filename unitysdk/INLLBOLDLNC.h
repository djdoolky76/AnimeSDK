#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGCJIEGAOLH.h"
#include "unitysdk/System/Object.h"
class EHKNLKAPGLG;
class KHDJLEELKHD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INLLBOLDLNC_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x164F6E60)
#define INLLBOLDLNC_CTOR_OFFSET UNITYSDK_OFFSET(0x164F6F80)
#define INLLBOLDLNC_DHDELPIGBJE_OFFSET UNITYSDK_OFFSET(0x164F7000)
#define INLLBOLDLNC_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x164F6E40)
#define INLLBOLDLNC_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x164F6E50)

	class INLLBOLDLNC : public ::System::Object
	{
	public:
		::EHKNLKAPGLG* _Factory_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::IGCJIEGAOLH, ::KHDJLEELKHD*>* BFFMOHNLAMI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INLLBOLDLNC_CTOR_OFFSET))(this);
		}

		::EHKNLKAPGLG* get_Factory()
		{
			return ((::EHKNLKAPGLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + INLLBOLDLNC_GET_FACTORY_OFFSET))(this);
		}

		::System::Void set_Factory(::EHKNLKAPGLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHKNLKAPGLG*))((::PBYTE)hIl2Cpp + INLLBOLDLNC_SET_FACTORY_OFFSET))(this, a1);
		}

		::KHDJLEELKHD* ACMKLFOMPFC(::IGCJIEGAOLH a1)
		{
			return ((::KHDJLEELKHD*(*)(::PVOID, ::IGCJIEGAOLH))((::PBYTE)hIl2Cpp + INLLBOLDLNC_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::KHDJLEELKHD* DHDELPIGBJE(::IGCJIEGAOLH a1)
		{
			return ((::KHDJLEELKHD*(*)(::PVOID, ::IGCJIEGAOLH))((::PBYTE)hIl2Cpp + INLLBOLDLNC_DHDELPIGBJE_OFFSET))(this, a1);
		}

	};
