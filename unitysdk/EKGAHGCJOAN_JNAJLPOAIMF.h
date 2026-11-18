#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HIPPLJGLAKD;
namespace System { class Action; }

#define EKGAHGCJOAN_JNAJLPOAIMF_KPCLOBKDBFF_OFFSET UNITYSDK_OFFSET(0x16158C00)
#define EKGAHGCJOAN_JNAJLPOAIMF__CTOR_OFFSET UNITYSDK_OFFSET(0x16158BF0)

inline static constexpr unsigned int EKGAHGCJOAN_JNAJLPOAIMF_TypeDefinitionIndex = 51196;

class EKGAHGCJOAN_JNAJLPOAIMF : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_JNAJLPOAIMF__CTOR_OFFSET))(this);
	}

	::System::Void KPCLOBKDBFF(::HIPPLJGLAKD* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::HIPPLJGLAKD*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_JNAJLPOAIMF_KPCLOBKDBFF_OFFSET))(this, GLAOEHCGCFO);
	}
};
