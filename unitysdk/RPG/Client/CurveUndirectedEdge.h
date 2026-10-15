#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/CurveEdgePoint.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client { class CurveUndirectedEdge; }
namespace RPG::Client { class CurveUndirectedEdgeConnection; }
namespace RPG::Client { class MonoCurveUndirectedGraph; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_CTOR_OFFSET UNITYSDK_OFFSET(0xCBDCE00)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCBDDCB0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_FHOIHMAEIDN_OFFSET UNITYSDK_OFFSET(0xCBDDCF0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_FMPMJKOOMKL_OFFSET UNITYSDK_OFFSET(0xCBDD640)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_CURVE_OFFSET UNITYSDK_OFFSET(0xCBDCDE0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xCBD7E20)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0xCBDCDC0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_MATH_OFFSET UNITYSDK_OFFSET(0xCBDCDF0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCBDCDD0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_IBIJFKIDBMK_OFFSET UNITYSDK_OFFSET(0xCBDD400)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_IEONPAOPNNF_OFFSET UNITYSDK_OFFSET(0xCBD77B0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_KBIIPCPEAIE_OFFSET UNITYSDK_OFFSET(0xCBD76C0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_LFLOBADPDIE_OFFSET UNITYSDK_OFFSET(0xCBDA6D0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_LNLFOJLNKCE_OFFSET UNITYSDK_OFFSET(0xCBDBBF0)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_LPJOFJCLGMP_OFFSET UNITYSDK_OFFSET(0xCBDD170)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_MONJBPHFJKM_OFFSET UNITYSDK_OFFSET(0xCBDD080)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_PGKHLGOCIDL_OFFSET UNITYSDK_OFFSET(0xCBDD280)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_PJCCABMKDPE_OFFSET UNITYSDK_OFFSET(0xCBDD530)
#define RPG_CLIENT_CURVEUNDIRECTEDEDGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCBDDC70)

namespace RPG::Client
{
	class CurveUndirectedEdge : public ::System::Object
	{
	public:
		::RPG::Client::MonoCurveUndirectedGraph* _Graph_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::BansheeGz::BGSpline::Curve::BGCurve* _Curve_k__BackingField; // 0x20
		::BansheeGz::BGSpline::Components::BGCcMath* _Math_k__BackingField; // 0x28
		::Il2CppArray<::System::Collections::Generic::List_1<::RPG::Client::CurveUndirectedEdgeConnection*>*>* _Connections; // 0x30
		::System::Void _ctor(::RPG::Client::MonoCurveUndirectedGraph* a1, ::System::String* a2, ::BansheeGz::BGSpline::Curve::BGCurve* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveUndirectedGraph*, ::System::String*, ::BansheeGz::BGSpline::Curve::BGCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MonoCurveUndirectedGraph* get_Graph()
		{
			return ((::RPG::Client::MonoCurveUndirectedGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_GRAPH_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_NAME_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_CURVE_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* get_Math()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_MATH_OFFSET))(this);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_GET_DISTANCE_OFFSET))(this);
		}

		::UnityEngine::Vector3 LNLFOJLNKCE(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_LNLFOJLNKCE_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion MONJBPHFJKM(::System::Single a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_MONJBPHFJKM_OFFSET))(this, a1);
		}

		::System::Void LPJOFJCLGMP(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_LPJOFJCLGMP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LFLOBADPDIE(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_LFLOBADPDIE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::CurveEdgePoint IEONPAOPNNF(::RPG::Client::ECurveEdgePoint a1)
		{
			return ((::RPG::Client::CurveEdgePoint(*)(::PVOID, ::RPG::Client::ECurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_IEONPAOPNNF_OFFSET))(this, a1);
		}

		::System::Int32 KBIIPCPEAIE(::RPG::Client::ECurveEdgePoint a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ECurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_KBIIPCPEAIE_OFFSET))(this, a1);
		}

		::System::Void PGKHLGOCIDL(::RPG::Client::ECurveEdgePoint a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ECurveEdgePoint, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_PGKHLGOCIDL_OFFSET))(this, a1, a2);
		}

		::System::String* IBIJFKIDBMK(::RPG::Client::ECurveEdgePoint a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::ECurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_IBIJFKIDBMK_OFFSET))(this, a1);
		}

		::System::Void PJCCABMKDPE(::RPG::Client::ECurveEdgePoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ECurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_PJCCABMKDPE_OFFSET))(this, a1);
		}

		::System::Void FMPMJKOOMKL(::RPG::Client::ECurveEdgePoint a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ECurveEdgePoint, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_FMPMJKOOMKL_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_TOSTRING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_DISPOSE_OFFSET))(this);
		}

		::System::Void FHOIHMAEIDN(::RPG::Client::ECurveEdgePoint a1, ::RPG::Client::ECurveEdgePoint a2, ::RPG::Client::CurveUndirectedEdge* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ECurveEdgePoint, ::RPG::Client::ECurveEdgePoint, ::RPG::Client::CurveUndirectedEdge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGE_FHOIHMAEIDN_OFFSET))(this, a1, a2, a3);
		}

	};
}
