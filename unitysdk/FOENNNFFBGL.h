#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOENNNFFBGL_GOFHNGACFLD.h"
#include "unitysdk/FOENNNFFBGL_HBOFMOOEMEC.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace MoleMole::Config { class SlideRopeCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Transform; }
template <typename T> class GJBGAGHHABE_1;

#define FOENNNFFBGL_AIEOINEIMGB_OFFSET UNITYSDK_OFFSET(0x10ED0DA0)
#define FOENNNFFBGL_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x10ED1060)
#define FOENNNFFBGL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x10ECAE50)
#define FOENNNFFBGL_BIBHEDJOIHK_OFFSET UNITYSDK_OFFSET(0x10ED0C30)
#define FOENNNFFBGL_BIMBCADGMJF_OFFSET UNITYSDK_OFFSET(0x10ED2660)
#define FOENNNFFBGL_BPJHLBFCPOD_OFFSET UNITYSDK_OFFSET(0x10ED1BD0)
#define FOENNNFFBGL_CBINNFKKKEA_OFFSET UNITYSDK_OFFSET(0x10ED2590)
#define FOENNNFFBGL_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x10ED0750)
#define FOENNNFFBGL_CGCOKDADAGI_OFFSET UNITYSDK_OFFSET(0x10ED1F90)
#define FOENNNFFBGL_CJGKDAIMJHL_OFFSET UNITYSDK_OFFSET(0x10ED1B80)
#define FOENNNFFBGL_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x10ECC790)
#define FOENNNFFBGL_CPFGJHHGJPG_OFFSET UNITYSDK_OFFSET(0x10ED0C90)
#define FOENNNFFBGL_DACEALNAOJI_OFFSET UNITYSDK_OFFSET(0x10ECDB60)
#define FOENNNFFBGL_DAKMLGBJGJG_OFFSET UNITYSDK_OFFSET(0x10ECD210)
#define FOENNNFFBGL_DIDCHKLAFOP_OFFSET UNITYSDK_OFFSET(0x10ECE1D0)
#define FOENNNFFBGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10ECC450)
#define FOENNNFFBGL_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0x10ED1E70)
#define FOENNNFFBGL_EKGGBNEEFPH_OFFSET UNITYSDK_OFFSET(0x10ED2910)
#define FOENNNFFBGL_FPJLHKEOKKF_OFFSET UNITYSDK_OFFSET(0x10ED2620)
#define FOENNNFFBGL_GDCLCAGLFEM_OFFSET UNITYSDK_OFFSET(0x10ED2580)
#define FOENNNFFBGL_GELLGCEJJFB_OFFSET UNITYSDK_OFFSET(0x10ECD140)
#define FOENNNFFBGL_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x10ED0DF0)
#define FOENNNFFBGL_HCPKHHDKAMJ_OFFSET UNITYSDK_OFFSET(0x10ED2EC0)
#define FOENNNFFBGL_HKNMEFGPKDI_OFFSET UNITYSDK_OFFSET(0x10ECF040)
#define FOENNNFFBGL_IEMOLGECOBJ_OFFSET UNITYSDK_OFFSET(0x10ED0670)
#define FOENNNFFBGL_JBNIOCGOCBL_OFFSET UNITYSDK_OFFSET(0x10ED07C0)
#define FOENNNFFBGL_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x10ED1490)
#define FOENNNFFBGL_JLNGADCIBBM_OFFSET UNITYSDK_OFFSET(0x10ED1790)
#define FOENNNFFBGL_JMHAKEKIEMB_OFFSET UNITYSDK_OFFSET(0x10ECDBC0)
#define FOENNNFFBGL_KNELGJBGMGA_OFFSET UNITYSDK_OFFSET(0x10ED2810)
#define FOENNNFFBGL_LAIJPKCPIKK_OFFSET UNITYSDK_OFFSET(0x10ED24D0)
#define FOENNNFFBGL_LGKCPFDKKPC_OFFSET UNITYSDK_OFFSET(0x10ECF110)
#define FOENNNFFBGL_MCBAHLHLBPB_OFFSET UNITYSDK_OFFSET(0x10ECF9D0)
#define FOENNNFFBGL_MDHIOLPDEOP_OFFSET UNITYSDK_OFFSET(0x10ED2960)
#define FOENNNFFBGL_MJLLCGJPCAI_OFFSET UNITYSDK_OFFSET(0x10ED2760)
#define FOENNNFFBGL_NGOBOHCMFPF_OFFSET UNITYSDK_OFFSET(0x10ED2E00)
#define FOENNNFFBGL_NKIPDEKPEMA_OFFSET UNITYSDK_OFFSET(0x10ED1720)
#define FOENNNFFBGL_OOOEJKIKFNG_OFFSET UNITYSDK_OFFSET(0x10ED20E0)
#define FOENNNFFBGL_PLGCADACOPJ_OFFSET UNITYSDK_OFFSET(0x10ECC850)
#define FOENNNFFBGL_PODJBKEIJIJ_OFFSET UNITYSDK_OFFSET(0x10ECDC90)
#define FOENNNFFBGL__CTOR_OFFSET UNITYSDK_OFFSET(0x10ECA230)

