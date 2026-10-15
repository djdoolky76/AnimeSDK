#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INPDCDFPKON;
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOBLPGFPLEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA24B90)
#define MOBLPGFPLEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBA24BC0)
#define MOBLPGFPLEM___C__GETALLEQUIPPEDNORMALEQUIPSCOPY_B__24_0_OFFSET UNITYSDK_OFFSET(0xBA24C50)
#define MOBLPGFPLEM___C__GETALLEQUIPPEDNORMALEQUIPSCOPY_B__24_1_OFFSET UNITYSDK_OFFSET(0xBA24C70)
#define MOBLPGFPLEM___C___INITSLOTS_B__13_0_OFFSET UNITYSDK_OFFSET(0xBA24BD0)
#define MOBLPGFPLEM___C___INITSPSLOTS_B__14_0_OFFSET UNITYSDK_OFFSET(0xBA24C10)

inline static constexpr unsigned int MOBLPGFPLEM___c_TypeDefinitionIndex = 75247;

	class MOBLPGFPLEM___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14510);
		}

		static ::System::Func_2<::INPDCDFPKON*, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::INPDCDFPKON*, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14518);
		}

		static ::System::Comparison_1<::INPDCDFPKON*>** StaticGet___9__13_0()
		{
			return (::System::Comparison_1<::INPDCDFPKON*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14520);
		}

		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*, ::System::Boolean>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14528);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOBLPGFPLEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBLPGFPLEM___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __InitSlots_b__13_0(::INPDCDFPKON* a1, ::INPDCDFPKON* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::INPDCDFPKON*, ::INPDCDFPKON*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM___C___INITSLOTS_B__13_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __InitSpSlots_b__14_0(::RPG::Client::ActivityIdleLive::SpEquipSlotData* a1, ::RPG::Client::ActivityIdleLive::SpEquipSlotData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM___C___INITSPSLOTS_B__14_0_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* _GetAllEquippedNormalEquipsCopy_b__24_0(::INPDCDFPKON* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*(*)(::PVOID, ::INPDCDFPKON*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM___C__GETALLEQUIPPEDNORMALEQUIPSCOPY_B__24_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetAllEquippedNormalEquipsCopy_b__24_1(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM___C__GETALLEQUIPPEDNORMALEQUIPSCOPY_B__24_1_OFFSET))(this, a1);
		}

	};
