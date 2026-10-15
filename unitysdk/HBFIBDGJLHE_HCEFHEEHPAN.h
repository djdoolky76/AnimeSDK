#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBFIBDGJLHE;
class NNJOIHFDHML;
namespace RPG::Client::CityCarFlow { class MonoCityCarFlowIntersection_SignRule; }
namespace System { class Object; }
namespace System { class String; }

#define HBFIBDGJLHE_HCEFHEEHPAN_CTOR_OFFSET UNITYSDK_OFFSET(0x15BF4410)
#define HBFIBDGJLHE_HCEFHEEHPAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BF4AA0)
#define HBFIBDGJLHE_HCEFHEEHPAN_EANMCEEEGBA_OFFSET UNITYSDK_OFFSET(0x15BF4E20)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_DETECTPEDESTRIANINTERSECTIONNAME_OFFSET UNITYSDK_OFFSET(0x15BF43B0)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x15BF4320)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_INTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x15BF4330)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_ISDETECTPEDESTRIANINTERSECTIONANYMOVINGPEDESTRIANINMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x15BF43F0)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_ISDETECTPEDESTRIANINTERSECTIONANYMOVINGPEDESTRIAN_OFFSET UNITYSDK_OFFSET(0x15BF43D0)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_OTHERINTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x15BF4350)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_PEDESTRIANINTERSECTIONSNAMES_OFFSET UNITYSDK_OFFSET(0x15BF4390)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_RULEDATAARR_OFFSET UNITYSDK_OFFSET(0x15BF4370)
#define HBFIBDGJLHE_HCEFHEEHPAN_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x15BF4310)
#define HBFIBDGJLHE_HCEFHEEHPAN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15BF4BD0)
#define HBFIBDGJLHE_HCEFHEEHPAN_NJCKELLBBGK_OFFSET UNITYSDK_OFFSET(0x15BED830)
#define HBFIBDGJLHE_HCEFHEEHPAN_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x15BF4D50)
#define HBFIBDGJLHE_HCEFHEEHPAN_SET_DETECTPEDESTRIANINTERSECTIONNAME_OFFSET UNITYSDK_OFFSET(0x15BF43C0)
#define HBFIBDGJLHE_HCEFHEEHPAN_SET_INTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x15BF4340)
#define HBFIBDGJLHE_HCEFHEEHPAN_SET_ISDETECTPEDESTRIANINTERSECTIONANYMOVINGPEDESTRIANINMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x15BF4400)
#define HBFIBDGJLHE_HCEFHEEHPAN_SET_ISDETECTPEDESTRIANINTERSECTIONANYMOVINGPEDESTRIAN_OFFSET UNITYSDK_OFFSET(0x15BF43E0)
#define HBFIBDGJLHE_HCEFHEEHPAN_SET_OTHERINTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x15BF4360)
#define HBFIBDGJLHE_HCEFHEEHPAN_SET_PEDESTRIANINTERSECTIONSNAMES_OFFSET UNITYSDK_OFFSET(0x15BF43A0)
#define HBFIBDGJLHE_HCEFHEEHPAN_SET_RULEDATAARR_OFFSET UNITYSDK_OFFSET(0x15BF4380)

inline static constexpr unsigned int HBFIBDGJLHE_HCEFHEEHPAN_TypeDefinitionIndex = 82188;

	class HBFIBDGJLHE_HCEFHEEHPAN : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _RuleDataArr_k__BackingField; // 0x10
		::Il2CppArray<::System::String*>* _PedestrianIntersectionsNames_k__BackingField; // 0x18
		::System::String* _DetectPedestrianIntersectionName_k__BackingField; // 0x20
		::Il2CppArray<::System::Object*>* _Intersections_k__BackingField; // 0x28
		::Il2CppArray<::System::Object*>* _OtherIntersections_k__BackingField; // 0x30
		::System::Boolean _IsDetectPedestrianIntersectionAnyMovingPedestrian_k__BackingField; // 0x38
		::System::Boolean _IsDetectPedestrianIntersectionAnyMovingPedestrianInMainThread_k__BackingField; // 0x39
		::System::Byte _padding0[0x2];
		::System::Single _Duration_k__BackingField; // 0x3C
		::System::Single _TimeStamp_k__BackingField; // 0x40
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
