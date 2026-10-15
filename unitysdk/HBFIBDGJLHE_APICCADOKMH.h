#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBFIBDGJLHE_EIntersectionConnectState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HBFIBDGJLHE;
class HBFIBDGJLHE_APICCADOKMH_HGAEEBKONNC;
class HBFIBDGJLHE_GIFMIOMFGNE;
class HBFIBDGJLHE_NOIHNPGDCDL;
class HBFIBDGJLHE_OCJKOIKBNIN;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::Client::CityCarFlow { class MonoCityCarFlowIntersection; }
namespace RPG::Client::CityCarFlow { class MonoCityCarFlowIntersection_Lane; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBFIBDGJLHE_APICCADOKMH_ACBFDHFCPBP_OFFSET UNITYSDK_OFFSET(0x15BE3050)
#define HBFIBDGJLHE_APICCADOKMH_BKKKECLIGCO_OFFSET UNITYSDK_OFFSET(0x15BE2500)
#define HBFIBDGJLHE_APICCADOKMH_CTOR_OFFSET UNITYSDK_OFFSET(0x15BE7230)
#define HBFIBDGJLHE_APICCADOKMH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BE9350)
#define HBFIBDGJLHE_APICCADOKMH_ENKGNEHAODP_OFFSET UNITYSDK_OFFSET(0x15BECC90)
#define HBFIBDGJLHE_APICCADOKMH_ENMOIEPGJOF_OFFSET UNITYSDK_OFFSET(0x15BECBC0)
#define HBFIBDGJLHE_APICCADOKMH_GET_CARS_OFFSET UNITYSDK_OFFSET(0x15BEC970)
#define HBFIBDGJLHE_APICCADOKMH_GET_CONNECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x15BEC990)
#define HBFIBDGJLHE_APICCADOKMH_GET_CONNECTROADINFO_OFFSET UNITYSDK_OFFSET(0x15BEC930)
#define HBFIBDGJLHE_APICCADOKMH_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x15BEC7D0)
#define HBFIBDGJLHE_APICCADOKMH_GET_ISFORCECLOSE_OFFSET UNITYSDK_OFFSET(0x15BEC9B0)
#define HBFIBDGJLHE_APICCADOKMH_GET_MATH_OFFSET UNITYSDK_OFFSET(0x15BEC770)
#define HBFIBDGJLHE_APICCADOKMH_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15BEC760)
#define HBFIBDGJLHE_APICCADOKMH_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x15BEC7B0)
#define HBFIBDGJLHE_APICCADOKMH_GET_PARENTROADS_OFFSET UNITYSDK_OFFSET(0x15BEC910)
#define HBFIBDGJLHE_APICCADOKMH_GET_POSITIVE_OFFSET UNITYSDK_OFFSET(0x15BEC790)
#define HBFIBDGJLHE_APICCADOKMH_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x15BEC950)
#define HBFIBDGJLHE_APICCADOKMH_GET_SPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x15BEC7F0)
#define HBFIBDGJLHE_APICCADOKMH_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x15BEC890)
#define HBFIBDGJLHE_APICCADOKMH_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x15BEC810)
#define HBFIBDGJLHE_APICCADOKMH_HGPOBJFNAKB_OFFSET UNITYSDK_OFFSET(0x15BECCE0)
#define HBFIBDGJLHE_APICCADOKMH_IHBLGGDOAPG_OFFSET UNITYSDK_OFFSET(0x15BE4470)
#define HBFIBDGJLHE_APICCADOKMH_IKKNECEBBDK_OFFSET UNITYSDK_OFFSET(0x15BED340)
#define HBFIBDGJLHE_APICCADOKMH_IMBEPGDNPFB_OFFSET UNITYSDK_OFFSET(0x15BECD30)
#define HBFIBDGJLHE_APICCADOKMH_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x15BE84A0)
#define HBFIBDGJLHE_APICCADOKMH_JDPGOCMDFLD_OFFSET UNITYSDK_OFFSET(0x15BECA60)
#define HBFIBDGJLHE_APICCADOKMH_KDMGGJDJKEO_OFFSET UNITYSDK_OFFSET(0x15BECB30)
#define HBFIBDGJLHE_APICCADOKMH_KOOAEJJPFLA_OFFSET UNITYSDK_OFFSET(0x15BEC9E0)
#define HBFIBDGJLHE_APICCADOKMH_LBGMEHCBDDL_OFFSET UNITYSDK_OFFSET(0x15BECC30)
#define HBFIBDGJLHE_APICCADOKMH_NHNPPPHPJKD_OFFSET UNITYSDK_OFFSET(0x15BECAB0)
#define HBFIBDGJLHE_APICCADOKMH_SET_CARS_OFFSET UNITYSDK_OFFSET(0x15BEC980)
#define HBFIBDGJLHE_APICCADOKMH_SET_CONNECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x15BEC9A0)
#define HBFIBDGJLHE_APICCADOKMH_SET_CONNECTROADINFO_OFFSET UNITYSDK_OFFSET(0x15BEC940)
#define HBFIBDGJLHE_APICCADOKMH_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x15BEC7E0)
#define HBFIBDGJLHE_APICCADOKMH_SET_ISFORCECLOSE_OFFSET UNITYSDK_OFFSET(0x15BEC9C0)
#define HBFIBDGJLHE_APICCADOKMH_SET_MATH_OFFSET UNITYSDK_OFFSET(0x15BEC780)
#define HBFIBDGJLHE_APICCADOKMH_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x15BEC7C0)
#define HBFIBDGJLHE_APICCADOKMH_SET_PARENTROADS_OFFSET UNITYSDK_OFFSET(0x15BEC920)
#define HBFIBDGJLHE_APICCADOKMH_SET_POSITIVE_OFFSET UNITYSDK_OFFSET(0x15BEC7A0)
#define HBFIBDGJLHE_APICCADOKMH_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x15BEC960)
#define HBFIBDGJLHE_APICCADOKMH_SET_SPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x15BEC800)

inline static constexpr unsigned int HBFIBDGJLHE_APICCADOKMH_TypeDefinitionIndex = 82181;

