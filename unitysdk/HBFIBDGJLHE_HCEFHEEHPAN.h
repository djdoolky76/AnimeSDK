#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBFIBDGJLHE;
class NNJOIHFDHML;
namespace RPG::Client::CityCarFlow { class MonoCityCarFlowIntersection_SignRule; }
namespace System { class Object; }
namespace System { class String; }

#define HBFIBDGJLHE_HCEFHEEHPAN_CTOR_OFFSET UNITYSDK_OFFSET(0x15C01070)
#define HBFIBDGJLHE_HCEFHEEHPAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C01700)
#define HBFIBDGJLHE_HCEFHEEHPAN_EANMCEEEGBA_OFFSET UNITYSDK_OFFSET(0x15C01A80)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_DETECTPEDESTRIANINTERSECTIONNAME_OFFSET UNITYSDK_OFFSET(0x15C01010)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x15C00F80)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_INTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x15C00F90)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_ISDETECTPEDESTRIANINTERSECTIONANYMOVINGPEDESTRIANINMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x15C01050)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_ISDETECTPEDESTRIANINTERSECTIONANYMOVINGPEDESTRIAN_OFFSET UNITYSDK_OFFSET(0x15C01030)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_OTHERINTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x15C00FB0)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_PEDESTRIANINTERSECTIONSNAMES_OFFSET UNITYSDK_OFFSET(0x15C00FF0)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_RULEDATAARR_OFFSET UNITYSDK_OFFSET(0x15C00FD0)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x15C00F70)
#define HBFIBDGJLHE_HCEFHEEHPAN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15C01830)
#define HBFIBDGJLHE_HCEFHEEHPAN_NJCKELLBBGK_OFFSET UNITYSDK_OFFSET(0x15BFA480)
#define HBFIBDGJLHE_HCEFHEEHPAN_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x15C019B0)
#define HBFIBDGJLHE_HCEFHEEHPAN_SET_DETECTPEDESTRIANINTERSECTIONNAME_OFFSET UNITYSDK_OFFSET(0x15C01020)
#define HBFIBDGJLHE_HCEFHEEHPAN_SET_INTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x15C00FA0)
#define HBFIBDGJLHE_HCEFHEEHPAN_SET_ISDETECTPEDESTRIANINTERSECTIONANYMOVINGPEDESTRIANINMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x15C01060)
#define HBFIBDGJLHE_HCEFHEEHPAN_SET_ISDETECTPEDESTRIANINTERSECTIONANYMOVINGPEDESTRIAN_OFFSET UNITYSDK_OFFSET(0x15C01040)
#define HBFIBDGJLHE_HCEFHEEHPAN_SET_OTHERINTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x15C00FC0)
#define HBFIBDGJLHE_HCEFHEEHPAN_SET_PEDESTRIANINTERSECTIONSNAMES_OFFSET UNITYSDK_OFFSET(0x15C01000)
#define HBFIBDGJLHE_HCEFHEEHPAN_SET_RULEDATAARR_OFFSET UNITYSDK_OFFSET(0x15C00FE0)

	class HBFIBDGJLHE_HCEFHEEHPAN : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _OtherIntersections_k__BackingField; // 0x10
		::System::String* _DetectPedestrianIntersectionName_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* _Intersections_k__BackingField; // 0x20
		::Il2CppArray<::System::String*>* _PedestrianIntersectionsNames_k__BackingField; // 0x28
		::Il2CppArray<::System::Object*>* _RuleDataArr_k__BackingField; // 0x30
		::System::Single _Duration_k__BackingField; // 0x38
		::System::Single _TimeStamp_k__BackingField; // 0x3C
		::System::Boolean _IsDetectPedestrianIntersectionAnyMovingPedestrianInMainThread_k__BackingField; // 0x40
		::System::Boolean _IsDetectPedestrianIntersectionAnyMovingPedestrian_k__BackingField; // 0x41
		::System::Void _ctor(::HBFIBDGJLHE* a1, ::System::Single a2, ::RPG::Client::CityCarFlow::MonoCityCarFlowIntersection_SignRule* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE*, ::System::Single, ::RPG::Client::CityCarFlow::MonoCityCarFlowIntersection_SignRule*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_TimeStamp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_GET_TIMESTAMP_OFFSET))(this);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_GET_DURATION_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_Intersections()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_GET_INTERSECTIONS_OFFSET))(this);
		}

		::System::Void set_Intersections(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_SET_INTERSECTIONS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* get_OtherIntersections()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_GET_OTHERINTERSECTIONS_OFFSET))(this);
		}

		::System::Void set_OtherIntersections(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_SET_OTHERINTERSECTIONS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* get_RuleDataArr()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_GET_RULEDATAARR_OFFSET))(this);
		}

		::System::Void set_RuleDataArr(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_SET_RULEDATAARR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_PedestrianIntersectionsNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_GET_PEDESTRIANINTERSECTIONSNAMES_OFFSET))(this);
		}

		::System::Void set_PedestrianIntersectionsNames(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_SET_PEDESTRIANINTERSECTIONSNAMES_OFFSET))(this, a1);
		}

		::System::String* get_DetectPedestrianIntersectionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_GET_DETECTPEDESTRIANINTERSECTIONNAME_OFFSET))(this);
		}

		::System::Void set_DetectPedestrianIntersectionName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_SET_DETECTPEDESTRIANINTERSECTIONNAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDetectPedestrianIntersectionAnyMovingPedestrian()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_GET_ISDETECTPEDESTRIANINTERSECTIONANYMOVINGPEDESTRIAN_OFFSET))(this);
		}

		::System::Void set_IsDetectPedestrianIntersectionAnyMovingPedestrian(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_SET_ISDETECTPEDESTRIANINTERSECTIONANYMOVINGPEDESTRIAN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDetectPedestrianIntersectionAnyMovingPedestrianInMainThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_GET_ISDETECTPEDESTRIANINTERSECTIONANYMOVINGPEDESTRIANINMAINTHREAD_OFFSET))(this);
		}

		::System::Void set_IsDetectPedestrianIntersectionAnyMovingPedestrianInMainThread(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_SET_ISDETECTPEDESTRIANINTERSECTIONANYMOVINGPEDESTRIANINMAINTHREAD_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_DISPOSE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::Single a1, ::NNJOIHFDHML* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::NNJOIHFDHML*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_PKADDEPKJFN_OFFSET))(this, a1, a2);
		}

		::System::Boolean NJCKELLBBGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_NJCKELLBBGK_OFFSET))(this);
		}

		::System::Void EANMCEEEGBA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HCEFHEEHPAN_EANMCEEEGBA_OFFSET))(this, a1);
		}

	};
