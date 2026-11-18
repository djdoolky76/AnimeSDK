#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMLPLPJODBN.h"
#include "unitysdk/PCKANHPLBNB.h"
#include "unitysdk/System/Object.h"

class DAJFJPNDFPK;
class ECKDKIFBBJP;
namespace System { class String; }

#define CAAEMKFJGJE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11527070)
#define CAAEMKFJGJE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x115270E0)
#define CAAEMKFJGJE__CTOR_OFFSET UNITYSDK_OFFSET(0x11527060)

inline static constexpr unsigned int CAAEMKFJGJE_TypeDefinitionIndex = 58266;

class CAAEMKFJGJE : public ::System::Object
{
public:
	::System::String* OFJNDBJAODM; // 0x10
	::System::String* DBBDKLENOKD; // 0x18
	::System::String* CKLGDGENJKL; // 0x20
	::System::String* MBGGEGCNPMB; // 0x28
	::System::String* IMLEGALJANN; // 0x30
	::System::String* LNDEFNPNKAL; // 0x38
	::System::String* EGAJMEOAOMG; // 0x40
	::System::String* BACHPPCDKKL; // 0x48
	::System::Boolean ACEGAICKBBO; // 0x50
	::System::Boolean EGOBBNHHIIJ; // 0x51
	::System::Boolean AFBNAHOBMNA; // 0x52
	::System::Byte _padding0[0x1];
	::System::Int32 FAKEKKGKPAK; // 0x54
	::System::Int32 ACHBBPJIBIE; // 0x58
	::System::Int32 HJOILBLNMIL; // 0x5C
	::GMLPLPJODBN CPMIGPOGNFL; // 0x60
	::PCKANHPLBNB IMHBCEFOJDC; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAEMKFJGJE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::DAJFJPNDFPK* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::DAJFJPNDFPK*))((::PBYTE)hIl2Cpp + CAAEMKFJGJE__CTOR_1_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void _ctor_2(::ECKDKIFBBJP* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::ECKDKIFBBJP*))((::PBYTE)hIl2Cpp + CAAEMKFJGJE__CTOR_2_OFFSET))(this, LJBPECKCCEA);
	}
};
