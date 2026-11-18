#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }

#define FNLGADGPEPF_ALLBBCJEKOB_OFFSET UNITYSDK_OFFSET(0x13234140)
#define FNLGADGPEPF_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x132340C0)
#define FNLGADGPEPF_IOEFMIHKLKK_OFFSET UNITYSDK_OFFSET(0x13233F60)
#define FNLGADGPEPF_OFBPPHPEPKM_OFFSET UNITYSDK_OFFSET(0x13233EA0)
#define FNLGADGPEPF__CTOR_OFFSET UNITYSDK_OFFSET(0x13234120)

inline static constexpr unsigned int FNLGADGPEPF_TypeDefinitionIndex = 49724;

class FNLGADGPEPF
{
public:
	::System::Single EBADLICMCOH; // 0x10
	::UnityEngine::Vector3 MKFJHAMCDEF; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLGADGPEPF__CTOR_OFFSET))(this);
	}

	::System::Void OFBPPHPEPKM(::PJGGDJJPPJP* DCGAHNLABEF, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + FNLGADGPEPF_OFBPPHPEPKM_OFFSET))(this, DCGAHNLABEF, LIBPKNHDIGP, NGODDCIOJDP, KADBFNFHENH);
	}

	::System::Void IOEFMIHKLKK(::GEIHCPAOKKK* OHPJHPEOFLD, ::PJGGDJJPPJP* DCGAHNLABEF, ::System::Single PMNLNNGEIFM, ::System::Single CAOPDAMCNCN, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + FNLGADGPEPF_IOEFMIHKLKK_OFFSET))(this, OHPJHPEOFLD, DCGAHNLABEF, PMNLNNGEIFM, CAOPDAMCNCN, KADBFNFHENH);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLGADGPEPF_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void ALLBBCJEKOB(::PJGGDJJPPJP* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA, ::MoleMole::Battle::Entity* FDHMCIFPNCK, ::JCADHFOKIHK* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + FNLGADGPEPF_ALLBBCJEKOB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
