#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }

#define MOLEMOLE_MONOTUBERENDERER_AWAKE_OFFSET UNITYSDK_OFFSET(0x15AC54F0)
#define MOLEMOLE_MONOTUBERENDERER_BHMNCKNICFL_OFFSET UNITYSDK_OFFSET(0x15AC5C30)
#define MOLEMOLE_MONOTUBERENDERER_CDHJMNMKNDI_OFFSET UNITYSDK_OFFSET(0x15AC79B0)
#define MOLEMOLE_MONOTUBERENDERER_CDKHGPILCNF_OFFSET UNITYSDK_OFFSET(0x15AC8890)
#define MOLEMOLE_MONOTUBERENDERER_DOBOEDMJMOL_OFFSET UNITYSDK_OFFSET(0x15AC7CC0)
#define MOLEMOLE_MONOTUBERENDERER_ELFLMCMFDBM_OFFSET UNITYSDK_OFFSET(0x15AC4D30)
#define MOLEMOLE_MONOTUBERENDERER_FHLPGODINLA_OFFSET UNITYSDK_OFFSET(0x15AC5DB0)
#define MOLEMOLE_MONOTUBERENDERER_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x15AC5220)
#define MOLEMOLE_MONOTUBERENDERER_GETLENGTHATPOINT_OFFSET UNITYSDK_OFFSET(0x15AC5480)
#define MOLEMOLE_MONOTUBERENDERER_GETROTATIONATPOINT_OFFSET UNITYSDK_OFFSET(0x15AC53F0)
#define MOLEMOLE_MONOTUBERENDERER_GET_CALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x15AC5020)
#define MOLEMOLE_MONOTUBERENDERER_GET_EDGECOUNT_OFFSET UNITYSDK_OFFSET(0x15AC4F50)
#define MOLEMOLE_MONOTUBERENDERER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x15AC5200)
#define MOLEMOLE_MONOTUBERENDERER_GET_MESH_OFFSET UNITYSDK_OFFSET(0x15AC5210)
#define MOLEMOLE_MONOTUBERENDERER_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x15AC4BE0)
#define MOLEMOLE_MONOTUBERENDERER_GET_RADIUSES_OFFSET UNITYSDK_OFFSET(0x15AC4D80)
#define MOLEMOLE_MONOTUBERENDERER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x15AC4E30)
#define MOLEMOLE_MONOTUBERENDERER_GET_UVANTISTRETCHING_OFFSET UNITYSDK_OFFSET(0x15AC5190)
#define MOLEMOLE_MONOTUBERENDERER_GET_UVRECT_OFFSET UNITYSDK_OFFSET(0x15AC5100)
#define MOLEMOLE_MONOTUBERENDERER_HNBPFJFILOG_OFFSET UNITYSDK_OFFSET(0x15AC8EF0)
#define MOLEMOLE_MONOTUBERENDERER_JKNLLGPCOAG_OFFSET UNITYSDK_OFFSET(0x15AC8500)
#define MOLEMOLE_MONOTUBERENDERER_JODNGKLGDIH_OFFSET UNITYSDK_OFFSET(0x15AC7450)
#define MOLEMOLE_MONOTUBERENDERER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15AC5270)
#define MOLEMOLE_MONOTUBERENDERER_MARKDYNAMIC_OFFSET UNITYSDK_OFFSET(0x15AC5380)
#define MOLEMOLE_MONOTUBERENDERER_SET_CALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x15AC5030)
#define MOLEMOLE_MONOTUBERENDERER_SET_EDGECOUNT_OFFSET UNITYSDK_OFFSET(0x15AC4F60)
#define MOLEMOLE_MONOTUBERENDERER_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x15AC4BF0)
#define MOLEMOLE_MONOTUBERENDERER_SET_RADIUSES_OFFSET UNITYSDK_OFFSET(0x15AC4D90)
#define MOLEMOLE_MONOTUBERENDERER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x15AC4E40)
#define MOLEMOLE_MONOTUBERENDERER_SET_UVANTISTRETCHING_OFFSET UNITYSDK_OFFSET(0x15AC51A0)
#define MOLEMOLE_MONOTUBERENDERER_SET_UVRECT_OFFSET UNITYSDK_OFFSET(0x15AC5110)
#define MOLEMOLE_MONOTUBERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC8E20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTubeRenderer_TypeDefinitionIndex = 93267;

	class MonoTubeRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single EKAIGMFEEIK; // 0x0
		// static const ::System::Int32 MANIPCPIHFG = 0xFDE8; // 0x0
		// static const ::System::String* LLAGPANNCJB; // 0x0
		::Il2CppArray<::UnityEngine::Vector3>* _points; // 0x18
		::System::Single _radius; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Single>* _radiuses; // 0x28
		::System::Int32 _edgeCount; // 0x30
		::System::Boolean _calculateTangents; // 0x34
		::System::Byte _padding1[0x3];
		::UnityEngine::Rect _uvRect; // 0x38
		::System::Boolean _uvAntiStretching; // 0x48
		::System::Byte _padding2[0x7];
		::UnityEngine::Mesh* BMCABGEMEOP; // 0x50
		::Il2CppArray<::UnityEngine::Vector3>* GCAPHPLDFFF; // 0x58
		::Il2CppArray<::UnityEngine::Vector3>* GMCBAGKBPBC; // 0x60
		::Il2CppArray<::System::Int32>* LNMOPKMKBGF; // 0x68
		::Il2CppArray<::System::Int32>* DFFOMIJOAJA; // 0x70
		::Il2CppArray<::UnityEngine::Vector2>* NCCPIOKIHCP; // 0x78
		::Il2CppArray<::UnityEngine::Vector4>* BOLEGOEDOPH; // 0x80
		::Il2CppArray<::UnityEngine::Vector3>* NGBEOHDFPBC; // 0x88
		::Il2CppArray<::UnityEngine::Vector3>* EKFAIADKDLG; // 0x90
		::Il2CppArray<::UnityEngine::Vector3>* FLNCNMPLDOF; // 0x98
		::Il2CppArray<::UnityEngine::Quaternion>* PLBAEKAEDOB; // 0xA0
		::Il2CppArray<::UnityEngine::Vector3>* IEJENNHLHLP; // 0xA8
		::Il2CppArray<::System::Single>* ABOKMNOPKPK; // 0xB0
		::Il2CppArray<::System::Single>* JHCLKLMNIGN; // 0xB8
		::Il2CppArray<::System::Single>* HKPCKEDGMKC; // 0xC0
		::UnityEngine::Vector3 OLOIEBFALFC; // 0xC8
		::System::Byte _padding3[0x4];
		::Il2CppArray<::UnityEngine::Vector3>* BOGJLIOLAMB; // 0xD8
		::Il2CppArray<::System::Int32>* BDLJMPHNLCI; // 0xE0
		::System::Single CLKBJFDGOLJ; // 0xE8
		::System::Byte _padding4[0x4];
		::UnityEngine::MeshFilter* JDDGPFHBFJL; // 0xF0
		::System::Boolean PDPLLIDPKPL; // 0xF8
		::System::Boolean JDPGFBJENKN; // 0xF9
		::System::Boolean LAMMGPDBBPI; // 0xFA
		::System::Boolean LPIFCOHJDBK; // 0xFB
		::System::Boolean NHMDDCLNILC; // 0xFC
		::System::Boolean KINANNGNPFG; // 0xFD
		::System::Boolean EAPMGIAKMFC; // 0xFE

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_points()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_POINTS_OFFSET))(this);
		}

		::System::Void set_points(::Il2CppArray<::UnityEngine::Vector3>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_SET_POINTS_OFFSET))(this, EGEGIMGMJHN);
		}

		::Il2CppArray<::System::Single>* get_radiuses()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_RADIUSES_OFFSET))(this);
		}

		::System::Void set_radiuses(::Il2CppArray<::System::Single>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_SET_RADIUSES_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_SET_RADIUS_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Int32 get_edgeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_EDGECOUNT_OFFSET))(this);
		}

		::System::Void set_edgeCount(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_SET_EDGECOUNT_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_calculateTangents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_CALCULATETANGENTS_OFFSET))(this);
		}

		::System::Void set_calculateTangents(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_SET_CALCULATETANGENTS_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Rect get_uvRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_UVRECT_OFFSET))(this);
		}

		::System::Void set_uvRect(::UnityEngine::Rect EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_SET_UVRECT_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_uvAntiStretching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_UVANTISTRETCHING_OFFSET))(this);
		}

		::System::Void set_uvAntiStretching(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_SET_UVANTISTRETCHING_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single get_length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_LENGTH_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_MESH_OFFSET))(this);
		}

		::System::Void ForceUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_FORCEUPDATE_OFFSET))(this);
		}

		::System::Void MarkDynamic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_MARKDYNAMIC_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetRotationAtPoint(::System::Int32 ABHBKFJKINO)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GETROTATIONATPOINT_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Single GetLengthAtPoint(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GETLENGTHATPOINT_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_LATEUPDATE_OFFSET))(this);
		}

		static ::System::Int32 ELFLMCMFDBM(::System::Int32 CLNNEACLCEH, ::System::Int32 FNFBFFACNED)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_ELFLMCMFDBM_OFFSET))(CLNNEACLCEH, FNFBFFACNED);
		}

		::System::Void FHLPGODINLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_FHLPGODINLA_OFFSET))(this);
		}

		::System::Void HNBPFJFILOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_HNBPFJFILOG_OFFSET))(this);
		}

		::System::Void BHMNCKNICFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_BHMNCKNICFL_OFFSET))(this);
		}

		::System::Void CDHJMNMKNDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_CDHJMNMKNDI_OFFSET))(this);
		}

		::System::Void JKNLLGPCOAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_JKNLLGPCOAG_OFFSET))(this);
		}

		::System::Void CDKHGPILCNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_CDKHGPILCNF_OFFSET))(this);
		}

		::System::Void DOBOEDMJMOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_DOBOEDMJMOL_OFFSET))(this);
		}

		::System::Void JODNGKLGDIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_JODNGKLGDIH_OFFSET))(this);
		}
	};
}
