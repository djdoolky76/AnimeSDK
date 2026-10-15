#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConstraintConditionPredicateType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConstraintConditionStatType.h"
#include "unitysdk/System/Object.h"
class FIBKHDABPHD;
class JEBPFBNCALB;
class KKGMHJNMOID;
class POIONNNNCMJ;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IPKBMMPHPGL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C545740)
#define IPKBMMPHPGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C563BB0)
#define IPKBMMPHPGL_DDMGAAHEBMI_OFFSET UNITYSDK_OFFSET(0x1C563910)
#define IPKBMMPHPGL_HKNFMBPILHL_OFFSET UNITYSDK_OFFSET(0x1C562E90)
#define IPKBMMPHPGL_JALOJEDNDHP_OFFSET UNITYSDK_OFFSET(0x1C5634B0)

	class IPKBMMPHPGL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKBMMPHPGL_CTOR_OFFSET))(this);
		}

		::POIONNNNCMJ* BPLPBPMEODA(::KKGMHJNMOID* a1, ::FIBKHDABPHD* a2)
		{
			return ((::POIONNNNCMJ*(*)(::PVOID, ::KKGMHJNMOID*, ::FIBKHDABPHD*))((::PBYTE)hIl2Cpp + IPKBMMPHPGL_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

		::JEBPFBNCALB* HKNFMBPILHL(::RPG::Client::MechCraft::MechCraftConstraintConditionStatType a1, ::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType a2, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a3)
		{
			return ((::JEBPFBNCALB*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftConstraintConditionStatType, ::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + IPKBMMPHPGL_HKNFMBPILHL_OFFSET))(this, a1, a2, a3);
		}

		::JEBPFBNCALB* JALOJEDNDHP(::RPG::Client::MechCraft::MechCraftConstraintConditionStatType a1, ::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType a2, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a3, ::FIBKHDABPHD* a4)
		{
			return ((::JEBPFBNCALB*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftConstraintConditionStatType, ::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::FIBKHDABPHD*))((::PBYTE)hIl2Cpp + IPKBMMPHPGL_JALOJEDNDHP_OFFSET))(this, a1, a2, a3, a4);
		}

		::JEBPFBNCALB* DDMGAAHEBMI(::RPG::Client::MechCraft::MechCraftConstraintConditionStatType a1, ::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType a2, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a3)
		{
			return ((::JEBPFBNCALB*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftConstraintConditionStatType, ::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + IPKBMMPHPGL_DDMGAAHEBMI_OFFSET))(this, a1, a2, a3);
		}

	};
