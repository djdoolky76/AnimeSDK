#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BMOKPOAHPKC_MDLJJMGNGAC;
namespace System { class Action; }

#define BMOKPOAHPKC_KLAINKEIPML_AHGGPEECJKI_OFFSET UNITYSDK_OFFSET(0xF7B3600)
#define BMOKPOAHPKC_KLAINKEIPML_NDGKLBDMJCO_OFFSET UNITYSDK_OFFSET(0xF7B3590)
#define BMOKPOAHPKC_KLAINKEIPML__CTOR_OFFSET UNITYSDK_OFFSET(0xF7B3580)

inline static constexpr unsigned int BMOKPOAHPKC_KLAINKEIPML_TypeDefinitionIndex = 43167;

class BMOKPOAHPKC_KLAINKEIPML : public ::System::Object
{
public:
	::System::Action* EOJMINLKPCA; // 0x10
	::System::Action* KAKAEMACNPB; // 0x18
	::BMOKPOAHPKC_MDLJJMGNGAC* EEMOEMFLABI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOKPOAHPKC_KLAINKEIPML__CTOR_OFFSET))(this);
	}

	::System::Void NDGKLBDMJCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOKPOAHPKC_KLAINKEIPML_NDGKLBDMJCO_OFFSET))(this);
	}

	::System::Void AHGGPEECJKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOKPOAHPKC_KLAINKEIPML_AHGGPEECJKI_OFFSET))(this);
	}
};
