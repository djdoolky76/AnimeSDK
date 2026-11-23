#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FF38AB31E6A337B7_F0715F86377A7DD9_OFFSET UNITYSDK_OFFSET(0x2215100)
#define FF38AB31E6A337B7_F84AD4FF860E18BA_OFFSET UNITYSDK_OFFSET(0x22150B0)
#define FF38AB31E6A337B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FF38AB31E6A337B7_TypeDefinitionIndex = 9104;

class FF38AB31E6A337B7 : public ::System::Object
{
public:
	::System::Void F0715F86377A7DD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF38AB31E6A337B7_F0715F86377A7DD9_OFFSET))(this);
	}

	::System::Void F84AD4FF860E18BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF38AB31E6A337B7_F84AD4FF860E18BA_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF38AB31E6A337B7__CTOR_OFFSET))(this);
	}
};
