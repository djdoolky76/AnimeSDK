#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFINLFNBLBG.h"
#include "unitysdk/System/Object.h"

class FDKIIFCDJNP;
class IANAIPMNOBC;
class JCADHFOKIHK;
class NFCIDHJGOIB;
class OAMAMDGEJKH;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace UnityEngine { class Transform; }

#define ANJJNCHALHJ_AOOKHGDPFAA_OFFSET UNITYSDK_OFFSET(0x1266F030)
#define ANJJNCHALHJ_KILOJJHDCBG_OFFSET UNITYSDK_OFFSET(0x1266D870)
#define ANJJNCHALHJ_LACAFPDHKJG_OFFSET UNITYSDK_OFFSET(0x1266E150)
#define ANJJNCHALHJ_OFKODJJGGHM_OFFSET UNITYSDK_OFFSET(0x1266DC00)

inline static constexpr unsigned int ANJJNCHALHJ_TypeDefinitionIndex = 50198;

class ANJJNCHALHJ : public ::System::Object
{
public:
	static ::IANAIPMNOBC* KILOJJHDCBG(::FDKIIFCDJNP* ECAHPFHIOJN, ::OAMAMDGEJKH* CHDHDONHOLC, ::MoleMole::Config::ConfigPosRot* KFOFHPDNMCA)
	{
		return ((::IANAIPMNOBC*(*)(::FDKIIFCDJNP*, ::OAMAMDGEJKH*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + ANJJNCHALHJ_KILOJJHDCBG_OFFSET))(ECAHPFHIOJN, CHDHDONHOLC, KFOFHPDNMCA);
	}

	static ::MoleMole::MonoConfigurableCollider* OFKODJJGGHM(::MoleMole::Battle::Entity* AMNIHACKELI, ::JCADHFOKIHK* KADBFNFHENH, ::NFCIDHJGOIB* DFMKILICPFB, ::UnityEngine::Transform* JNLBPMKIFNK, ::FFINLFNBLBG IOKLJOEKCCN)
	{
		return ((::MoleMole::MonoConfigurableCollider*(*)(::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::NFCIDHJGOIB*, ::UnityEngine::Transform*, ::FFINLFNBLBG))((::PBYTE)hIl2Cpp + ANJJNCHALHJ_OFKODJJGGHM_OFFSET))(AMNIHACKELI, KADBFNFHENH, DFMKILICPFB, JNLBPMKIFNK, IOKLJOEKCCN);
	}

	static ::System::Void LACAFPDHKJG(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ANJJNCHALHJ_LACAFPDHKJG_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void AOOKHGDPFAA(::FDKIIFCDJNP* ECAHPFHIOJN)
	{
		return ((::System::Void(*)(::FDKIIFCDJNP*))((::PBYTE)hIl2Cpp + ANJJNCHALHJ_AOOKHGDPFAA_OFFSET))(ECAHPFHIOJN);
	}
};
