#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FGADNDHGFCB_AOOEGMEGKJJ_ANNFDLHMMHE_OFFSET UNITYSDK_OFFSET(0x10F67330)
#define FGADNDHGFCB_AOOEGMEGKJJ_PGIOMILFFED_OFFSET UNITYSDK_OFFSET(0x10F67410)
#define FGADNDHGFCB_AOOEGMEGKJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10F67320)

inline static constexpr unsigned int FGADNDHGFCB_AOOEGMEGKJJ_TypeDefinitionIndex = 48750;

class FGADNDHGFCB_AOOEGMEGKJJ : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::System::Action* GDJCIGAKMOD; // 0x18
	::System::Single AMFLJNELLKH; // 0x20
	::System::Single JEOHKNNMJPO; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGADNDHGFCB_AOOEGMEGKJJ__CTOR_OFFSET))(this);
	}

	::System::Void ANNFDLHMMHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGADNDHGFCB_AOOEGMEGKJJ_ANNFDLHMMHE_OFFSET))(this);
	}

	::System::Void PGIOMILFFED(::DJDDGKFCNAJ_IGOPHLMOGAO FKMHMOELCIO)
	{
		return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + FGADNDHGFCB_AOOEGMEGKJJ_PGIOMILFFED_OFFSET))(this, FKMHMOELCIO);
	}
};