inline static constexpr unsigned int FOENNNFFBGL_TypeDefinitionIndex = 47040;

class FOENNNFFBGL : public ::System::Object
{
public:
	// static const ::System::Single EMGIEGPCGNL; // 0x0
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* AKMPIKKEOAP; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* GJNGGDKOIFC; // 0x18
	::GJBGAGHHABE_1<::System::Single>* GDPMHIJLLHC; // 0x20
	::GJBGAGHHABE_1<::UnityEngine::Vector3>* LOJFNOLBONL; // 0x28
	::GJBGAGHHABE_1<::System::Single>* CGOFFNLODJJ; // 0x30
	::UnityEngine::Transform* FMFAJAKNDJB; // 0x38
	::GJBGAGHHABE_1<::System::Single>* DEGMIJJADNP; // 0x40
	::GJBGAGHHABE_1<::System::Single>* JIIKEOPPCLF; // 0x48
	::FOENNNFFBGL_HBOFMOOEMEC HBDPAIKANDB; // 0x50
	::GJBGAGHHABE_1<::UnityEngine::Vector3>* IOPJDDCKBKL; // 0x118
	::System::Threading::CancellationTokenSource* LLPBGAOODJI; // 0x120
	::GJBGAGHHABE_1<::System::Single>* GEEMKIKDHLB; // 0x128
	::GJBGAGHHABE_1<::UnityEngine::Vector3>* LEBBFLDKOFP; // 0x130
	::GJBGAGHHABE_1<::UnityEngine::Vector3>* PPLMLALMLBE; // 0x138
	::GJBGAGHHABE_1<::UnityEngine::Vector3>* FLLKKBJGGII; // 0x140
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x148
	::UnityEngine::Vector3 OODJPDHFBHE; // 0x150
	::System::Single IBMKIHLGAGE; // 0x15C
	::System::Boolean CIFLENFEEGN; // 0x160
	::System::Boolean GEJDJLNLFGI; // 0x161
	::System::Boolean IICAPMHBGJB; // 0x162
	::System::Boolean JEDEJMACCGB; // 0x163
	::System::Single IBJMGPPAAHD; // 0x164
	::System::Single IPOFAOOAIBK; // 0x168
	::System::Single KEAKLAJAOIJ; // 0x16C
	::System::Single IHFLPBGIGDG; // 0x170
	::UnityEngine::Vector3 MMHNIHNHPAP; // 0x174
	::System::Single PLLDBGDKCOC; // 0x180
	::UnityEngine::Vector3 ADPLHLKNFJI; // 0x184
	::UnityEngine::Vector3 KJMMHCHODHA; // 0x190
	::System::Single AIMHKDDBNMI; // 0x19C
	::System::Single DPIFJDPPACM; // 0x1A0
	::FOENNNFFBGL_GOFHNGACFLD BOHBDHAPLDN; // 0x1A4
	::UnityEngine::Vector2 HOCAGPNNABA; // 0x1A8
	::UnityEngine::Vector3 IGBEIGILFAM; // 0x1B0
	::System::Single HCGOPPPLION; // 0x1BC
	::UnityEngine::Vector3 JFBGFIHAAIG; // 0x1C0
	::UnityEngine::Vector3 NJOIEAPDBHJ; // 0x1CC

