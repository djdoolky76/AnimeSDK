#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FAFFMDBPCGJ_GIAOFOIKCKM.h"
class FiveDimRenderingItem;
class INMMPMDELKE;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FAFFMDBPCGJ_GNEDEMCFKGI_ALCLGFPGDPI_OFFSET UNITYSDK_OFFSET(0x156781C0)
#define FAFFMDBPCGJ_GNEDEMCFKGI_BNHFHKHNMDG_OFFSET UNITYSDK_OFFSET(0x1567A370)
#define FAFFMDBPCGJ_GNEDEMCFKGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1566D3A0)
#define FAFFMDBPCGJ_GNEDEMCFKGI_DNHPJGOFILA_OFFSET UNITYSDK_OFFSET(0x1566EC80)
#define FAFFMDBPCGJ_GNEDEMCFKGI_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x15672AD0)
#define FAFFMDBPCGJ_GNEDEMCFKGI_EHICOCENCBL_OFFSET UNITYSDK_OFFSET(0x1567A360)
#define FAFFMDBPCGJ_GNEDEMCFKGI_GIDJKPNEOMG_OFFSET UNITYSDK_OFFSET(0x156769E0)
#define FAFFMDBPCGJ_GNEDEMCFKGI_HFCAOJOMCFI_OFFSET UNITYSDK_OFFSET(0x156782D0)
#define FAFFMDBPCGJ_GNEDEMCFKGI_LEGDFJHAFJJ_OFFSET UNITYSDK_OFFSET(0x1566EE90)
#define FAFFMDBPCGJ_GNEDEMCFKGI_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1566DE20)

	class FAFFMDBPCGJ_GNEDEMCFKGI : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::FiveDimRenderingItem*>* LBDAEKMCPDB; // 0x10
		::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* JGFGIFGPMEG; // 0x18
		::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::System::Object*>* IEJGIDNBGGH; // 0x20
		::System::Collections::Generic::List_1<::INMMPMDELKE*>* HBCGAKPGGAI; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::INMMPMDELKE*>* OHINGGBOLDF; // 0x30
		::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::INMMPMDELKE*>* JCOOCEHAMKB; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FiveDimRenderingItem*>*>* NHEKGPPBLGF; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GNEDEMCFKGI_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* EHICOCENCBL()
		{
			return ((::System::Collections::Generic::List_1<::FiveDimRenderingItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GNEDEMCFKGI_EHICOCENCBL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::INMMPMDELKE*>* BNHFHKHNMDG()
		{
			return ((::System::Collections::Generic::List_1<::INMMPMDELKE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GNEDEMCFKGI_BNHFHKHNMDG_OFFSET))(this);
		}

		::System::Boolean EGFCFCBHJJP(::INMMPMDELKE* a1, ::FiveDimRenderingItem* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GNEDEMCFKGI_EGFCFCBHJJP_OFFSET))(this, a1, a2);
		}

		::System::Boolean DNHPJGOFILA(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GNEDEMCFKGI_DNHPJGOFILA_OFFSET))(this, a1, a2);
		}

		::System::Boolean ALCLGFPGDPI(::FiveDimRenderingItem* a1, ::INMMPMDELKE* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FiveDimRenderingItem*, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GNEDEMCFKGI_ALCLGFPGDPI_OFFSET))(this, a1, a2);
		}

		::System::Void LEGDFJHAFJJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GNEDEMCFKGI_LEGDFJHAFJJ_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GNEDEMCFKGI_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean GIDJKPNEOMG(::FiveDimRenderingItem* a1, ::FAFFMDBPCGJ_GIAOFOIKCKM a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FiveDimRenderingItem*, ::FAFFMDBPCGJ_GIAOFOIKCKM))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GNEDEMCFKGI_GIDJKPNEOMG_OFFSET))(this, a1, a2);
		}

		::System::Void HFCAOJOMCFI(::FiveDimRenderingItem* a1, ::FAFFMDBPCGJ_GIAOFOIKCKM a2)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*, ::FAFFMDBPCGJ_GIAOFOIKCKM))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GNEDEMCFKGI_HFCAOJOMCFI_OFFSET))(this, a1, a2);
		}

	};
