#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLJDBEJNNI.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define LLODFOCGJLP_AFDOLHBINHO_OFFSET UNITYSDK_OFFSET(0x1A61F250)
#define LLODFOCGJLP_AKOGLJBEEMO_OFFSET UNITYSDK_OFFSET(0x1A61F380)
#define LLODFOCGJLP_BELPMDMKHHC_OFFSET UNITYSDK_OFFSET(0x1A61F260)
#define LLODFOCGJLP_BPLKBPDFIDM_OFFSET UNITYSDK_OFFSET(0x1A61F1B0)
#define LLODFOCGJLP_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x1A61F6C0)
#define LLODFOCGJLP_FCGLPIANAEP_OFFSET UNITYSDK_OFFSET(0x1A61F5E0)
#define LLODFOCGJLP_GALGFCPKMGC_1_OFFSET UNITYSDK_OFFSET(0x1A61F600)
#define LLODFOCGJLP_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x1A61F270)
#define LLODFOCGJLP_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1A61EFA0)
#define LLODFOCGJLP_HFLHIEOELPH_OFFSET UNITYSDK_OFFSET(0x1A61F210)
#define LLODFOCGJLP_HPFLIKHEHPH_OFFSET UNITYSDK_OFFSET(0x1A61F220)
#define LLODFOCGJLP_IIKDJHLGGIL_OFFSET UNITYSDK_OFFSET(0x1A61F120)
#define LLODFOCGJLP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1A61F130)
#define LLODFOCGJLP_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x1A61F1D0)
#define LLODFOCGJLP_LNLKIIKFODA_OFFSET UNITYSDK_OFFSET(0x1A61F230)
#define LLODFOCGJLP_MEEOODNBMGN_OFFSET UNITYSDK_OFFSET(0x1A61F080)
#define LLODFOCGJLP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1A61F090)
#define LLODFOCGJLP_MNIIFNAONLJ_OFFSET UNITYSDK_OFFSET(0x1A61F1F0)
#define LLODFOCGJLP_NENAABKBGMF_OFFSET UNITYSDK_OFFSET(0x1A61F070)
#define LLODFOCGJLP_OGHIEKPFDJC_OFFSET UNITYSDK_OFFSET(0x1A61F1C0)
#define LLODFOCGJLP_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1A61EEF0)
#define LLODFOCGJLP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A61EFF0)
#define LLODFOCGJLP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A61EF90)

inline static constexpr unsigned int LLODFOCGJLP_TypeDefinitionIndex = 41923;

class LLODFOCGJLP : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x32; // 0x0
	::UnityEngine::GameObject* LMAMOJPPHKE; // 0x48
	::System::String* HCGILNGOCJH; // 0x50
	::UnityEngine::Vector3 OLLFNNGJCFN; // 0x58
	::UnityEngine::Vector3 JCOPLAGKAPA; // 0x64
	::ABLJDBEJNNI EJHGOKAMACC; // 0x70
	::System::Boolean OFLAMIBCAAL; // 0x74
	::System::Boolean IKHOMJKHEBM; // 0x75
	::System::Boolean JOLAAOLOHBJ; // 0x76
	::System::Byte _padding0[0x1];
	::UnityEngine::Vector3 LDGNHBECHPH; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLODFOCGJLP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLODFOCGJLP__CCTOR_OFFSET))();
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLODFOCGJLP_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLODFOCGJLP_GETCLASSID_OFFSET))(this);
	}

	::System::Void NENAABKBGMF(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LLODFOCGJLP_NENAABKBGMF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MEEOODNBMGN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LLODFOCGJLP_MEEOODNBMGN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLODFOCGJLP_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void IIKDJHLGGIL(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LLODFOCGJLP_IIKDJHLGGIL_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::LLODFOCGJLP* JFDOOELFAOA()
	{
		return ((::LLODFOCGJLP*(*)())((::PBYTE)hIl2Cpp + LLODFOCGJLP_JFDOOELFAOA_OFFSET))();
	}

	::ABLJDBEJNNI BPLKBPDFIDM()
	{
		return ((::ABLJDBEJNNI(*)(::PVOID))((::PBYTE)hIl2Cpp + LLODFOCGJLP_BPLKBPDFIDM_OFFSET))(this);
	}

	::System::Boolean OGHIEKPFDJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLODFOCGJLP_OGHIEKPFDJC_OFFSET))(this);
	}

	::UnityEngine::Vector3 JLEGHNGEBOG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LLODFOCGJLP_JLEGHNGEBOG_OFFSET))(this);
	}

	::UnityEngine::Vector3 MNIIFNAONLJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LLODFOCGJLP_MNIIFNAONLJ_OFFSET))(this);
	}

	::System::Void HFLHIEOELPH(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LLODFOCGJLP_HFLHIEOELPH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* HPFLIKHEHPH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLODFOCGJLP_HPFLIKHEHPH_OFFSET))(this);
	}

	::UnityEngine::Vector3 LNLKIIKFODA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LLODFOCGJLP_LNLKIIKFODA_OFFSET))(this);
	}

	::System::Void AFDOLHBINHO(::ABLJDBEJNNI EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ABLJDBEJNNI))((::PBYTE)hIl2Cpp + LLODFOCGJLP_AFDOLHBINHO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BELPMDMKHHC(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LLODFOCGJLP_BELPMDMKHHC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GALGFCPKMGC(::System::String* HIAIKHDFCLN, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 BPNFCGPEJJF, ::UnityEngine::Vector3 BEPMDFENBMH, ::ABLJDBEJNNI GEJCKFFFKCL, ::System::Boolean DILDOHFJHNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ABLJDBEJNNI, ::System::Boolean))((::PBYTE)hIl2Cpp + LLODFOCGJLP_GALGFCPKMGC_OFFSET))(this, HIAIKHDFCLN, OHOGDOMNHNK, BPNFCGPEJJF, BEPMDFENBMH, GEJCKFFFKCL, DILDOHFJHNP);
	}

	::MoleMole::Battle::ColliderEventDispatcher* AKOGLJBEEMO()
	{
		return ((::MoleMole::Battle::ColliderEventDispatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLODFOCGJLP_AKOGLJBEEMO_OFFSET))(this);
	}

	::System::Void FCGLPIANAEP(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LLODFOCGJLP_FCGLPIANAEP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GALGFCPKMGC_1(::UnityEngine::GameObject* LFJFAIFHIAG, ::ABLJDBEJNNI GEJCKFFFKCL, ::System::Boolean DILDOHFJHNP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::ABLJDBEJNNI, ::System::Boolean))((::PBYTE)hIl2Cpp + LLODFOCGJLP_GALGFCPKMGC_1_OFFSET))(this, LFJFAIFHIAG, GEJCKFFFKCL, DILDOHFJHNP);
	}

	::UnityEngine::GameObject* CJBFCLMFDOM()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLODFOCGJLP_CJBFCLMFDOM_OFFSET))(this);
	}
};
