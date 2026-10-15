#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HBFIBDGJLHE;
class HBFIBDGJLHE_APICCADOKMH;
class HBFIBDGJLHE_GIFMIOMFGNE;
class HBFIBDGJLHE_OCJKOIKBNIN;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::Client::CityCarFlow { class MonoCityCarFlowRoad; }
namespace RPG::Client::CityCarFlow { class MonoCityCarFlowRoad_Lane; }
namespace System { class Object; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBFIBDGJLHE_NOIHNPGDCDL_CPOKOFJICAK_OFFSET UNITYSDK_OFFSET(0x15BFDAA0)
#define HBFIBDGJLHE_NOIHNPGDCDL_CTOR_OFFSET UNITYSDK_OFFSET(0x15BF3B70)
#define HBFIBDGJLHE_NOIHNPGDCDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BF5F50)
#define HBFIBDGJLHE_NOIHNPGDCDL_ENKGNEHAODP_OFFSET UNITYSDK_OFFSET(0x15C02460)
#define HBFIBDGJLHE_NOIHNPGDCDL_ENMOIEPGJOF_OFFSET UNITYSDK_OFFSET(0x15C02390)
#define HBFIBDGJLHE_NOIHNPGDCDL_GET_CARS_OFFSET UNITYSDK_OFFSET(0x15C021A0)
#define HBFIBDGJLHE_NOIHNPGDCDL_GET_CONNECTS_OFFSET UNITYSDK_OFFSET(0x15C02160)
#define HBFIBDGJLHE_NOIHNPGDCDL_GET_DESIREDCARS_OFFSET UNITYSDK_OFFSET(0x15C021C0)
#define HBFIBDGJLHE_NOIHNPGDCDL_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x15C02100)
#define HBFIBDGJLHE_NOIHNPGDCDL_GET_INTERNALRANDOM_OFFSET UNITYSDK_OFFSET(0x15C021E0)
#define HBFIBDGJLHE_NOIHNPGDCDL_GET_MATH_OFFSET UNITYSDK_OFFSET(0x15C02060)
#define HBFIBDGJLHE_NOIHNPGDCDL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15C02050)
#define HBFIBDGJLHE_NOIHNPGDCDL_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x15C020A0)
#define HBFIBDGJLHE_NOIHNPGDCDL_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x15C02140)
#define HBFIBDGJLHE_NOIHNPGDCDL_GET_POSITIVE_OFFSET UNITYSDK_OFFSET(0x15C02080)
#define HBFIBDGJLHE_NOIHNPGDCDL_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x15C02180)
#define HBFIBDGJLHE_NOIHNPGDCDL_GET_SPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x15C02120)
#define HBFIBDGJLHE_NOIHNPGDCDL_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x15C020E0)
#define HBFIBDGJLHE_NOIHNPGDCDL_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x15C020C0)
#define HBFIBDGJLHE_NOIHNPGDCDL_HGPOBJFNAKB_OFFSET UNITYSDK_OFFSET(0x15C00E70)
#define HBFIBDGJLHE_NOIHNPGDCDL_ICDPBAPNGOB_OFFSET UNITYSDK_OFFSET(0x15BF10E0)
#define HBFIBDGJLHE_NOIHNPGDCDL_IKKNECEBBDK_OFFSET UNITYSDK_OFFSET(0x15C024B0)
#define HBFIBDGJLHE_NOIHNPGDCDL_IMBEPGDNPFB_OFFSET UNITYSDK_OFFSET(0x15BFA840)
#define HBFIBDGJLHE_NOIHNPGDCDL_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x15BF51F0)
#define HBFIBDGJLHE_NOIHNPGDCDL_JDPGOCMDFLD_OFFSET UNITYSDK_OFFSET(0x15BFB590)
#define HBFIBDGJLHE_NOIHNPGDCDL_KDMGGJDJKEO_OFFSET UNITYSDK_OFFSET(0x15C02300)
#define HBFIBDGJLHE_NOIHNPGDCDL_KOOAEJJPFLA_OFFSET UNITYSDK_OFFSET(0x15BFB5E0)
#define HBFIBDGJLHE_NOIHNPGDCDL_LBGMEHCBDDL_OFFSET UNITYSDK_OFFSET(0x15C023E0)
#define HBFIBDGJLHE_NOIHNPGDCDL_LFHMJOFEGIH_OFFSET UNITYSDK_OFFSET(0x15BF21A0)
#define HBFIBDGJLHE_NOIHNPGDCDL_NHNPPPHPJKD_OFFSET UNITYSDK_OFFSET(0x15C02280)
#define HBFIBDGJLHE_NOIHNPGDCDL_SET_CARS_OFFSET UNITYSDK_OFFSET(0x15C021B0)
#define HBFIBDGJLHE_NOIHNPGDCDL_SET_CONNECTS_OFFSET UNITYSDK_OFFSET(0x15C02170)
#define HBFIBDGJLHE_NOIHNPGDCDL_SET_DESIREDCARS_OFFSET UNITYSDK_OFFSET(0x15C021D0)
#define HBFIBDGJLHE_NOIHNPGDCDL_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x15C02110)
#define HBFIBDGJLHE_NOIHNPGDCDL_SET_INTERNALRANDOM_OFFSET UNITYSDK_OFFSET(0x15C021F0)
#define HBFIBDGJLHE_NOIHNPGDCDL_SET_MATH_OFFSET UNITYSDK_OFFSET(0x15C02070)
#define HBFIBDGJLHE_NOIHNPGDCDL_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x15C020B0)
#define HBFIBDGJLHE_NOIHNPGDCDL_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x15C02150)
#define HBFIBDGJLHE_NOIHNPGDCDL_SET_POSITIVE_OFFSET UNITYSDK_OFFSET(0x15C02090)
#define HBFIBDGJLHE_NOIHNPGDCDL_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x15C02190)
#define HBFIBDGJLHE_NOIHNPGDCDL_SET_SPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x15C02130)
#define HBFIBDGJLHE_NOIHNPGDCDL_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x15C020F0)
#define HBFIBDGJLHE_NOIHNPGDCDL_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x15C020D0)

inline static constexpr unsigned int HBFIBDGJLHE_NOIHNPGDCDL_TypeDefinitionIndex = 82180;

