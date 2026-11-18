#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IAJLHMMOHNF;
namespace UnityEngine { class AnimationCurve; }

#define FIDAFKODKGB_BNFDOJPKBMO_OFFSET UNITYSDK_OFFSET(0x116B3E00)
#define FIDAFKODKGB_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x116B3D10)
#define FIDAFKODKGB_GAKJDLOMFOD_OFFSET UNITYSDK_OFFSET(0x116B3E90)
#define FIDAFKODKGB_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x116B3F70)
#define FIDAFKODKGB__CTOR_OFFSET UNITYSDK_OFFSET(0x116B3CB0)

inline static constexpr unsigned int FIDAFKODKGB_TypeDefinitionIndex = 76077;

class FIDAFKODKGB : public ::System::Object
{
public:
	::IAJLHMMOHNF* LLCEPKMNKNB; // 0x10
	::IAJLHMMOHNF* IPOHPPEAFON; // 0x18
	::IAJLHMMOHNF* ADJNLBJGHMI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDAFKODKGB__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 FCFOEJGPDNO(::System::Single PMNLNNGEIFM)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIDAFKODKGB_FCFOEJGPDNO_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean BNFDOJPKBMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDAFKODKGB_BNFDOJPKBMO_OFFSET))(this);
	}

	::System::Void GAKJDLOMFOD(::UnityEngine::Vector3 OKPOHIHEJEE, ::System::Single MDPPNMIPDMP, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FIDAFKODKGB_GAKJDLOMFOD_OFFSET))(this, OKPOHIHEJEE, MDPPNMIPDMP, FAJHPKBELMF);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDAFKODKGB_PGHAJOMNDDJ_OFFSET))(this);
	}
};
