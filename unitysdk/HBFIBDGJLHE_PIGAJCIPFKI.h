#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBFIBDGJLHE;
class NNJOIHFDHML;
namespace RPG::Client::CityCarFlow { class MonoCityCarFlowIntersection; }
namespace System { class Object; }
namespace System { class String; }

#define HBFIBDGJLHE_PIGAJCIPFKI_CTOR_OFFSET UNITYSDK_OFFSET(0x15BF3FE0)
#define HBFIBDGJLHE_PIGAJCIPFKI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BF5D10)
#define HBFIBDGJLHE_PIGAJCIPFKI_GET_INTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x15C028A0)
#define HBFIBDGJLHE_PIGAJCIPFKI_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x15C02880)
#define HBFIBDGJLHE_PIGAJCIPFKI_GET_PEDESTRIANINTERSECTIONSNAMES_OFFSET UNITYSDK_OFFSET(0x15C028C0)
#define HBFIBDGJLHE_PIGAJCIPFKI_GET_RULES_OFFSET UNITYSDK_OFFSET(0x15C028E0)
#define HBFIBDGJLHE_PIGAJCIPFKI_GET_TIMETABLE_OFFSET UNITYSDK_OFFSET(0x15C02860)
#define HBFIBDGJLHE_PIGAJCIPFKI_GET_TOTALTIME_OFFSET UNITYSDK_OFFSET(0x15C02890)
#define HBFIBDGJLHE_PIGAJCIPFKI_IILCIKLJHHM_OFFSET UNITYSDK_OFFSET(0x15C02A20)
#define HBFIBDGJLHE_PIGAJCIPFKI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15C02900)
#define HBFIBDGJLHE_PIGAJCIPFKI_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15BF57C0)
#define HBFIBDGJLHE_PIGAJCIPFKI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15BF7960)
#define HBFIBDGJLHE_PIGAJCIPFKI_SET_INTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x15C028B0)
#define HBFIBDGJLHE_PIGAJCIPFKI_SET_PEDESTRIANINTERSECTIONSNAMES_OFFSET UNITYSDK_OFFSET(0x15C028D0)
#define HBFIBDGJLHE_PIGAJCIPFKI_SET_RULES_OFFSET UNITYSDK_OFFSET(0x15C028F0)
#define HBFIBDGJLHE_PIGAJCIPFKI_SET_TIMETABLE_OFFSET UNITYSDK_OFFSET(0x15C02870)

	class HBFIBDGJLHE_PIGAJCIPFKI : public ::System::Object
	{
	public:
		::NNJOIHFDHML* _Timetable_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _Intersections_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* _Rules_k__BackingField; // 0x20
		::Il2CppArray<::System::String*>* _PedestrianIntersectionsNames_k__BackingField; // 0x28
		::System::Int32 DFDNIKNHJFJ; // 0x30
		::System::Single _Offset_k__BackingField; // 0x34
		::System::Single _TotalTime_k__BackingField; // 0x38
		::System::Single COCJDAKNIAP; // 0x3C
		::System::Void _ctor(::HBFIBDGJLHE* a1, ::RPG::Client::CityCarFlow::MonoCityCarFlowIntersection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE*, ::RPG::Client::CityCarFlow::MonoCityCarFlowIntersection*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_PIGAJCIPFKI_CTOR_OFFSET))(this, a1, a2);
		}

		::NNJOIHFDHML* get_Timetable()
		{
			return ((::NNJOIHFDHML*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_PIGAJCIPFKI_GET_TIMETABLE_OFFSET))(this);
		}

		::System::Void set_Timetable(::NNJOIHFDHML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNJOIHFDHML*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_PIGAJCIPFKI_SET_TIMETABLE_OFFSET))(this, a1);
		}

		::System::Single get_Offset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_PIGAJCIPFKI_GET_OFFSET_OFFSET))(this);
		}

		::System::Single get_TotalTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_PIGAJCIPFKI_GET_TOTALTIME_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_Intersections()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_PIGAJCIPFKI_GET_INTERSECTIONS_OFFSET))(this);
		}

		::System::Void set_Intersections(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_PIGAJCIPFKI_SET_INTERSECTIONS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_PedestrianIntersectionsNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_PIGAJCIPFKI_GET_PEDESTRIANINTERSECTIONSNAMES_OFFSET))(this);
		}

		::System::Void set_PedestrianIntersectionsNames(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_PIGAJCIPFKI_SET_PEDESTRIANINTERSECTIONSNAMES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* get_Rules()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_PIGAJCIPFKI_GET_RULES_OFFSET))(this);
		}

		::System::Void set_Rules(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_PIGAJCIPFKI_SET_RULES_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_PIGAJCIPFKI_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_PIGAJCIPFKI_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_PIGAJCIPFKI_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_PIGAJCIPFKI_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Int32 IILCIKLJHHM(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_PIGAJCIPFKI_IILCIKLJHHM_OFFSET))(this, a1);
		}

	};
