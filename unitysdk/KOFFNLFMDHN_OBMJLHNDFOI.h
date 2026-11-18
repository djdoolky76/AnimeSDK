#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KOFFNLFMDHN_OBMJLHNDFOI_NONNPAJGJFH_OFFSET UNITYSDK_OFFSET(0x15BA6380)
#define KOFFNLFMDHN_OBMJLHNDFOI__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA6370)

inline static constexpr unsigned int KOFFNLFMDHN_OBMJLHNDFOI_TypeDefinitionIndex = 60130;

class KOFFNLFMDHN_OBMJLHNDFOI : public ::System::Object
{
public:
	::System::Action* OEBJCINHINP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_OBMJLHNDFOI__CTOR_OFFSET))(this);
	}

	::System::Void NONNPAJGJFH(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_OBMJLHNDFOI_NONNPAJGJFH_OFFSET))(this, GLAOEHCGCFO);
	}
};
