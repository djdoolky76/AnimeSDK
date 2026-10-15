#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CPNCJIABDNP.h"
class BANDDFEHONE;
class CAOEEDDAPIK_NNBFMHKHMKO;
class GEDMHFPPBHN;
class KLLJEFNNCBM;
class MADHNHEMBOJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLLJEFNNCBM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB52E170)
#define KLLJEFNNCBM_CTOR_OFFSET UNITYSDK_OFFSET(0xB52E280)
#define KLLJEFNNCBM_GBPCICHOBNO_OFFSET UNITYSDK_OFFSET(0xB52E5B0)
#define KLLJEFNNCBM_GET_ITEMDATAS_OFFSET UNITYSDK_OFFSET(0xB52EB00)
#define KLLJEFNNCBM_HDIIEAELOPP_OFFSET UNITYSDK_OFFSET(0xB52E630)
#define KLLJEFNNCBM_LCJJKAKOPCC_OFFSET UNITYSDK_OFFSET(0xB52E520)
#define KLLJEFNNCBM_PIALNCOIPKG_OFFSET UNITYSDK_OFFSET(0xB52E290)
#define KLLJEFNNCBM_SET_ITEMDATAS_OFFSET UNITYSDK_OFFSET(0xB52EB10)

	class KLLJEFNNCBM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* _ItemDatas_k__BackingField; // 0x10
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_CTOR_OFFSET))(this);
		}

		static ::KLLJEFNNCBM* BPLPBPMEODA(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::KLLJEFNNCBM*(*)(::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void PIALNCOIPKG(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_PIALNCOIPKG_OFFSET))(this, a1);
		}

		::System::Void LCJJKAKOPCC(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_LCJJKAKOPCC_OFFSET))(this, a1);
		}

		::System::Boolean GBPCICHOBNO(::GEDMHFPPBHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_GBPCICHOBNO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::BANDDFEHONE*>* HDIIEAELOPP(::System::Collections::Generic::List_1<::CPNCJIABDNP>* a1)
		{
			return ((::System::Collections::Generic::List_1<::BANDDFEHONE*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::CPNCJIABDNP>*))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_HDIIEAELOPP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* get_ItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::GEDMHFPPBHN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_GET_ITEMDATAS_OFFSET))(this);
		}

		::System::Void set_ItemDatas(::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GEDMHFPPBHN*>*))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_SET_ITEMDATAS_OFFSET))(this, a1);
		}

	};
