#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKLBIADKAGC.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define IBHGDJGJLEI_MPNMJPCECHC_IGDEOPKMHJA_OFFSET UNITYSDK_OFFSET(0x12E9EB20)
#define IBHGDJGJLEI_MPNMJPCECHC__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9EB10)

inline static constexpr unsigned int IBHGDJGJLEI_MPNMJPCECHC_TypeDefinitionIndex = 55749;

class IBHGDJGJLEI_MPNMJPCECHC : public ::System::Object
{
public:
	::System::Action_1<::AKLBIADKAGC>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_MPNMJPCECHC__CTOR_OFFSET))(this);
	}

	::System::Void IGDEOPKMHJA(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_MPNMJPCECHC_IGDEOPKMHJA_OFFSET))(this, GLAOEHCGCFO);
	}
};
