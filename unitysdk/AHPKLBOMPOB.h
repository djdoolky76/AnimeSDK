#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }

#define AHPKLBOMPOB_ALLBBCJEKOB_OFFSET UNITYSDK_OFFSET(0x12CF73B0)
#define AHPKLBOMPOB_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x12CF7330)
#define AHPKLBOMPOB_IOEFMIHKLKK_OFFSET UNITYSDK_OFFSET(0x12CF6C90)
#define AHPKLBOMPOB_OFBPPHPEPKM_OFFSET UNITYSDK_OFFSET(0x12CF68D0)
#define AHPKLBOMPOB__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF7390)

inline static constexpr unsigned int AHPKLBOMPOB_TypeDefinitionIndex = 91570;

class AHPKLBOMPOB
{
public:
	::MoleMole::EntityHandle MHHGJBDKBMF; // 0x10
	::UnityEngine::Vector3 BOGPAHGJOJK; // 0x20
	::System::Single KMOMKGNKNLE; // 0x2C
	::UnityEngine::Vector3 ENHMHBPJAGN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPKLBOMPOB__CTOR_OFFSET))(this);
	}

	::System::Void OFBPPHPEPKM(::PJGGDJJPPJP* DCGAHNLABEF, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + AHPKLBOMPOB_OFBPPHPEPKM_OFFSET))(this, DCGAHNLABEF, LIBPKNHDIGP, NGODDCIOJDP, KADBFNFHENH);
	}

	::System::Void IOEFMIHKLKK(::GEIHCPAOKKK* OHPJHPEOFLD, ::PJGGDJJPPJP* DCGAHNLABEF, ::System::Single PMNLNNGEIFM, ::System::Single CAOPDAMCNCN, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + AHPKLBOMPOB_IOEFMIHKLKK_OFFSET))(this, OHPJHPEOFLD, DCGAHNLABEF, PMNLNNGEIFM, CAOPDAMCNCN, KADBFNFHENH);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPKLBOMPOB_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void ALLBBCJEKOB(::PJGGDJJPPJP* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA, ::MoleMole::Battle::Entity* FDHMCIFPNCK, ::JCADHFOKIHK* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + AHPKLBOMPOB_ALLBBCJEKOB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
