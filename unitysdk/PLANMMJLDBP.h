#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }

#define PLANMMJLDBP_ALLBBCJEKOB_OFFSET UNITYSDK_OFFSET(0x14BAEFE0)
#define PLANMMJLDBP_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x14BAEF60)
#define PLANMMJLDBP_IOEFMIHKLKK_OFFSET UNITYSDK_OFFSET(0x14BAEE30)
#define PLANMMJLDBP_OFBPPHPEPKM_OFFSET UNITYSDK_OFFSET(0x14BAED40)
#define PLANMMJLDBP__CTOR_OFFSET UNITYSDK_OFFSET(0x14BAEFC0)

inline static constexpr unsigned int PLANMMJLDBP_TypeDefinitionIndex = 43502;

class PLANMMJLDBP
{
public:
	::UnityEngine::Vector3 BFDGJMPKGGC; // 0x10
	::System::Single MMNNLOMMNGL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANMMJLDBP__CTOR_OFFSET))(this);
	}

	::System::Void OFBPPHPEPKM(::PJGGDJJPPJP* DCGAHNLABEF, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + PLANMMJLDBP_OFBPPHPEPKM_OFFSET))(this, DCGAHNLABEF, LIBPKNHDIGP, NGODDCIOJDP, KADBFNFHENH);
	}

	::System::Void IOEFMIHKLKK(::GEIHCPAOKKK* OHPJHPEOFLD, ::PJGGDJJPPJP* DCGAHNLABEF, ::System::Single PMNLNNGEIFM, ::System::Single CAOPDAMCNCN, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + PLANMMJLDBP_IOEFMIHKLKK_OFFSET))(this, OHPJHPEOFLD, DCGAHNLABEF, PMNLNNGEIFM, CAOPDAMCNCN, KADBFNFHENH);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANMMJLDBP_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void ALLBBCJEKOB(::PJGGDJJPPJP* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA, ::MoleMole::Battle::Entity* FDHMCIFPNCK, ::JCADHFOKIHK* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + PLANMMJLDBP_ALLBBCJEKOB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
