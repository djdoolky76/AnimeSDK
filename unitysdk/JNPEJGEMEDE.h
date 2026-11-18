#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPGNIAPFAGK;
class FBHIBEEIEJD;
class JDEGKAENALE;

#define JNPEJGEMEDE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18A27510)
#define JNPEJGEMEDE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A27500)

inline static constexpr unsigned int JNPEJGEMEDE_TypeDefinitionIndex = 50078;

class JNPEJGEMEDE : public ::System::Object
{
public:
	::FBHIBEEIEJD* NEFCAOKIAAP; // 0x10
	::JDEGKAENALE* DPHACEOIDIJ; // 0x18
	::BPGNIAPFAGK* KGMGONDDNKJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPEJGEMEDE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::FBHIBEEIEJD* CBPIKKODLNM, ::BPGNIAPFAGK* GOMJEIJHBIA, ::JDEGKAENALE* GIMMJKDGLOG)
	{
		return ((::System::Void(*)(::PVOID, ::FBHIBEEIEJD*, ::BPGNIAPFAGK*, ::JDEGKAENALE*))((::PBYTE)hIl2Cpp + JNPEJGEMEDE__CTOR_1_OFFSET))(this, CBPIKKODLNM, GOMJEIJHBIA, GIMMJKDGLOG);
	}
};
