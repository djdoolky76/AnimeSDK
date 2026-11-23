#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Guid.h"

namespace System { class String; }

#define F40EB8947F163A2D_E6A4EDFB781D1DCC_OFFSET UNITYSDK_OFFSET(0x26BBE10)
#define F40EB8947F163A2D_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3BB09F0)
#define F40EB8947F163A2D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BB0A80)
#define F40EB8947F163A2D__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1778980)
#define F40EB8947F163A2D__CTOR_OFFSET UNITYSDK_OFFSET(0x3BB0A40)

inline static constexpr unsigned int F40EB8947F163A2D_TypeDefinitionIndex = 11185;

class F40EB8947F163A2D : public ::System::Object
{
public:
	::System::String* A9DFDE835E8FE4EF; // 0x10

	::System::Void _ctor(::System::Guid F931245BB5DF042A, ::System::String* EA3EE53D4715CEE2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Guid, ::System::String*))((::PBYTE)hIl2Cpp + F40EB8947F163A2D__CTOR_OFFSET))(this, F931245BB5DF042A, EA3EE53D4715CEE2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F40EB8947F163A2D__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::System::String* EA3EE53D4715CEE2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F40EB8947F163A2D__CTOR_2_OFFSET))(this, EA3EE53D4715CEE2);
	}

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F40EB8947F163A2D_E8AF1E0387A100FA_OFFSET))(this);
	}

	::System::Void E6A4EDFB781D1DCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F40EB8947F163A2D_E6A4EDFB781D1DCC_OFFSET))(this);
	}
};
