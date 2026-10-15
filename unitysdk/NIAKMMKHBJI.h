#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class AIKPPIALBEM;
class APGBLBKCHAB;
class CDCHGEFBEBI;
class CJNOKELAIOA;
class JGLAPDELEDJ;
class LKAGLIMNHIL;
class MBIIAKHKBNI;
class NFFLLHFECCP;
namespace RPG::Client { class UIPrefabLoader; }
namespace RPG::Client { template <typename T> class IRoutePointList_1; }
namespace RPG::Client { template <typename T> class RoutePointList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define NIAKMMKHBJI_BABGGLPLPEO_OFFSET UNITYSDK_OFFSET(0xBBD6B00)
#define NIAKMMKHBJI_CHEGACPIEPP_OFFSET UNITYSDK_OFFSET(0xBBD67C0)
#define NIAKMMKHBJI_CTOR_OFFSET UNITYSDK_OFFSET(0xBBD7000)
#define NIAKMMKHBJI_EGDDFIHKEGB_OFFSET UNITYSDK_OFFSET(0xBBD6730)
#define NIAKMMKHBJI_GET_ROUTERENDERER_OFFSET UNITYSDK_OFFSET(0xBBD66F0)
#define NIAKMMKHBJI_GET_ROUTEVIEW_OFFSET UNITYSDK_OFFSET(0xBBD6710)
#define NIAKMMKHBJI_GFDKNIPGIDO_OFFSET UNITYSDK_OFFSET(0xBBD6B90)
#define NIAKMMKHBJI_GIOBNKOGLLA_OFFSET UNITYSDK_OFFSET(0xBBD6D80)
#define NIAKMMKHBJI_GOHAJILHKPL_OFFSET UNITYSDK_OFFSET(0xBBD6C00)
#define NIAKMMKHBJI_IJFIAFPEAAJ_OFFSET UNITYSDK_OFFSET(0xBBD66B0)
#define NIAKMMKHBJI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBBD6850)
#define NIAKMMKHBJI_KPOHPPNNJNH_OFFSET UNITYSDK_OFFSET(0xBBD6B40)
#define NIAKMMKHBJI_MIONKOALLOP_OFFSET UNITYSDK_OFFSET(0xBBD68B0)
#define NIAKMMKHBJI_NLPAEPJJKKC_OFFSET UNITYSDK_OFFSET(0xBBD6940)
#define NIAKMMKHBJI_OCNLIPLLGBE_OFFSET UNITYSDK_OFFSET(0xBBD69D0)
#define NIAKMMKHBJI_PFKHNHAPDAI_OFFSET UNITYSDK_OFFSET(0xBBD6A60)
#define NIAKMMKHBJI_SET_ROUTERENDERER_OFFSET UNITYSDK_OFFSET(0xBBD6700)
#define NIAKMMKHBJI_SET_ROUTEVIEW_OFFSET UNITYSDK_OFFSET(0xBBD6720)

inline static constexpr unsigned int NIAKMMKHBJI_TypeDefinitionIndex = 62367;

	class NIAKMMKHBJI : public ::System::Object
	{
	public:
		::AIKPPIALBEM* _RouteRenderer_k__BackingField; // 0x10
		::CDCHGEFBEBI* DOPBDJJANDO; // 0x18
		::CJNOKELAIOA* DICGMLEIOIL; // 0x20
		::MBIIAKHKBNI* _RouteView_k__BackingField; // 0x28
		::RPG::Client::RoutePointList_1<::UnityEngine::Vector2Int>* DGIOAHBJCDK; // 0x30
		::LKAGLIMNHIL* HIEEINCGAIP; // 0x38
		::System::Boolean MBLLECJILMN; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 GMDBHJKEAEI; // 0x44
		::UnityEngine::Vector2Int GINCLJKKCEA; // 0x48
		// static const ::System::Object NHENAADBMEA; // 0x0
		// static const ::System::String* MKKBFFBKBJI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_CTOR_OFFSET))(this);
		}

		::RPG::Client::IRoutePointList_1<::UnityEngine::Vector2Int>* IJFIAFPEAAJ()
		{
			return ((::RPG::Client::IRoutePointList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_IJFIAFPEAAJ_OFFSET))(this);
		}

		::AIKPPIALBEM* get_RouteRenderer()
		{
			return ((::AIKPPIALBEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_GET_ROUTERENDERER_OFFSET))(this);
		}

		::System::Void set_RouteRenderer(::AIKPPIALBEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIKPPIALBEM*))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_SET_ROUTERENDERER_OFFSET))(this, a1);
		}

		::MBIIAKHKBNI* get_RouteView()
		{
			return ((::MBIIAKHKBNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_GET_ROUTEVIEW_OFFSET))(this);
		}

		::System::Void set_RouteView(::MBIIAKHKBNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBIIAKHKBNI*))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_SET_ROUTEVIEW_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int EGDDFIHKEGB()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_EGDDFIHKEGB_OFFSET))(this);
		}

		::UnityEngine::Vector2Int CHEGACPIEPP()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_CHEGACPIEPP_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1, ::CJNOKELAIOA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::CJNOKELAIOA*))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void MIONKOALLOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_MIONKOALLOP_OFFSET))(this);
		}

		::System::Void NLPAEPJJKKC(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_NLPAEPJJKKC_OFFSET))(this, a1);
		}

		::System::Void OCNLIPLLGBE(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_OCNLIPLLGBE_OFFSET))(this, a1);
		}

		::System::Void PFKHNHAPDAI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_PFKHNHAPDAI_OFFSET))(this, a1);
		}

		::System::Boolean BABGGLPLPEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_BABGGLPLPEO_OFFSET))(this);
		}

		::System::Void KPOHPPNNJNH(::LKAGLIMNHIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKAGLIMNHIL*))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_KPOHPPNNJNH_OFFSET))(this, a1);
		}

		::System::Void GFDKNIPGIDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_GFDKNIPGIDO_OFFSET))(this);
		}

		::System::Void GOHAJILHKPL(::APGBLBKCHAB* a1, ::UnityEngine::Transform* a2, ::RPG::Client::UIPrefabLoader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::APGBLBKCHAB*, ::UnityEngine::Transform*, ::RPG::Client::UIPrefabLoader*))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_GOHAJILHKPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GIOBNKOGLLA(::NFFLLHFECCP* a1, ::System::String* a2, ::JGLAPDELEDJ* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NFFLLHFECCP*, ::System::String*, ::JGLAPDELEDJ*))((::PBYTE)hIl2Cpp + NIAKMMKHBJI_GIOBNKOGLLA_OFFSET))(this, a1, a2, a3);
		}

	};
