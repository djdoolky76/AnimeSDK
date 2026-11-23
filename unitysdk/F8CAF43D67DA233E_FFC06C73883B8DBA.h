#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F8CAF43D67DA233E_FFC06C73883B8DBA_FC806DB060082507_OFFSET UNITYSDK_OFFSET(0x3ADF8F0)
#define F8CAF43D67DA233E_FFC06C73883B8DBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F8CAF43D67DA233E_FFC06C73883B8DBA_TypeDefinitionIndex = 12153;

class F8CAF43D67DA233E_FFC06C73883B8DBA : public ::System::Object
{
public:
	::System::String* E38AC34CA582739D; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8CAF43D67DA233E_FFC06C73883B8DBA__CTOR_OFFSET))(this);
	}

	::System::Void FC806DB060082507()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8CAF43D67DA233E_FFC06C73883B8DBA_FC806DB060082507_OFFSET))(this);
	}
};