	class HBFIBDGJLHE_NOIHNPGDCDL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _DesiredCars_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _Cars_k__BackingField; // 0x18
		::BansheeGz::BGSpline::Components::BGCcMath* _Math_k__BackingField; // 0x20
		::Il2CppArray<::System::Object*>* _Connects_k__BackingField; // 0x28
		::System::Random* _InternalRandom_k__BackingField; // 0x30
		::HBFIBDGJLHE_APICCADOKMH* _Parent_k__BackingField; // 0x38
		::System::String* _Name_k__BackingField; // 0x40
		::HBFIBDGJLHE* _Proxy_k__BackingField; // 0x48
		::System::Single _Offset_k__BackingField; // 0x50
		::System::Single _SpeedMultiplier_k__BackingField; // 0x54
		::System::Single FEOEKMCFCJB; // 0x58
		::System::Single _Width_k__BackingField; // 0x5C
		::System::Single _Distance_k__BackingField; // 0x60
		::System::Single _Weight_k__BackingField; // 0x64
		::System::Boolean _Positive_k__BackingField; // 0x68
		::System::Void _ctor(::HBFIBDGJLHE* a1, ::RPG::Client::CityCarFlow::MonoCityCarFlowRoad* a2, ::RPG::Client::CityCarFlow::MonoCityCarFlowRoad_Lane* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE*, ::RPG::Client::CityCarFlow::MonoCityCarFlowRoad*, ::RPG::Client::CityCarFlow::MonoCityCarFlowRoad_Lane*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_GET_NAME_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* get_Math()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_GET_MATH_OFFSET))(this);
		}

		::System::Void set_Math(::BansheeGz::BGSpline::Components::BGCcMath* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_SET_MATH_OFFSET))(this, a1);
		}

		::System::Boolean get_Positive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_GET_POSITIVE_OFFSET))(this);
		}

		::System::Void set_Positive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_SET_POSITIVE_OFFSET))(this, a1);
		}

		::System::Single get_Offset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_SET_OFFSET_OFFSET))(this, a1);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_Weight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_SET_WEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void set_Distance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_SET_DISTANCE_OFFSET))(this, a1);
		}

		::System::Single get_SpeedMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_GET_SPEEDMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_SpeedMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_SET_SPEEDMULTIPLIER_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_APICCADOKMH* get_Parent()
		{
			return ((::HBFIBDGJLHE_APICCADOKMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_Parent(::HBFIBDGJLHE_APICCADOKMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_APICCADOKMH*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_SET_PARENT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* get_Connects()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_GET_CONNECTS_OFFSET))(this);
		}

		::System::Void set_Connects(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_SET_CONNECTS_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE* get_Proxy()
		{
			return ((::HBFIBDGJLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::HBFIBDGJLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_SET_PROXY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_Cars()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_GET_CARS_OFFSET))(this);
		}

		::System::Void set_Cars(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_SET_CARS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_DesiredCars()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_GET_DESIREDCARS_OFFSET))(this);
		}

		::System::Void set_DesiredCars(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_SET_DESIREDCARS_OFFSET))(this, a1);
		}

		::System::Random* get_InternalRandom()
		{
			return ((::System::Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_GET_INTERNALRANDOM_OFFSET))(this);
		}

		::System::Void set_InternalRandom(::System::Random* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Random*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_SET_INTERNALRANDOM_OFFSET))(this, a1);
		}

		::System::Void JDEKJLHMPLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_JDEKJLHMPLG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_DISPOSE_OFFSET))(this);
		}

		::HBFIBDGJLHE_GIFMIOMFGNE* KOOAEJJPFLA(::System::Int32 a1)
		{
			return ((::HBFIBDGJLHE_GIFMIOMFGNE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_KOOAEJJPFLA_OFFSET))(this, a1);
		}

		::System::Int32 JDPGOCMDFLD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_JDPGOCMDFLD_OFFSET))(this);
		}

		::System::Void NHNPPPHPJKD(::HBFIBDGJLHE_GIFMIOMFGNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_NHNPPPHPJKD_OFFSET))(this, a1);
		}

		::System::Void KDMGGJDJKEO(::HBFIBDGJLHE_GIFMIOMFGNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_KDMGGJDJKEO_OFFSET))(this, a1);
		}

		::System::Int32 CPOKOFJICAK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_CPOKOFJICAK_OFFSET))(this);
		}

		::System::Void LFHMJOFEGIH(::HBFIBDGJLHE_GIFMIOMFGNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_LFHMJOFEGIH_OFFSET))(this, a1);
		}

		::System::Void ICDPBAPNGOB(::HBFIBDGJLHE_GIFMIOMFGNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_ICDPBAPNGOB_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_OCJKOIKBNIN* ENMOIEPGJOF(::System::Int32 a1)
		{
			return ((::HBFIBDGJLHE_OCJKOIKBNIN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_ENMOIEPGJOF_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_OCJKOIKBNIN* LBGMEHCBDDL(::System::Int32 a1)
		{
			return ((::HBFIBDGJLHE_OCJKOIKBNIN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_LBGMEHCBDDL_OFFSET))(this, a1);
		}

		::System::Int32 ENKGNEHAODP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_ENKGNEHAODP_OFFSET))(this);
		}

		::System::Int32 HGPOBJFNAKB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_HGPOBJFNAKB_OFFSET))(this);
		}

		::System::Void IMBEPGDNPFB(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_IMBEPGDNPFB_OFFSET))(this, a1, a2, a3, a4);
		}

		::HBFIBDGJLHE_OCJKOIKBNIN* IKKNECEBBDK()
		{
			return ((::HBFIBDGJLHE_OCJKOIKBNIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOIHNPGDCDL_IKKNECEBBDK_OFFSET))(this);
		}

	};
