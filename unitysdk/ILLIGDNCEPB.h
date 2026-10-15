#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILLIGDNCEPB;
class MHNMKHAPAHM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ILLIGDNCEPB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x164C4DA0)
#define ILLIGDNCEPB_CTOR_OFFSET UNITYSDK_OFFSET(0x164C4F10)
#define ILLIGDNCEPB_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x164C4FC0)
#define ILLIGDNCEPB_FPMKPHFKANN_OFFSET UNITYSDK_OFFSET(0x164C5650)
#define ILLIGDNCEPB_GAAELMFOCEH_OFFSET UNITYSDK_OFFSET(0x164C5990)
#define ILLIGDNCEPB_KFKOJKEAAOC_OFFSET UNITYSDK_OFFSET(0x164C5390)
#define ILLIGDNCEPB_OFODEKABIPD_OFFSET UNITYSDK_OFFSET(0x164C5270)
#define ILLIGDNCEPB_POKADPBNMDC_OFFSET UNITYSDK_OFFSET(0x164C5010)

	class ILLIGDNCEPB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MHNMKHAPAHM*>* MBAAKPLLCBP; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* NHIKAMIAKFA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLIGDNCEPB_CTOR_OFFSET))(this);
		}

		static ::ILLIGDNCEPB* BPLPBPMEODA()
		{
			return ((::ILLIGDNCEPB*(*)())((::PBYTE)hIl2Cpp + ILLIGDNCEPB_BPLPBPMEODA_OFFSET))();
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLIGDNCEPB_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void POKADPBNMDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLIGDNCEPB_POKADPBNMDC_OFFSET))(this);
		}

		::MHNMKHAPAHM* OFODEKABIPD()
		{
			return ((::MHNMKHAPAHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLIGDNCEPB_OFODEKABIPD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MHNMKHAPAHM*>* KFKOJKEAAOC()
		{
			return ((::System::Collections::Generic::List_1<::MHNMKHAPAHM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLIGDNCEPB_KFKOJKEAAOC_OFFSET))(this);
		}

		static ::MHNMKHAPAHM* FPMKPHFKANN(::System::Collections::Generic::List_1<::MHNMKHAPAHM*>* a1)
		{
			return ((::MHNMKHAPAHM*(*)(::System::Collections::Generic::List_1<::MHNMKHAPAHM*>*))((::PBYTE)hIl2Cpp + ILLIGDNCEPB_FPMKPHFKANN_OFFSET))(a1);
		}

		::System::Void GAAELMFOCEH(::MHNMKHAPAHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHNMKHAPAHM*))((::PBYTE)hIl2Cpp + ILLIGDNCEPB_GAAELMFOCEH_OFFSET))(this, a1);
		}

	};
