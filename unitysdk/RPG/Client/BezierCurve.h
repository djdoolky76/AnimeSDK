#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/BezierCurve_PointAndDerivative.h"
namespace RPG::Client { class BezierCurve; }
namespace RPG::Client { class BezierPoint; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BEZIERCURVE_ADDPOINTAT_OFFSET UNITYSDK_OFFSET(0x20947070)
#define RPG_CLIENT_BEZIERCURVE_ADDPOINT_OFFSET UNITYSDK_OFFSET(0x20946F90)
#define RPG_CLIENT_BEZIERCURVE_APPROXIMATELENGTH_OFFSET UNITYSDK_OFFSET(0x2094AC00)
#define RPG_CLIENT_BEZIERCURVE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2094B190)
#define RPG_CLIENT_BEZIERCURVE_CREATECURVE_OFFSET UNITYSDK_OFFSET(0x2094AD90)
#define RPG_CLIENT_BEZIERCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0x2094B760)
#define RPG_CLIENT_BEZIERCURVE_DKEHOFCDLBP_OFFSET UNITYSDK_OFFSET(0x20948BD0)
#define RPG_CLIENT_BEZIERCURVE_DRAWCURVE_OFFSET UNITYSDK_OFFSET(0x2094A9E0)
#define RPG_CLIENT_BEZIERCURVE_GETANCHORPOINTREF_OFFSET UNITYSDK_OFFSET(0x209473E0)
#define RPG_CLIENT_BEZIERCURVE_GETANCHORPOINTSREF_OFFSET UNITYSDK_OFFSET(0x209473D0)
#define RPG_CLIENT_BEZIERCURVE_GETANCHORPOINTS_OFFSET UNITYSDK_OFFSET(0x209472C0)
#define RPG_CLIENT_BEZIERCURVE_GETDERIVATIVEATDISTANCE_OFFSET UNITYSDK_OFFSET(0x20949670)
#define RPG_CLIENT_BEZIERCURVE_GETDERIVATIVEAT_OFFSET UNITYSDK_OFFSET(0x20948870)
#define RPG_CLIENT_BEZIERCURVE_GETDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x20948F80)
#define RPG_CLIENT_BEZIERCURVE_GETPOINTANDDERIVATIVEATDISTANCE_OFFSET UNITYSDK_OFFSET(0x2094A4E0)
#define RPG_CLIENT_BEZIERCURVE_GETPOINTANDDERIVATIVEAT_OFFSET UNITYSDK_OFFSET(0x20949A10)
#define RPG_CLIENT_BEZIERCURVE_GETPOINTATDISTANCE_OFFSET UNITYSDK_OFFSET(0x20948480)
#define RPG_CLIENT_BEZIERCURVE_GETPOINTAT_OFFSET UNITYSDK_OFFSET(0x209474C0)
#define RPG_CLIENT_BEZIERCURVE_GETPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x20947410)
#define RPG_CLIENT_BEZIERCURVE_GETPOINT_OFFSET UNITYSDK_OFFSET(0x20947D00)
#define RPG_CLIENT_BEZIERCURVE_GET_BAKECURVERESOLUTION_OFFSET UNITYSDK_OFFSET(0x20947880)
#define RPG_CLIENT_BEZIERCURVE_GET_CLOSE_OFFSET UNITYSDK_OFFSET(0x2094B540)
#define RPG_CLIENT_BEZIERCURVE_GET_DIRTY_OFFSET UNITYSDK_OFFSET(0x2094B710)
#define RPG_CLIENT_BEZIERCURVE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x2094B550)
#define RPG_CLIENT_BEZIERCURVE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x20947CD0)
#define RPG_CLIENT_BEZIERCURVE_GET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0x209471C0)
#define RPG_CLIENT_BEZIERCURVE_GET_SEGMENTLENGTHS_OFFSET UNITYSDK_OFFSET(0x20947CA0)
#define RPG_CLIENT_BEZIERCURVE_GGGKMCNDFBE_OFFSET UNITYSDK_OFFSET(0x209478B0)
#define RPG_CLIENT_BEZIERCURVE_MLHGNNALECE_OFFSET UNITYSDK_OFFSET(0x20949F70)
#define RPG_CLIENT_BEZIERCURVE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x2094B1A0)
#define RPG_CLIENT_BEZIERCURVE_PPFKAOGELOA_OFFSET UNITYSDK_OFFSET(0x2094B580)
#define RPG_CLIENT_BEZIERCURVE_REMOVEPOINT_OFFSET UNITYSDK_OFFSET(0x20947230)
#define RPG_CLIENT_BEZIERCURVE_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x2094A9D0)
#define RPG_CLIENT_BEZIERCURVE_SET_BAKECURVERESOLUTION_OFFSET UNITYSDK_OFFSET(0x2094B730)
#define RPG_CLIENT_BEZIERCURVE_SET_CLOSE_OFFSET UNITYSDK_OFFSET(0x2094B180)
#define RPG_CLIENT_BEZIERCURVE_SET_DIRTY_OFFSET UNITYSDK_OFFSET(0x2094B720)

namespace RPG::Client
{
	inline static constexpr unsigned int BezierCurve_TypeDefinitionIndex = 37007;