	::System::Void _ctor(::MoleMole::Config::SlideRopeCameraConfig* CBLGCIFLMKL, ::UnityEngine::Vector3 PAICAJCMNDI, ::System::Boolean JLINBAHDCCB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SlideRopeCameraConfig*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + FOENNNFFBGL__CTOR_OFFSET))(this, CBLGCIFLMKL, PAICAJCMNDI, JLINBAHDCCB);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_DISPOSE_OFFSET))(this);
	}

	static ::FOENNNFFBGL* COKNIICCODC(::MoleMole::Config::SlideRopeCameraConfig*& DFMKILICPFB, ::UnityEngine::Vector3 PAICAJCMNDI, ::System::Boolean JLINBAHDCCB)
	{
		return ((::FOENNNFFBGL*(*)(::MoleMole::Config::SlideRopeCameraConfig*&, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + FOENNNFFBGL_COKNIICCODC_OFFSET))(DFMKILICPFB, PAICAJCMNDI, JLINBAHDCCB);
	}

	::System::Void PLGCADACOPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_PLGCADACOPJ_OFFSET))(this);
	}

	::System::Void GELLGCEJJFB(::System::Single HODAIDNDKHD, ::System::Single MDPPNMIPDMP, ::System::String* BIEDEFCGJHP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + FOENNNFFBGL_GELLGCEJJFB_OFFSET))(this, HODAIDNDKHD, MDPPNMIPDMP, BIEDEFCGJHP);
	}

	::System::Void DAKMLGBJGJG(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOENNNFFBGL_DAKMLGBJGJG_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void JMHAKEKIEMB(::System::Single HODAIDNDKHD, ::System::Single MDPPNMIPDMP, ::System::String* BIEDEFCGJHP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + FOENNNFFBGL_JMHAKEKIEMB_OFFSET))(this, HODAIDNDKHD, MDPPNMIPDMP, BIEDEFCGJHP);
	}

	::PipelineCamera::WorldBasicCameraData PODJBKEIJIJ(::System::Single PMNLNNGEIFM)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOENNNFFBGL_PODJBKEIJIJ_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void IEMOLGECOBJ(::System::Single HODAIDNDKHD, ::System::Single MDPPNMIPDMP, ::System::String* BIEDEFCGJHP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + FOENNNFFBGL_IEMOLGECOBJ_OFFSET))(this, HODAIDNDKHD, MDPPNMIPDMP, BIEDEFCGJHP);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::SlideRopeCameraConfig* CBLGCIFLMKL, ::UnityEngine::Vector3 PAICAJCMNDI, ::System::Boolean GOOLFNCFGFG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SlideRopeCameraConfig*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + FOENNNFFBGL_BBOMJDBNHIC_OFFSET))(this, CBLGCIFLMKL, PAICAJCMNDI, GOOLFNCFGFG);
	}

	::System::Void JBNIOCGOCBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_JBNIOCGOCBL_OFFSET))(this);
	}

	::System::Boolean BIBHEDJOIHK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_BIBHEDJOIHK_OFFSET))(this);
	}

	::System::Void CPFGJHHGJPG(::UnityEngine::Transform* IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOENNNFFBGL_CPFGJHHGJPG_OFFSET))(this, IMLLDOHDCNC);
	}

	::System::Boolean AIEOINEIMGB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_AIEOINEIMGB_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData GIAOBHOJCDP(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> ILNDOANENID)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + FOENNNFFBGL_GIAOBHOJCDP_OFFSET))(this, ILNDOANENID);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_ANJAOOMDFLA_OFFSET))(this);
	}

	::System::Void LGKCPFDKKPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_LGKCPFDKKPC_OFFSET))(this);
	}

	::UnityEngine::Quaternion HKNMEFGPKDI()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_HKNMEFGPKDI_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid NKIPDEKPEMA(::System::Action* ECBDIDAFOHD)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FOENNNFFBGL_NKIPDEKPEMA_OFFSET))(this, ECBDIDAFOHD);
	}

	::System::Void JLNGADCIBBM(::MoleMole::Config::SlideRopeCameraConfig*& CBLGCIFLMKL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SlideRopeCameraConfig*&))((::PBYTE)hIl2Cpp + FOENNNFFBGL_JLNGADCIBBM_OFFSET))(this, CBLGCIFLMKL);
	}

	::System::Boolean DACEALNAOJI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_DACEALNAOJI_OFFSET))(this);
	}

	::System::Boolean CJGKDAIMJHL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_CJGKDAIMJHL_OFFSET))(this);
	}

	::System::Single BPJHLBFCPOD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_BPJHLBFCPOD_OFFSET))(this);
	}

	::System::Void EBJMJDJFGFN(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + FOENNNFFBGL_EBJMJDJFGFN_OFFSET))(this, FKMJKPGNCJI);
	}

	::UnityEngine::Vector3 CGCOKDADAGI(::UnityEngine::Vector3 EJCBEJMGFAJ, ::UnityEngine::Vector3 EBFCACIEKBC)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOENNNFFBGL_CGCOKDADAGI_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Void OOOEJKIKFNG(::UnityEngine::Vector3 CIOANOMHBDG, ::UnityEngine::Vector3 AKJOIAJCNBL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOENNNFFBGL_OOOEJKIKFNG_OFFSET))(this, CIOANOMHBDG, AKJOIAJCNBL);
	}

	::System::Void LAIJPKCPIKK(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOENNNFFBGL_LAIJPKCPIKK_OFFSET))(this, AELLPLBJELA);
	}

	::System::Boolean GDCLCAGLFEM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_GDCLCAGLFEM_OFFSET))(this);
	}

	::System::Void MCBAHLHLBPB(::PipelineCamera::WorldBasicCameraData& IIHGNBNLLNG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + FOENNNFFBGL_MCBAHLHLBPB_OFFSET))(this, IIHGNBNLLNG);
	}

	::System::Void CBINNFKKKEA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + FOENNNFFBGL_CBINNFKKKEA_OFFSET))(this, FKMJKPGNCJI);
	}

	::System::Collections::Generic::List_1<::System::String*>* FPJLHKEOKKF()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_FPJLHKEOKKF_OFFSET))(this);
	}

	::System::Void BIMBCADGMJF(::UnityEngine::Vector3 HODAIDNDKHD, ::System::Single MDPPNMIPDMP, ::System::String* BIEDEFCGJHP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + FOENNNFFBGL_BIMBCADGMJF_OFFSET))(this, HODAIDNDKHD, MDPPNMIPDMP, BIEDEFCGJHP);
	}

	::System::Void MJLLCGJPCAI(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOENNNFFBGL_MJLLCGJPCAI_OFFSET))(this, AELLPLBJELA);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_CFHBPGGKCFN_OFFSET))(this);
	}

	::System::Void KNELGJBGMGA(::UnityEngine::Vector3 HODAIDNDKHD, ::System::Single MDPPNMIPDMP, ::System::String* BIEDEFCGJHP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + FOENNNFFBGL_KNELGJBGMGA_OFFSET))(this, HODAIDNDKHD, MDPPNMIPDMP, BIEDEFCGJHP);
	}

	::System::Void EKGGBNEEFPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_EKGGBNEEFPH_OFFSET))(this);
	}

	::System::Void DIDCHKLAFOP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_DIDCHKLAFOP_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* NGOBOHCMFPF()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_NGOBOHCMFPF_OFFSET))(this);
	}

	::System::Single MDHIOLPDEOP(::System::Single MGHKNMJMDID)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOENNNFFBGL_MDHIOLPDEOP_OFFSET))(this, MGHKNMJMDID);
	}

	::System::Void JLFNAHONPGB(::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + FOENNNFFBGL_JLFNAHONPGB_OFFSET))(this, INBNCFGMKCL, MJJIOHKLAKK);
	}

	::System::Void HCPKHHDKAMJ(::UnityEngine::Vector3 JNDDJMAHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOENNNFFBGL_HCPKHHDKAMJ_OFFSET))(this, JNDDJMAHNAI);
	}
};
