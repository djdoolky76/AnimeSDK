#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OPOCJPJBPLO;

#define KFPKNGNFJNO__CTOR_OFFSET UNITYSDK_OFFSET(0x17650180)

inline static constexpr unsigned int KFPKNGNFJNO_TypeDefinitionIndex = 80679;

class KFPKNGNFJNO : public ::System::Object
{
public:
	::OPOCJPJBPLO* FMHHLHPNOFM; // 0x10
	::System::Boolean JFLJKEKANND; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 NKKADOEFBKE; // 0x1C
	::System::Int32 DHAJLFMHDNG; // 0x20

	::System::Void _ctor(::System::Int32 KLJNHMGMDNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFPKNGNFJNO__CTOR_OFFSET))(this, KLJNHMGMDNP);
	}
};
