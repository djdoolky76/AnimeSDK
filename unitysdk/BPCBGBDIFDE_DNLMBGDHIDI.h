#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class BPCBGBDIFDE;
namespace UnityEngine { class RenderTexture; }
template <typename T> class BFMLEHMAGAK_1;

#define BPCBGBDIFDE_DNLMBGDHIDI_BIALHNAOJFE_OFFSET UNITYSDK_OFFSET(0x14F053D0)
#define BPCBGBDIFDE_DNLMBGDHIDI_CEELEDDMNJA_OFFSET UNITYSDK_OFFSET(0x14F05350)
#define BPCBGBDIFDE_DNLMBGDHIDI_DKBNILCFHKF_OFFSET UNITYSDK_OFFSET(0x14F05790)
#define BPCBGBDIFDE_DNLMBGDHIDI__CTOR_OFFSET UNITYSDK_OFFSET(0x14F05340)

inline static constexpr unsigned int BPCBGBDIFDE_DNLMBGDHIDI_TypeDefinitionIndex = 78658;

class BPCBGBDIFDE_DNLMBGDHIDI : public ::System::Object
{
public:
	::BFMLEHMAGAK_1<::System::Int32>* LDDJOFHAOHG; // 0x10
	::BPCBGBDIFDE* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_DNLMBGDHIDI__CTOR_OFFSET))(this);
	}

	::System::Int32 CEELEDDMNJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_DNLMBGDHIDI_CEELEDDMNJA_OFFSET))(this);
	}

	::System::Void BIALHNAOJFE(::MNAGAGOHIGH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_DNLMBGDHIDI_BIALHNAOJFE_OFFSET))(this, KOIBHLHLMFC);
	}

	::UnityEngine::RenderTexture* DKBNILCFHKF()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_DNLMBGDHIDI_DKBNILCFHKF_OFFSET))(this);
	}
};
