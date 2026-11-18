#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OKLOANFCOAB.h"
#include "unitysdk/System/Object.h"

class GOIKJCHFIIO;
class MEKLIGLLJKM;
namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class SpriteRenderer; }

#define PDPGBDMDOOH_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x150B7A20)
#define PDPGBDMDOOH_EPCHAOPOCPP_OFFSET UNITYSDK_OFFSET(0x150B7A80)
#define PDPGBDMDOOH_MDKKFIOALEM_OFFSET UNITYSDK_OFFSET(0x150B7B70)
#define PDPGBDMDOOH_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x150B7B30)
#define PDPGBDMDOOH_OKJHMJCJDLE_OFFSET UNITYSDK_OFFSET(0x150B7C00)
#define PDPGBDMDOOH_OLGPCGGHBDJ_OFFSET UNITYSDK_OFFSET(0x150B7BC0)
#define PDPGBDMDOOH_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x150B7AD0)
#define PDPGBDMDOOH__CTOR_OFFSET UNITYSDK_OFFSET(0x150B7C40)

inline static constexpr unsigned int PDPGBDMDOOH_TypeDefinitionIndex = 90029;

class PDPGBDMDOOH : public ::System::Object
{
public:
	::UnityEngine::MaterialPropertyBlock* EMOEPDGNHBF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPGBDMDOOH__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::SpriteRenderer* LPFMJMABGNH, ::GOIKJCHFIIO* CENDLIKDNJA, ::UnityEngine::MaterialPropertyBlock* FKPECANBGPF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteRenderer*, ::GOIKJCHFIIO*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + PDPGBDMDOOH_BBOMJDBNHIC_OFFSET))(this, LPFMJMABGNH, CENDLIKDNJA, FKPECANBGPF);
	}

	::System::Void EPCHAOPOCPP(::MEKLIGLLJKM* AMPAPADPPKE, ::OKLOANFCOAB CAHGKNMMIPG)
	{
		return ((::System::Void(*)(::PVOID, ::MEKLIGLLJKM*, ::OKLOANFCOAB))((::PBYTE)hIl2Cpp + PDPGBDMDOOH_EPCHAOPOCPP_OFFSET))(this, AMPAPADPPKE, CAHGKNMMIPG);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PDPGBDMDOOH_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPGBDMDOOH_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void MDKKFIOALEM(::System::String* ECMJCBIFBHE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PDPGBDMDOOH_MDKKFIOALEM_OFFSET))(this, ECMJCBIFBHE);
	}

	::System::Void OLGPCGGHBDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPGBDMDOOH_OLGPCGGHBDJ_OFFSET))(this);
	}

	::System::Void OKJHMJCJDLE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPGBDMDOOH_OKJHMJCJDLE_OFFSET))(this);
	}
};
