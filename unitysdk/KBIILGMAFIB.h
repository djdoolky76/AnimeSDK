#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

namespace System { class Action; }

#define KBIILGMAFIB_CPABHNJIMBK_OFFSET UNITYSDK_OFFSET(0x1A4969A0)
#define KBIILGMAFIB_HFMEJCINCMK_OFFSET UNITYSDK_OFFSET(0x1A496760)
#define KBIILGMAFIB_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x1A4966D0)
#define KBIILGMAFIB_ONSTART_OFFSET UNITYSDK_OFFSET(0x1A496710)
#define KBIILGMAFIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A496750)

inline static constexpr unsigned int KBIILGMAFIB_TypeDefinitionIndex = 61760;

class KBIILGMAFIB : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIILGMAFIB__CTOR_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIILGMAFIB_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIILGMAFIB_ONSTART_OFFSET))(this);
	}

	::System::Void HFMEJCINCMK(::Il2CppArray<::System::Int32>* GKDBFJMLFEG, ::System::Action* IHLBALNBGKM, ::System::Action* AFKOOINGNAK)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + KBIILGMAFIB_HFMEJCINCMK_OFFSET))(this, GKDBFJMLFEG, IHLBALNBGKM, AFKOOINGNAK);
	}

	::System::Void CPABHNJIMBK(::System::Int32 NPAKMAGBOCH, ::System::Action* IHLBALNBGKM, ::System::Action* AFKOOINGNAK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + KBIILGMAFIB_CPABHNJIMBK_OFFSET))(this, NPAKMAGBOCH, IHLBALNBGKM, AFKOOINGNAK);
	}
};
