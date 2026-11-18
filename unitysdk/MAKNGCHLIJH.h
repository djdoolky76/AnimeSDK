#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MAKNGCHLIJH_ALLBBCJEKOB_OFFSET UNITYSDK_OFFSET(0x13D13790)
#define MAKNGCHLIJH_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x13D136B0)
#define MAKNGCHLIJH_IOEFMIHKLKK_OFFSET UNITYSDK_OFFSET(0x13D12C10)
#define MAKNGCHLIJH_OFBPPHPEPKM_OFFSET UNITYSDK_OFFSET(0x13D12B50)
#define MAKNGCHLIJH__CTOR_OFFSET UNITYSDK_OFFSET(0x13D13770)

inline static constexpr unsigned int MAKNGCHLIJH_TypeDefinitionIndex = 45157;

class MAKNGCHLIJH
{
public:
	::System::String* EOEPNOKLICH; // 0x10
	::MoleMole::EntityHandle PIOJMNDPEAM; // 0x18
	::System::Single KMOMKGNKNLE; // 0x28
	::UnityEngine::Vector3 BOGPAHGJOJK; // 0x2C
	::UnityEngine::Vector3 BFHDCAFAAEB; // 0x38
	::System::Boolean GMFJJHDIPEO; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKNGCHLIJH__CTOR_OFFSET))(this);
	}

	::System::Void OFBPPHPEPKM(::PJGGDJJPPJP* DCGAHNLABEF, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MAKNGCHLIJH_OFBPPHPEPKM_OFFSET))(this, DCGAHNLABEF, LIBPKNHDIGP, NGODDCIOJDP, KADBFNFHENH);
	}

	::System::Void IOEFMIHKLKK(::GEIHCPAOKKK* OHPJHPEOFLD, ::PJGGDJJPPJP* DCGAHNLABEF, ::System::Single PMNLNNGEIFM, ::System::Single CAOPDAMCNCN, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MAKNGCHLIJH_IOEFMIHKLKK_OFFSET))(this, OHPJHPEOFLD, DCGAHNLABEF, PMNLNNGEIFM, CAOPDAMCNCN, KADBFNFHENH);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKNGCHLIJH_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void ALLBBCJEKOB(::PJGGDJJPPJP* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA, ::MoleMole::Battle::Entity* FDHMCIFPNCK, ::JCADHFOKIHK* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MAKNGCHLIJH_ALLBBCJEKOB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
