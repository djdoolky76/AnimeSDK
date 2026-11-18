#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODCJFCCIFND_KILPJALLKMH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }

#define GOJKJIBJJKE_IOEFMIHKLKK_OFFSET UNITYSDK_OFFSET(0x15D8C190)
#define GOJKJIBJJKE_OFBPPHPEPKM_OFFSET UNITYSDK_OFFSET(0x15D8BAD0)

inline static constexpr unsigned int GOJKJIBJJKE_TypeDefinitionIndex = 72683;

class GOJKJIBJJKE : public ::System::Object
{
public:
	static ::System::Void OFBPPHPEPKM(::MoleMole::Config::ConfigPosRot* IFANJNBHMOB, ::ODCJFCCIFND_KILPJALLKMH BGIADMCANKE, ::PJGGDJJPPJP* DCGAHNLABEF, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigPosRot*, ::ODCJFCCIFND_KILPJALLKMH, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + GOJKJIBJJKE_OFBPPHPEPKM_OFFSET))(IFANJNBHMOB, BGIADMCANKE, DCGAHNLABEF, LIBPKNHDIGP, NGODDCIOJDP, KADBFNFHENH);
	}

	static ::System::Void IOEFMIHKLKK(::GEIHCPAOKKK* OHPJHPEOFLD, ::MoleMole::Config::ConfigPosRot* IFANJNBHMOB, ::System::Boolean LEBOHDKOCBK, ::UnityEngine::Vector3 GFIAIFOGCFP, ::UnityEngine::Vector3 JEAFAAKONAI, ::System::Boolean PLFNIHBAMMJ, ::ODCJFCCIFND_KILPJALLKMH BGIADMCANKE, ::PJGGDJJPPJP* DCGAHNLABEF, ::System::Single PMNLNNGEIFM, ::System::Single CAOPDAMCNCN, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::ODCJFCCIFND_KILPJALLKMH, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + GOJKJIBJJKE_IOEFMIHKLKK_OFFSET))(OHPJHPEOFLD, IFANJNBHMOB, LEBOHDKOCBK, GFIAIFOGCFP, JEAFAAKONAI, PLFNIHBAMMJ, BGIADMCANKE, DCGAHNLABEF, PMNLNNGEIFM, CAOPDAMCNCN, KADBFNFHENH);
	}
};
