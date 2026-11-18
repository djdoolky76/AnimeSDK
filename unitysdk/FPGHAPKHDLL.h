#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COBCMNGDOEF.h"
#include "unitysdk/System/Object.h"

class CHKEGIGCOAN;
class OPMEMHPILID;
namespace FluffyUnderware::Curvy { class CurvyMetadataBase_Point; }
namespace FluffyUnderware::Curvy { class CurvyMetadataBase_Zone; }
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Spline { class NAPPointMeta; }
namespace MoleMole::Spline { class NAPPointMetaPluginBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define FPGHAPKHDLL_DCCNAOELLPG_OFFSET UNITYSDK_OFFSET(0x156D6FD0)
#define FPGHAPKHDLL_DEGEEECFLFH_OFFSET UNITYSDK_OFFSET(0x156D3960)
#define FPGHAPKHDLL_DFCDNJGKPLO_OFFSET UNITYSDK_OFFSET(0x156D47D0)
#define FPGHAPKHDLL_DKGEJJJGONI_OFFSET UNITYSDK_OFFSET(0x156D4540)
#define FPGHAPKHDLL_EBFHEHHHPJJ_OFFSET UNITYSDK_OFFSET(0x156D4A40)
#define FPGHAPKHDLL_FLNKGNDIPJM_OFFSET UNITYSDK_OFFSET(0x156D77B0)
#define FPGHAPKHDLL_HPCFAKCMNEO_OFFSET UNITYSDK_OFFSET(0x156D7290)
#define FPGHAPKHDLL_IANJOHPLPOD_OFFSET UNITYSDK_OFFSET(0x156D3590)
#define FPGHAPKHDLL_JBONPIICJNH_OFFSET UNITYSDK_OFFSET(0x156D43C0)
#define FPGHAPKHDLL_LEPNIFILABK_OFFSET UNITYSDK_OFFSET(0x156D3800)
#define FPGHAPKHDLL_LKNKJKMMBNG_OFFSET UNITYSDK_OFFSET(0x156D6E50)
#define FPGHAPKHDLL_MAFKIIAOCBG_OFFSET UNITYSDK_OFFSET(0x156D7640)
#define FPGHAPKHDLL_MDFINMFDGNG_OFFSET UNITYSDK_OFFSET(0x156D77A0)
#define FPGHAPKHDLL_NACEJIPPAAN_OFFSET UNITYSDK_OFFSET(0x156D4010)
#define FPGHAPKHDLL_NEMMGMOHAEK_OFFSET UNITYSDK_OFFSET(0x156D3130)
#define FPGHAPKHDLL_NNPIDCPHEOI_OFFSET UNITYSDK_OFFSET(0x156D3390)
#define FPGHAPKHDLL_PBMHOFAGEKM_OFFSET UNITYSDK_OFFSET(0x156D30C0)
#define FPGHAPKHDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x156D2E60)

inline static constexpr unsigned int FPGHAPKHDLL_TypeDefinitionIndex = 89957;

class FPGHAPKHDLL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>* BCLJFKCNANG; // 0x10
	::OPMEMHPILID* FEFFFPGCIIO; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Spline::NAPPointMetaPluginBase*>* ODEAJHOIJOE; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Spline::NAPPointMeta*>* INOPPGCMENN; // 0x28
	::System::Collections::Generic::List_1<::COBCMNGDOEF>* JNDJAGECIHK; // 0x30
	::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>* DJFJFPLEOOI; // 0x38
	::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>* JKBLIOEAFOF; // 0x40

	::System::Void _ctor(::OPMEMHPILID* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::OPMEMHPILID*))((::PBYTE)hIl2Cpp + FPGHAPKHDLL__CTOR_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void PBMHOFAGEKM(::System::String* MCOHLHMKLIP, ::System::Object* EGEGIMGMJHN, ::UnityEngine::Object* NJOAJLDJCCJ, ::Il2CppArray<::CHKEGIGCOAN*>* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::CHKEGIGCOAN*>*))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_PBMHOFAGEKM_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, NJOAJLDJCCJ, PPDBEALANGE);
	}

	::System::Void NEMMGMOHAEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_NEMMGMOHAEK_OFFSET))(this);
	}

	static ::System::Boolean IANJOHPLPOD(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* OPMPKFEHOBM, ::System::String* MJEBMPCFFLG)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvyMetadataBase_Point*, ::System::String*))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_IANJOHPLPOD_OFFSET))(OPMPKFEHOBM, MJEBMPCFFLG);
	}

	::System::Void LEPNIFILABK(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone* LDGICEECNIP)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_LEPNIFILABK_OFFSET))(this, LDGICEECNIP);
	}

	::System::Void NNPIDCPHEOI(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* OPMPKFEHOBM)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point*))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_NNPIDCPHEOI_OFFSET))(this, OPMPKFEHOBM);
	}

	::System::Void DEGEEECFLFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_DEGEEECFLFH_OFFSET))(this);
	}

	static ::System::Boolean DKGEJJJGONI(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone* LDGICEECNIP, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* HMPKKCKNFIH)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_DKGEJJJGONI_OFFSET))(LDGICEECNIP, HMPKKCKNFIH);
	}

	::System::Void EBFHEHHHPJJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_EBFHEHHHPJJ_OFFSET))(this);
	}

	static ::System::Int32 DCCNAOELLPG(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* EJCBEJMGFAJ, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::FluffyUnderware::Curvy::CurvyMetadataBase_Point*, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point*))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_DCCNAOELLPG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>* NACEJIPPAAN(::FluffyUnderware::Curvy::CurvySpline* IFHEOPLLDGC, ::System::Single PIKALAKMKNH, ::System::Single CGFIIPGLFIL, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* HMPKKCKNFIH)
	{
		return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>*(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_NACEJIPPAAN_OFFSET))(this, IFHEOPLLDGC, PIKALAKMKNH, CGFIIPGLFIL, HMPKKCKNFIH);
	}

	static ::System::Boolean DFCDNJGKPLO(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone* LDGICEECNIP, ::System::String* MJEBMPCFFLG)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*, ::System::String*))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_DFCDNJGKPLO_OFFSET))(LDGICEECNIP, MJEBMPCFFLG);
	}

	::System::Boolean JBONPIICJNH(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* OPMPKFEHOBM, ::System::Boolean FNKMDFLFBGL)
	{
		return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point*, ::System::Boolean))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_JBONPIICJNH_OFFSET))(this, OPMPKFEHOBM, FNKMDFLFBGL);
	}

	::System::Void HPCFAKCMNEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_HPCFAKCMNEO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>* MDFINMFDGNG()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_MDFINMFDGNG_OFFSET))(this);
	}

	::System::Boolean LKNKJKMMBNG(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone* LDGICEECNIP, ::System::Boolean FNKMDFLFBGL)
	{
		return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*, ::System::Boolean))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_LKNKJKMMBNG_OFFSET))(this, LDGICEECNIP, FNKMDFLFBGL);
	}

	static ::System::Boolean FLNKGNDIPJM(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* OPMPKFEHOBM, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* HMPKKCKNFIH)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvyMetadataBase_Point*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_FLNKGNDIPJM_OFFSET))(OPMPKFEHOBM, HMPKKCKNFIH);
	}

	::System::Void MAFKIIAOCBG(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone* LDGICEECNIP)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*))((::PBYTE)hIl2Cpp + FPGHAPKHDLL_MAFKIIAOCBG_OFFSET))(this, LDGICEECNIP);
	}
};