	class HBFIBDGJLHE_APICCADOKMH : public ::System::Object
	{
	public:
		::HBFIBDGJLHE_APICCADOKMH_HGAEEBKONNC* _ConnectRoadInfo_k__BackingField; // 0x10
		::HBFIBDGJLHE* _Proxy_k__BackingField; // 0x18
		::BansheeGz::BGSpline::Components::BGCcMath* _Math_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* _Cars_k__BackingField; // 0x28
		::Il2CppArray<::System::Object*>* _ParentRoads_k__BackingField; // 0x30
		::System::String* _Name_k__BackingField; // 0x38
		::System::Single _SpeedMultiplier_k__BackingField; // 0x40
		::System::Single _Offset_k__BackingField; // 0x44
		::HBFIBDGJLHE_EIntersectionConnectState _ConnectionState_k__BackingField; // 0x48
		::System::Single _Distance_k__BackingField; // 0x4C
		::System::Boolean _IsForceClose_k__BackingField; // 0x50
		::System::Boolean _Positive_k__BackingField; // 0x51
		::System::Void _ctor(::HBFIBDGJLHE* a1, ::RPG::Client::CityCarFlow::MonoCityCarFlowIntersection* a2, ::RPG::Client::CityCarFlow::MonoCityCarFlowIntersection_Lane* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE*, ::RPG::Client::CityCarFlow::MonoCityCarFlowIntersection*, ::RPG::Client::CityCarFlow::MonoCityCarFlowIntersection_Lane*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_GET_NAME_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* get_Math()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_GET_MATH_OFFSET))(this);
		}

		::System::Void set_Math(::BansheeGz::BGSpline::Components::BGCcMath* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_SET_MATH_OFFSET))(this, a1);
		}

		::System::Boolean get_Positive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_GET_POSITIVE_OFFSET))(this);
		}

		::System::Void set_Positive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_SET_POSITIVE_OFFSET))(this, a1);
		}

		::System::Single get_Offset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_SET_OFFSET_OFFSET))(this, a1);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void set_Distance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_SET_DISTANCE_OFFSET))(this, a1);
		}

		::System::Single get_SpeedMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_GET_SPEEDMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_SpeedMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_SET_SPEEDMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_GET_WIDTH_OFFSET))(this);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_GET_WEIGHT_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_ParentRoads()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_GET_PARENTROADS_OFFSET))(this);
		}

		::System::Void set_ParentRoads(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_SET_PARENTROADS_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_APICCADOKMH_HGAEEBKONNC* get_ConnectRoadInfo()
		{
			return ((::HBFIBDGJLHE_APICCADOKMH_HGAEEBKONNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_GET_CONNECTROADINFO_OFFSET))(this);
		}

		::System::Void set_ConnectRoadInfo(::HBFIBDGJLHE_APICCADOKMH_HGAEEBKONNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_APICCADOKMH_HGAEEBKONNC*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_SET_CONNECTROADINFO_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_NOIHNPGDCDL* IHBLGGDOAPG()
		{
			return ((::HBFIBDGJLHE_NOIHNPGDCDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_IHBLGGDOAPG_OFFSET))(this);
		}

		::HBFIBDGJLHE* get_Proxy()
		{
			return ((::HBFIBDGJLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::HBFIBDGJLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_SET_PROXY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_Cars()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_GET_CARS_OFFSET))(this);
		}

		::System::Void set_Cars(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_SET_CARS_OFFSET))(this, a1);
		}

		::System::Boolean BKKKECLIGCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_BKKKECLIGCO_OFFSET))(this);
		}

		::System::Boolean ACBFDHFCPBP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_ACBFDHFCPBP_OFFSET))(this);
		}

		::HBFIBDGJLHE_EIntersectionConnectState get_ConnectionState()
		{
			return ((::HBFIBDGJLHE_EIntersectionConnectState(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_GET_CONNECTIONSTATE_OFFSET))(this);
		}

		::System::Void set_ConnectionState(::HBFIBDGJLHE_EIntersectionConnectState a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_EIntersectionConnectState))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_SET_CONNECTIONSTATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsForceClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_GET_ISFORCECLOSE_OFFSET))(this);
		}

		::System::Void set_IsForceClose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_SET_ISFORCECLOSE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_DISPOSE_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_JDEKJLHMPLG_OFFSET))(this);
		}

		::HBFIBDGJLHE_GIFMIOMFGNE* KOOAEJJPFLA(::System::Int32 a1)
		{
			return ((::HBFIBDGJLHE_GIFMIOMFGNE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_KOOAEJJPFLA_OFFSET))(this, a1);
		}

		::System::Int32 JDPGOCMDFLD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_JDPGOCMDFLD_OFFSET))(this);
		}

		::System::Void NHNPPPHPJKD(::HBFIBDGJLHE_GIFMIOMFGNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_NHNPPPHPJKD_OFFSET))(this, a1);
		}

		::System::Void KDMGGJDJKEO(::HBFIBDGJLHE_GIFMIOMFGNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_KDMGGJDJKEO_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_OCJKOIKBNIN* ENMOIEPGJOF(::System::Int32 a1)
		{
			return ((::HBFIBDGJLHE_OCJKOIKBNIN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_ENMOIEPGJOF_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_OCJKOIKBNIN* LBGMEHCBDDL(::System::Int32 a1)
		{
			return ((::HBFIBDGJLHE_OCJKOIKBNIN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_LBGMEHCBDDL_OFFSET))(this, a1);
		}

		::System::Int32 ENKGNEHAODP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_ENKGNEHAODP_OFFSET))(this);
		}

		::System::Int32 HGPOBJFNAKB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_HGPOBJFNAKB_OFFSET))(this);
		}

		::System::Void IMBEPGDNPFB(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_IMBEPGDNPFB_OFFSET))(this, a1, a2, a3, a4);
		}

		::HBFIBDGJLHE_OCJKOIKBNIN* IKKNECEBBDK()
		{
			return ((::HBFIBDGJLHE_OCJKOIKBNIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_APICCADOKMH_IKKNECEBBDK_OFFSET))(this);
		}

	};
