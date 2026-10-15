#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EBHGKOEPPJI___c__DisplayClass10_0.h"
#include "unitysdk/EBHGKOEPPJI___c__DisplayClass9_0.h"
class CNFKALLAIDO;
class EBHGKOEPPJI_LFENKFMEOFI;
class EBHGKOEPPJI_PLIPDIDMOOC;
class GPJENJKHNCN;
class JIGPGHCDBOE;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBHGKOEPPJI_CTOR_OFFSET UNITYSDK_OFFSET(0x12CF2680)
#define EBHGKOEPPJI_JCGDJLNBOMD_OFFSET UNITYSDK_OFFSET(0x12CF35C0)
#define EBHGKOEPPJI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12CF4C70)
#define EBHGKOEPPJI_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x12CF2710)
#define EBHGKOEPPJI__TICK_G__TICKONGOING_10_0_OFFSET UNITYSDK_OFFSET(0x12CF4D00)
#define EBHGKOEPPJI__TICK_G__TICKPENDING_10_1_OFFSET UNITYSDK_OFFSET(0x12CF4E00)
#define EBHGKOEPPJI__TRYCANCEL_G__DOREMOVEONGOINGUNITS_9_2_OFFSET UNITYSDK_OFFSET(0x12CF4A10)
#define EBHGKOEPPJI__TRYCANCEL_G__DOREMOVEPENDINGUNITS_9_3_OFFSET UNITYSDK_OFFSET(0x12CF4B40)
#define EBHGKOEPPJI__TRYCANCEL_G__PREPAREREMOVEONGOINGUNITS_9_1_OFFSET UNITYSDK_OFFSET(0x12CF4850)
#define EBHGKOEPPJI__TRYCANCEL_G__PREPAREREMOVEPENDINGUNITS_9_0_OFFSET UNITYSDK_OFFSET(0x12CF4930)

	class EBHGKOEPPJI : public ::System::Object
	{
	public:
		::GPJENJKHNCN* GEFAIMFFEHM; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* KFNOFJHBOOO; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* EHCPLMGGBLI; // 0x20
		::CNFKALLAIDO* MKAMMPCICFI; // 0x28
		::System::Single BPAIDCADMDO; // 0x30
		::System::Void _ctor(::GPJENJKHNCN* a1, ::CNFKALLAIDO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GPJENJKHNCN*, ::CNFKALLAIDO*))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB(::JIGPGHCDBOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIGPGHCDBOE*))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Boolean JCGDJLNBOMD(::JIGPGHCDBOE* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftAttributeType>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JIGPGHCDBOE*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftAttributeType>*))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_JCGDJLNBOMD_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void _TryCancel_g__PrepareRemovePendingUnits_9_0(::EBHGKOEPPJI_PLIPDIDMOOC* a1, ::EBHGKOEPPJI___c__DisplayClass9_0 a2)
		{
			return ((::System::Void(*)(::PVOID, ::EBHGKOEPPJI_PLIPDIDMOOC*, ::EBHGKOEPPJI___c__DisplayClass9_0))((::PBYTE)hIl2Cpp + EBHGKOEPPJI__TRYCANCEL_G__PREPAREREMOVEPENDINGUNITS_9_0_OFFSET))(this, a1, a2);
		}

		::System::Void _TryCancel_g__PrepareRemoveOngoingUnits_9_1(::EBHGKOEPPJI_LFENKFMEOFI* a1, ::EBHGKOEPPJI___c__DisplayClass9_0 a2)
		{
			return ((::System::Void(*)(::PVOID, ::EBHGKOEPPJI_LFENKFMEOFI*, ::EBHGKOEPPJI___c__DisplayClass9_0))((::PBYTE)hIl2Cpp + EBHGKOEPPJI__TRYCANCEL_G__PREPAREREMOVEONGOINGUNITS_9_1_OFFSET))(this, a1, a2);
		}

		::System::Void _TryCancel_g__DoRemoveOngoingUnits_9_2(::EBHGKOEPPJI___c__DisplayClass9_0 a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBHGKOEPPJI___c__DisplayClass9_0))((::PBYTE)hIl2Cpp + EBHGKOEPPJI__TRYCANCEL_G__DOREMOVEONGOINGUNITS_9_2_OFFSET))(this, a1);
		}

		::System::Void _TryCancel_g__DoRemovePendingUnits_9_3(::EBHGKOEPPJI___c__DisplayClass9_0 a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBHGKOEPPJI___c__DisplayClass9_0))((::PBYTE)hIl2Cpp + EBHGKOEPPJI__TRYCANCEL_G__DOREMOVEPENDINGUNITS_9_3_OFFSET))(this, a1);
		}

		::System::Void _Tick_g__TickOngoing_10_0(::EBHGKOEPPJI___c__DisplayClass10_0 a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBHGKOEPPJI___c__DisplayClass10_0))((::PBYTE)hIl2Cpp + EBHGKOEPPJI__TICK_G__TICKONGOING_10_0_OFFSET))(this, a1);
		}

		::System::Void _Tick_g__TickPending_10_1(::EBHGKOEPPJI___c__DisplayClass10_0 a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBHGKOEPPJI___c__DisplayClass10_0))((::PBYTE)hIl2Cpp + EBHGKOEPPJI__TICK_G__TICKPENDING_10_1_OFFSET))(this, a1);
		}

	};
