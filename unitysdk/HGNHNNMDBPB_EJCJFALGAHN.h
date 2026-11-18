#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGNHNNMDBPB;
class LGALOBEFELB;

#define HGNHNNMDBPB_EJCJFALGAHN_NKJPGIJPLIN_OFFSET UNITYSDK_OFFSET(0x19E1E6D0)
#define HGNHNNMDBPB_EJCJFALGAHN__CTOR_OFFSET UNITYSDK_OFFSET(0x19E160B0)

inline static constexpr unsigned int HGNHNNMDBPB_EJCJFALGAHN_TypeDefinitionIndex = 51523;

class HGNHNNMDBPB_EJCJFALGAHN : public ::System::Object
{
public:
	::HGNHNNMDBPB* KLHPEBKNIFB; // 0x10
	::System::Int32 HBJOLKHGGDD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNHNNMDBPB_EJCJFALGAHN__CTOR_OFFSET))(this);
	}

	::System::Boolean NKJPGIJPLIN(::LGALOBEFELB* PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGALOBEFELB*))((::PBYTE)hIl2Cpp + HGNHNNMDBPB_EJCJFALGAHN_NKJPGIJPLIN_OFFSET))(this, PELAJIFDIPN);
	}
};
