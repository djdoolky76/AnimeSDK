#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GJNEGPLPJGL;
namespace System { class Action; }

#define EKGAHGCJOAN_OPDJHDHOFGC_JKGFPKGEBCJ_OFFSET UNITYSDK_OFFSET(0x11CB0B60)
#define EKGAHGCJOAN_OPDJHDHOFGC__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB0B50)

inline static constexpr unsigned int EKGAHGCJOAN_OPDJHDHOFGC_TypeDefinitionIndex = 51210;

class EKGAHGCJOAN_OPDJHDHOFGC : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_OPDJHDHOFGC__CTOR_OFFSET))(this);
	}

	::System::Void JKGFPKGEBCJ(::GJNEGPLPJGL* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::GJNEGPLPJGL*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_OPDJHDHOFGC_JKGFPKGEBCJ_OFFSET))(this, GLAOEHCGCFO);
	}
};
