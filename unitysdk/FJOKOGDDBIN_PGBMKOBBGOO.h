#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NNAMAFIPLGB;

#define FJOKOGDDBIN_PGBMKOBBGOO_LEHPKDEEBNE_OFFSET UNITYSDK_OFFSET(0x132230B0)
#define FJOKOGDDBIN_PGBMKOBBGOO__CTOR_OFFSET UNITYSDK_OFFSET(0x132230A0)

inline static constexpr unsigned int FJOKOGDDBIN_PGBMKOBBGOO_TypeDefinitionIndex = 85133;

class FJOKOGDDBIN_PGBMKOBBGOO : public ::System::Object
{
public:
	::System::Int32 MDJFJPHNGCK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOKOGDDBIN_PGBMKOBBGOO__CTOR_OFFSET))(this);
	}

	::System::Boolean LEHPKDEEBNE(::NNAMAFIPLGB* NFFNEFLKPDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::NNAMAFIPLGB*))((::PBYTE)hIl2Cpp + FJOKOGDDBIN_PGBMKOBBGOO_LEHPKDEEBNE_OFFSET))(this, NFFNEFLKPDG);
	}
};