	class BezierCurve : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean showDividedPoints; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 dividedSegments; // 0x1C
		::System::Single dividedPointsSize; // 0x20
		::UnityEngine::Color dividedPointColor; // 0x24
		::System::Int32 Resolution; // 0x34
		::System::Boolean _Dirty_k__BackingField; // 0x38
		::System::Byte _padding1[0x3];
		::UnityEngine::Color DrawColor; // 0x3C
		::System::Boolean ConstraintToXOZ; // 0x4C
		::System::Boolean _Close; // 0x4D
		::System::Byte _padding2[0x2];
		::System::Single _Length; // 0x50
		::System::Byte _padding3[0x4];
		::Il2CppArray<::System::Single>* _SegmentLengths; // 0x58
		::Il2CppArray<::RPG::Client::BezierPoint*>* _Points; // 0x60
		::System::Boolean UseBakeCurve; // 0x68
		::System::Boolean BakeCurveSmoothSample; // 0x69
		::System::Boolean BakeTexture; // 0x6A
		::System::Byte _padding4[0x5];
		::Il2CppArray<::System::Object*>* _BakedCurve; // 0x70
		::System::Int32 _BakeCurveResolution; // 0x78
		::System::Boolean _IsBakeCurved; // 0x7C
		::System::Byte _padding5[0x3];
		::UnityEngine::Texture2D* _BakeCurveTexture; // 0x80
		::UnityEngine::Vector3 _PointOffset; // 0x88
		::UnityEngine::Vector3 _PointRange; // 0x94
		::UnityEngine::Vector3 _DerivativeOffset; // 0xA0
		::UnityEngine::Vector3 _DerivativeRange; // 0xAC
		::System::String* _FilePath; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_CTOR_OFFSET))(this);
		}

		::System::Void AddPoint(::RPG::Client::BezierPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BezierPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_ADDPOINT_OFFSET))(this, a1);
		}

		::RPG::Client::BezierPoint* AddPointAt(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::BezierPoint*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_ADDPOINTAT_OFFSET))(this, a1);
		}

		::System::Void RemovePoint(::RPG::Client::BezierPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BezierPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_REMOVEPOINT_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::BezierPoint*>* GetAnchorPoints()
		{
			return ((::Il2CppArray<::RPG::Client::BezierPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GETANCHORPOINTS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::BezierPoint*>* GetAnchorPointsRef()
		{
			return ((::Il2CppArray<::RPG::Client::BezierPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GETANCHORPOINTSREF_OFFSET))(this);
		}

		::RPG::Client::BezierPoint* GetAnchorPointRef(::System::Int32 a1)
		{
			return ((::RPG::Client::BezierPoint*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GETANCHORPOINTREF_OFFSET))(this, a1);
		}

		::System::Int32 GetPointIndex(::RPG::Client::BezierPoint* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BezierPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GETPOINTINDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPointAt(::System::Single a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GETPOINTAT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetPointAtDistance(::System::Single a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GETPOINTATDISTANCE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetDerivativeAt(::System::Single a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GETDERIVATIVEAT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetDerivativeAtDistance(::System::Single a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GETDERIVATIVEATDISTANCE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::BezierCurve_PointAndDerivative GetPointAndDerivativeAt(::System::Single a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::BezierCurve_PointAndDerivative(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GETPOINTANDDERIVATIVEAT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::BezierCurve_PointAndDerivative GetPointAndDerivativeAtDistance(::System::Single a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::BezierCurve_PointAndDerivative(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GETPOINTANDDERIVATIVEATDISTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_SETDIRTY_OFFSET))(this);
		}

		static ::System::Void DrawCurve(::RPG::Client::BezierPoint* a1, ::RPG::Client::BezierPoint* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::BezierPoint*, ::RPG::Client::BezierPoint*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_DRAWCURVE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 GetPoint(::RPG::Client::BezierPoint* a1, ::RPG::Client::BezierPoint* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::BezierPoint*, ::RPG::Client::BezierPoint*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GETPOINT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 GetDerivative(::RPG::Client::BezierPoint* a1, ::RPG::Client::BezierPoint* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::BezierPoint*, ::RPG::Client::BezierPoint*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GETDERIVATIVE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single ApproximateLength(::RPG::Client::BezierPoint* a1, ::RPG::Client::BezierPoint* a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::RPG::Client::BezierPoint*, ::RPG::Client::BezierPoint*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_APPROXIMATELENGTH_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::BezierCurve* CreateCurve(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::BezierCurve*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_CREATECURVE_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Boolean get_Close()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GET_CLOSE_OFFSET))(this);
		}

		::System::Void set_Close(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_SET_CLOSE_OFFSET))(this, a1);
		}

		::RPG::Client::BezierPoint* get_Item(::System::Int32 a1)
		{
			return ((::RPG::Client::BezierPoint*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Int32 get_pointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GET_POINTCOUNT_OFFSET))(this);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GET_LENGTH_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_SegmentLengths()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GET_SEGMENTLENGTHS_OFFSET))(this);
		}

		::System::Void PPFKAOGELOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_PPFKAOGELOA_OFFSET))(this);
		}

		::System::Boolean get_Dirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GET_DIRTY_OFFSET))(this);
		}

		::System::Void set_Dirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_SET_DIRTY_OFFSET))(this, a1);
		}

		::System::Int32 get_BakeCurveResolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GET_BAKECURVERESOLUTION_OFFSET))(this);
		}

		::System::Void set_BakeCurveResolution(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_SET_BAKECURVERESOLUTION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GGGKMCNDFBE(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_GGGKMCNDFBE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 DKEHOFCDLBP(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_DKEHOFCDLBP_OFFSET))(this, a1);
		}

		::RPG::Client::BezierCurve_PointAndDerivative MLHGNNALECE(::System::Single a1)
		{
			return ((::RPG::Client::BezierCurve_PointAndDerivative(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEZIERCURVE_MLHGNNALECE_OFFSET))(this, a1);
		}

	};
}
