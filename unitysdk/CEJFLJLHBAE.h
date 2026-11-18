#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODPINEGGNDC;
namespace System { class String; }

#define CEJFLJLHBAE_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1FA0E0D0)
#define CEJFLJLHBAE_KAKLGHJLHOI_OFFSET UNITYSDK_OFFSET(0x1FA0E0F0)
#define CEJFLJLHBAE_KGMDDJHHODA_OFFSET UNITYSDK_OFFSET(0x1FA0E0E0)
#define CEJFLJLHBAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA0E0C0)

inline static constexpr unsigned int CEJFLJLHBAE_TypeDefinitionIndex = 18185;

class CEJFLJLHBAE : public ::System::Object
{
public:
	::ODPINEGGNDC* FDDEMMPCGAC; // 0x10
	::System::String* HIAIKHDFCLN; // 0x18
	::System::String* HGHNCCPAFPJ; // 0x20

	::System::Void _ctor(::System::String* HIAIKHDFCLN, ::System::String* HGHNCCPAFPJ, ::ODPINEGGNDC* FDDEMMPCGAC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::ODPINEGGNDC*))((::PBYTE)hIl2Cpp + CEJFLJLHBAE__CTOR_OFFSET))(this, HIAIKHDFCLN, HGHNCCPAFPJ, FDDEMMPCGAC);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJFLJLHBAE_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* KGMDDJHHODA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJFLJLHBAE_KGMDDJHHODA_OFFSET))(this);
	}

	::ODPINEGGNDC* KAKLGHJLHOI()
	{
		return ((::ODPINEGGNDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJFLJLHBAE_KAKLGHJLHOI_OFFSET))(this);
	}
};
