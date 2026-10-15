#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILLIGDNCEPB;
class MHNMKHAPAHM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ILLIGDNCEPB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x164B6DB0)
#define ILLIGDNCEPB_CTOR_OFFSET UNITYSDK_OFFSET(0x164B6F20)
#define ILLIGDNCEPB_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x164B6FD0)
#define ILLIGDNCEPB_FPMKPHFKANN_OFFSET UNITYSDK_OFFSET(0x164B7660)
#define ILLIGDNCEPB_GAAELMFOCEH_OFFSET UNITYSDK_OFFSET(0x164B79A0)
#define ILLIGDNCEPB_KFKOJKEAAOC_OFFSET UNITYSDK_OFFSET(0x164B73A0)
#define ILLIGDNCEPB_OFODEKABIPD_OFFSET UNITYSDK_OFFSET(0x164B7280)
#define ILLIGDNCEPB_POKADPBNMDC_OFFSET UNITYSDK_OFFSET(0x164B7020)

inline static constexpr unsigned int ILLIGDNCEPB_TypeDefinitionIndex = 66032;

	class ILLIGDNCEPB : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* NHIKAMIAKFA; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MHNMKHAPAHM*>* MBAAKPLLCBP; // 0x18
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
