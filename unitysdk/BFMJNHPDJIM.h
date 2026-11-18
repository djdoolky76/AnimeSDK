#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFMJNHPDJIM_EJLDKCLPFGA.h"
#include "unitysdk/MoleMole/Config/HighLightAirCombatCameraFollowType.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"

namespace MoleMole::Config { class HighLightAirCombatCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class GJBGAGHHABE_1;

#define BFMJNHPDJIM_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x12D27470)
#define BFMJNHPDJIM_BALCJKCEHPF_OFFSET UNITYSDK_OFFSET(0x12D27230)
#define BFMJNHPDJIM_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x12D23EC0)
#define BFMJNHPDJIM_BJDHEJPNLMG_OFFSET UNITYSDK_OFFSET(0x12D28D70)
#define BFMJNHPDJIM_CFBNKLCKCKB_OFFSET UNITYSDK_OFFSET(0x12D25990)
#define BFMJNHPDJIM_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x12D27400)
#define BFMJNHPDJIM_CLMAPDLGHLO_OFFSET UNITYSDK_OFFSET(0x12D286C0)
#define BFMJNHPDJIM_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x12D24D30)
#define BFMJNHPDJIM_DAKMLGBJGJG_OFFSET UNITYSDK_OFFSET(0x12D280F0)
#define BFMJNHPDJIM_DEIPDMIENDB_OFFSET UNITYSDK_OFFSET(0x12D29530)
#define BFMJNHPDJIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D24B00)
#define BFMJNHPDJIM_DOMBJILBLCN_1_OFFSET UNITYSDK_OFFSET(0x12D29690)
#define BFMJNHPDJIM_DOMBJILBLCN_OFFSET UNITYSDK_OFFSET(0x12D25190)
#define BFMJNHPDJIM_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0x12D272F0)
#define BFMJNHPDJIM_GCFCPBGNDFH_OFFSET UNITYSDK_OFFSET(0x12D29600)
#define BFMJNHPDJIM_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x12D28F50)
#define BFMJNHPDJIM_JEEEHJKIAHM_OFFSET UNITYSDK_OFFSET(0x12D294A0)
#define BFMJNHPDJIM_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x12D278A0)
#define BFMJNHPDJIM_LEELMPBLBKO_OFFSET UNITYSDK_OFFSET(0x12D293C0)
#define BFMJNHPDJIM_LLPCNHNCCLL_OFFSET UNITYSDK_OFFSET(0x12D28C70)
#define BFMJNHPDJIM_MCBAHLHLBPB_OFFSET UNITYSDK_OFFSET(0x12D283E0)
#define BFMJNHPDJIM_MFNNBKLIDEP_OFFSET UNITYSDK_OFFSET(0x12D252E0)
#define BFMJNHPDJIM_MKBCEMJEGOF_OFFSET UNITYSDK_OFFSET(0x12D24ED0)
#define BFMJNHPDJIM_MMFGKOOCDNI_OFFSET UNITYSDK_OFFSET(0x12D28650)
#define BFMJNHPDJIM_NHHNLILEPIH_OFFSET UNITYSDK_OFFSET(0x12D292C0)
#define BFMJNHPDJIM_OOEKFNLBCHP_OFFSET UNITYSDK_OFFSET(0x12D291C0)
#define BFMJNHPDJIM_PODJBKEIJIJ_OFFSET UNITYSDK_OFFSET(0x12D27B30)
#define BFMJNHPDJIM__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D24D20)
#define BFMJNHPDJIM__CTOR_OFFSET UNITYSDK_OFFSET(0x12D23100)

inline static constexpr unsigned int BFMJNHPDJIM_TypeDefinitionIndex = 52809;

class BFMJNHPDJIM : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_KHPCHCBFNGN()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BFMJNHPDJIM_TypeDefinitionIndex)->GetStaticField(0x10200);
	}
	static ::System::Boolean* StaticGet_HHLJPGCKIPJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BFMJNHPDJIM_TypeDefinitionIndex)->GetStaticField(0x10201);
	}
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x10
	::GJBGAGHHABE_1<::UnityEngine::Vector3>* FFMAKNCIFHO; // 0x18
	::GJBGAGHHABE_1<::UnityEngine::Vector3>* ALIADBBNKEL; // 0x20
	::UnityEngine::Transform* IDCNMEMBNNP; // 0x28
	::GJBGAGHHABE_1<::UnityEngine::Vector3>* PIGKPNNNKGN; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* PMFOOLDGBFC; // 0x38
	::GJBGAGHHABE_1<::System::Single>* GDPLNKHPBDJ; // 0x40
	::GJBGAGHHABE_1<::System::Single>* JIIKEOPPCLF; // 0x48
	::GJBGAGHHABE_1<::System::Single>* HJHLOLOGLLC; // 0x50
	::GJBGAGHHABE_1<::UnityEngine::Vector3>* HHFPBMNOCCM; // 0x58
	::GJBGAGHHABE_1<::UnityEngine::Vector3>* OJHAKJFNNAB; // 0x60
	::UnityEngine::Transform* GENFKFPJJIA; // 0x68
	::GJBGAGHHABE_1<::System::Single>* LJPLJFKHIBI; // 0x70
	::UnityEngine::GameObject* HBBAAHDBLAE; // 0x78
	::GJBGAGHHABE_1<::System::Single>* PKPOBCGMKAB; // 0x80
	::GJBGAGHHABE_1<::System::Single>* DEGMIJJADNP; // 0x88
	::GJBGAGHHABE_1<::UnityEngine::Vector2>* LEBBFLDKOFP; // 0x90
	::UnityEngine::Transform* AGFANNMIGOL; // 0x98
	::BFMJNHPDJIM_EJLDKCLPFGA HBDPAIKANDB; // 0xA0
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* AKMPIKKEOAP; // 0xF0
	::UnityEngine::Transform* NBDCBDOOBOH; // 0xF8
	::UnityEngine::Vector3 PFFJAHJOOBO; // 0x100
	::UnityEngine::Vector3 KHJHPHIGPDG; // 0x10C
	::MoleMole::Config::HighLightAirCombatCameraFollowType CAFBNIOANLL; // 0x118
	::System::Boolean PNMBNBCMOCI; // 0x11C
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector2 HOCAGPNNABA; // 0x120

	::System::Void _ctor(::System::String* MCOHLHMKLIP, ::UnityEngine::GameObject* LMLPPLMKLFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BFMJNHPDJIM__CTOR_OFFSET))(this, MCOHLHMKLIP, LMLPPLMKLFL);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFMJNHPDJIM__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_DISPOSE_OFFSET))(this);
	}

	static ::BFMJNHPDJIM* COKNIICCODC(::System::String*& MCOHLHMKLIP, ::UnityEngine::GameObject*& LMLPPLMKLFL)
	{
		return ((::BFMJNHPDJIM*(*)(::System::String*&, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_COKNIICCODC_OFFSET))(MCOHLHMKLIP, LMLPPLMKLFL);
	}

	::System::Void MKBCEMJEGOF(::MoleMole::Config::HighLightAirCombatCameraConfig* CBLGCIFLMKL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HighLightAirCombatCameraConfig*))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_MKBCEMJEGOF_OFFSET))(this, CBLGCIFLMKL);
	}

	::System::Void DOMBJILBLCN(::System::Boolean FBILHHBPEHD, ::UnityEngine::Transform* LNEEMAGIHLB, ::System::Single DLJPLHKELCO, ::System::Single IMLLDOHDCNC, ::System::String* CBLGCIFLMKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_DOMBJILBLCN_OFFSET))(this, FBILHHBPEHD, LNEEMAGIHLB, DLJPLHKELCO, IMLLDOHDCNC, CBLGCIFLMKL);
	}

	::System::Void MFNNBKLIDEP(::System::Int32 OBNIAHNMHPF, ::System::Single FNIOPKPHDEH, ::System::String* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_MFNNBKLIDEP_OFFSET))(this, OBNIAHNMHPF, FNIOPKPHDEH, FAJHPKBELMF);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* BALCJKCEHPF()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_BALCJKCEHPF_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::String* NIHGOLJOGKD, ::UnityEngine::GameObject* LMLPPLMKLFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_BBOMJDBNHIC_OFFSET))(this, NIHGOLJOGKD, LMLPPLMKLFL);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_ANJAOOMDFLA_OFFSET))(this);
	}

	::System::Void CFBNKLCKCKB(::UnityEngine::Vector3& OPAOHNJAALO, ::System::Single& IKEMJCEAGBJ, ::UnityEngine::Vector3& LEMFLBLCKJF, ::System::Single& KNMGJELPCEF, ::UnityEngine::Vector3& JMJAGIFIHFJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single&, ::UnityEngine::Vector3&, ::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_CFBNKLCKCKB_OFFSET))(this, OPAOHNJAALO, IKEMJCEAGBJ, LEMFLBLCKJF, KNMGJELPCEF, JMJAGIFIHFJ);
	}

	::PipelineCamera::WorldBasicCameraData PODJBKEIJIJ(::System::Single PMNLNNGEIFM)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_PODJBKEIJIJ_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void MMFGKOOCDNI(::UnityEngine::Vector3 HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_MMFGKOOCDNI_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void DAKMLGBJGJG(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_DAKMLGBJGJG_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void CLMAPDLGHLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_CLMAPDLGHLO_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_CFHBPGGKCFN_OFFSET))(this);
	}

	::System::Void LLPCNHNCCLL(::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single FNIOPKPHDEH, ::System::String* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_LLPCNHNCCLL_OFFSET))(this, CKPGOKHECCH, FNIOPKPHDEH, FAJHPKBELMF);
	}

	::System::Void BJDHEJPNLMG(::System::Boolean FBILHHBPEHD, ::System::Single DLJPLHKELCO, ::System::Single IMLLDOHDCNC, ::System::String* CBLGCIFLMKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_BJDHEJPNLMG_OFFSET))(this, FBILHHBPEHD, DLJPLHKELCO, IMLLDOHDCNC, CBLGCIFLMKL);
	}

	::PipelineCamera::WorldBasicCameraData GIAOBHOJCDP(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> ILNDOANENID)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_GIAOBHOJCDP_OFFSET))(this, ILNDOANENID);
	}

	::System::Void JLFNAHONPGB(::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_JLFNAHONPGB_OFFSET))(this, INBNCFGMKCL, MJJIOHKLAKK);
	}

	::System::Void OOEKFNLBCHP(::UnityEngine::Vector3 CJGAFLKGLKL, ::System::Single FNIOPKPHDEH, ::System::String* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_OOEKFNLBCHP_OFFSET))(this, CJGAFLKGLKL, FNIOPKPHDEH, FAJHPKBELMF);
	}

	::System::Void NHHNLILEPIH(::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single FNIOPKPHDEH, ::System::String* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_NHHNLILEPIH_OFFSET))(this, CKPGOKHECCH, FNIOPKPHDEH, FAJHPKBELMF);
	}

	::System::Void LEELMPBLBKO(::System::Single ECMOEENIHME, ::System::Single FNIOPKPHDEH, ::System::String* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_LEELMPBLBKO_OFFSET))(this, ECMOEENIHME, FNIOPKPHDEH, FAJHPKBELMF);
	}

	::System::Void EBJMJDJFGFN(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_EBJMJDJFGFN_OFFSET))(this, FKMJKPGNCJI);
	}

	::System::Void MCBAHLHLBPB(::PipelineCamera::WorldBasicCameraData& IIHGNBNLLNG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_MCBAHLHLBPB_OFFSET))(this, IIHGNBNLLNG);
	}

	::System::Void JEEEHJKIAHM(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_JEEEHJKIAHM_OFFSET))(this, FKMJKPGNCJI);
	}

	::System::Void DEIPDMIENDB(::UnityEngine::Vector2 BOGPAHGJOJK, ::System::Single FNIOPKPHDEH, ::System::String* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_DEIPDMIENDB_OFFSET))(this, BOGPAHGJOJK, FNIOPKPHDEH, FAJHPKBELMF);
	}

	::System::Void GCFCPBGNDFH(::UnityEngine::Vector3 CKPGOKHECCH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_GCFCPBGNDFH_OFFSET))(this, CKPGOKHECCH);
	}

	::System::Void DOMBJILBLCN_1(::System::Boolean FBILHHBPEHD, ::System::String* HIAIKHDFCLN, ::System::Single DLJPLHKELCO, ::System::Single IMLLDOHDCNC, ::System::String* CBLGCIFLMKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_DOMBJILBLCN_1_OFFSET))(this, FBILHHBPEHD, HIAIKHDFCLN, DLJPLHKELCO, IMLLDOHDCNC, CBLGCIFLMKL);
	}
};
