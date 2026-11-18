#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

namespace System { class String; }

#define BDALAMFJEMM_GHNGKOKLAAJ_OFFSET UNITYSDK_OFFSET(0x136168C0)
#define BDALAMFJEMM_HPMLOOBOCGD_OFFSET UNITYSDK_OFFSET(0x13616B50)

inline static constexpr unsigned int BDALAMFJEMM_TypeDefinitionIndex = 72880;

class BDALAMFJEMM : public ::System::Object
{
public:
	static ::System::String* GHNGKOKLAAJ(::System::Object* OMPHGGCEIBD)
	{
		return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + BDALAMFJEMM_GHNGKOKLAAJ_OFFSET))(OMPHGGCEIBD);
	}

	static ::System::Void HPMLOOBOCGD(::System::Object* OMPHGGCEIBD, ::MoleMole::InputActionEvent PKBLAMDICKB, ::System::String* APAMADOFHMN, ::System::String* FKMHMOELCIO, ::System::String* FCHKNNJEDIF)
	{
		return ((::System::Void(*)(::System::Object*, ::MoleMole::InputActionEvent, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BDALAMFJEMM_HPMLOOBOCGD_OFFSET))(OMPHGGCEIBD, PKBLAMDICKB, APAMADOFHMN, FKMHMOELCIO, FCHKNNJEDIF);
	}
};
