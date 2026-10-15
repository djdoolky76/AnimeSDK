#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class AIKPPIALBEM;
class APGBLBKCHAB;
class MBIIAKHKBNI;
namespace RPG::Client { class AlleyRouteElasticView; }
namespace RPG::Client { template <typename T> class IRoutePointList_1; }
namespace RPG::Client { template <typename T> class RoutePointList_1; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define OBOJAKCHDBN_CTOR_OFFSET UNITYSDK_OFFSET(0xBD49DA0)
#define OBOJAKCHDBN_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xBD4A110)
#define OBOJAKCHDBN_DPLBOIIMAEM_OFFSET UNITYSDK_OFFSET(0xBD49ED0)
#define OBOJAKCHDBN_GET_ROUTERENDERER_OFFSET UNITYSDK_OFFSET(0xBD49C00)
#define OBOJAKCHDBN_GET_ROUTEVIEW_OFFSET UNITYSDK_OFFSET(0xBD49C40)
#define OBOJAKCHDBN_GGEBBACDBNJ_OFFSET UNITYSDK_OFFSET(0xBD49DF0)
#define OBOJAKCHDBN_GOHAJILHKPL_OFFSET UNITYSDK_OFFSET(0xBD49FD0)
#define OBOJAKCHDBN_IJFIAFPEAAJ_OFFSET UNITYSDK_OFFSET(0xBD49C60)
#define OBOJAKCHDBN_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0xBD49E70)
#define OBOJAKCHDBN_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xBD4A1A0)
#define OBOJAKCHDBN_NLPAEPJJKKC_OFFSET UNITYSDK_OFFSET(0xBD49CA0)
#define OBOJAKCHDBN_OCNLIPLLGBE_OFFSET UNITYSDK_OFFSET(0xBD49D50)
#define OBOJAKCHDBN_OMFAMCCFPBP_OFFSET UNITYSDK_OFFSET(0xBD49F30)
#define OBOJAKCHDBN_SET_ROUTEVIEW_OFFSET UNITYSDK_OFFSET(0xBD49C50)
#define OBOJAKCHDBN_SPAWNED_OFFSET UNITYSDK_OFFSET(0xBD4A2C0)

inline static constexpr unsigned int OBOJAKCHDBN_TypeDefinitionIndex = 62319;

	class OBOJAKCHDBN : public ::System::Object
	{
	public:
		::RPG::Client::AlleyRouteElasticView* PAGBGHGFLII; // 0x10
		::RPG::Client::RoutePointList_1<::UnityEngine::Vector2Int>* DGIOAHBJCDK; // 0x18
		::AIKPPIALBEM* LAKIKOLKPGI; // 0x20
		::MBIIAKHKBNI* _RouteView_k__BackingField; // 0x28
		::System::Int32 PHFMCACHFIJ; // 0x30
		// static const ::System::Object NHENAADBMEA; // 0x0
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBOJAKCHDBN_CTOR_OFFSET))(this, a1);
		}

		::AIKPPIALBEM* get_RouteRenderer()
		{
			return ((::AIKPPIALBEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOJAKCHDBN_GET_ROUTERENDERER_OFFSET))(this);
		}

		::MBIIAKHKBNI* get_RouteView()
		{
			return ((::MBIIAKHKBNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOJAKCHDBN_GET_ROUTEVIEW_OFFSET))(this);
		}

		::System::Void set_RouteView(::MBIIAKHKBNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBIIAKHKBNI*))((::PBYTE)hIl2Cpp + OBOJAKCHDBN_SET_ROUTEVIEW_OFFSET))(this, a1);
		}

		::RPG::Client::IRoutePointList_1<::UnityEngine::Vector2Int>* IJFIAFPEAAJ()
		{
			return ((::RPG::Client::IRoutePointList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOJAKCHDBN_IJFIAFPEAAJ_OFFSET))(this);
		}

		::System::Void NLPAEPJJKKC(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + OBOJAKCHDBN_NLPAEPJJKKC_OFFSET))(this, a1);
		}

		::System::Void OCNLIPLLGBE(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + OBOJAKCHDBN_OCNLIPLLGBE_OFFSET))(this, a1);
		}

		::System::Void GGEBBACDBNJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBOJAKCHDBN_GGEBBACDBNJ_OFFSET))(this, a1);
		}

		::System::Void KGDIPFNECJH(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OBOJAKCHDBN_KGDIPFNECJH_OFFSET))(this, a1);
		}

		::System::Void DPLBOIIMAEM(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OBOJAKCHDBN_DPLBOIIMAEM_OFFSET))(this, a1);
		}

		::System::Void OMFAMCCFPBP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBOJAKCHDBN_OMFAMCCFPBP_OFFSET))(this, a1);
		}

		::System::Void GOHAJILHKPL(::APGBLBKCHAB* a1, ::UnityEngine::Transform* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::APGBLBKCHAB*, ::UnityEngine::Transform*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OBOJAKCHDBN_GOHAJILHKPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOJAKCHDBN_DESPAWNED_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOJAKCHDBN_SPAWNED_OFFSET))(this);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBOJAKCHDBN_NHPDCPKMNAM_OFFSET))(this, a1);
		}

	};
