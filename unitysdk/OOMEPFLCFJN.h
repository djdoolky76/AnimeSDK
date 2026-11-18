#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEPDOHBACGO.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define OOMEPFLCFJN_ALLBBCJEKOB_OFFSET UNITYSDK_OFFSET(0x15F8E660)
#define OOMEPFLCFJN_GCLDCPDGLFI_OFFSET UNITYSDK_OFFSET(0x15F8E0D0)
#define OOMEPFLCFJN_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x15F8E4A0)
#define OOMEPFLCFJN_IOEFMIHKLKK_OFFSET UNITYSDK_OFFSET(0x15F8E330)
#define OOMEPFLCFJN_OFBPPHPEPKM_OFFSET UNITYSDK_OFFSET(0x15F8DDB0)
#define OOMEPFLCFJN__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8E5F0)

inline static constexpr unsigned int OOMEPFLCFJN_TypeDefinitionIndex = 79225;

class OOMEPFLCFJN
{
public:
	::System::String* NJLNMHDEABD; // 0x10
	::MoleMole::EntityHandle CBCNBLOFPLO; // 0x18
	::UnityEngine::AnimationCurve* IDGJJIEHLJK; // 0x28
	::MoleMole::EntityHandle HPIIMHCFEBJ; // 0x30
	::System::String* OHGBNKMFIDA; // 0x40
	::UnityEngine::AnimationCurve* FKKNFNDKLCG; // 0x48
	::GEIHCPAOKKK* OKOABNBMOCB; // 0x50
	::System::String* ELLCFNKMCKF; // 0x58
	::UnityEngine::AnimationCurve* IMLNAJLDBFI; // 0x60
	::MoleMole::EntityHandle PNDHIGJNIGD; // 0x68
	::System::Single HCDGJCOCIAM; // 0x78
	::UnityEngine::Vector3 PGNPFDMJLPG; // 0x7C
	::UnityEngine::Vector3 ABOJEEKILEF; // 0x88
	::System::Single FNIOPKPHDEH; // 0x94
	::UnityEngine::Vector3 BOPHBAGDKBC; // 0x98
	::FEPDOHBACGO BGIADMCANKE; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMEPFLCFJN__CTOR_OFFSET))(this);
	}

	::System::Void OFBPPHPEPKM(::PJGGDJJPPJP* DCGAHNLABEF, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + OOMEPFLCFJN_OFBPPHPEPKM_OFFSET))(this, DCGAHNLABEF, LIBPKNHDIGP, NGODDCIOJDP, KADBFNFHENH);
	}

	::System::Void IOEFMIHKLKK(::GEIHCPAOKKK* OHPJHPEOFLD, ::PJGGDJJPPJP* DCGAHNLABEF, ::System::Single PMNLNNGEIFM, ::System::Single CAOPDAMCNCN, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + OOMEPFLCFJN_IOEFMIHKLKK_OFFSET))(this, OHPJHPEOFLD, DCGAHNLABEF, PMNLNNGEIFM, CAOPDAMCNCN, KADBFNFHENH);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMEPFLCFJN_IAHPLEHJFGB_OFFSET))(this);
	}

	::UnityEngine::Vector3 GCLDCPDGLFI(::System::Single BLKONCLDPNG)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OOMEPFLCFJN_GCLDCPDGLFI_OFFSET))(this, BLKONCLDPNG);
	}

	::System::Void ALLBBCJEKOB(::PJGGDJJPPJP* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA, ::MoleMole::Battle::Entity* FDHMCIFPNCK, ::JCADHFOKIHK* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + OOMEPFLCFJN_ALLBBCJEKOB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
