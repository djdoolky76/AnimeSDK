#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CIHPLPPJFFN;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define FDEOBPFOKFA_HKDKKALAIMM_PLGGIHBOBDA_OFFSET UNITYSDK_OFFSET(0x15E58390)
#define FDEOBPFOKFA_HKDKKALAIMM__CTOR_OFFSET UNITYSDK_OFFSET(0x15E58380)

inline static constexpr unsigned int FDEOBPFOKFA_HKDKKALAIMM_TypeDefinitionIndex = 86456;

class FDEOBPFOKFA_HKDKKALAIMM : public ::System::Object
{
public:
	::CIHPLPPJFFN* NDLAFDNEOIB; // 0x10
	::System::String* IDOPOGOMOBE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDEOBPFOKFA_HKDKKALAIMM__CTOR_OFFSET))(this);
	}

	::System::Void PLGGIHBOBDA(::MoleMole::Battle::Entity* MJPPILKEMBG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FDEOBPFOKFA_HKDKKALAIMM_PLGGIHBOBDA_OFFSET))(this, MJPPILKEMBG);
	}
};
