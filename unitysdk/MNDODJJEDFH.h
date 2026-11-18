#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MNDODJJEDFH__CTOR_OFFSET UNITYSDK_OFFSET(0x20051710)

inline static constexpr unsigned int MNDODJJEDFH_TypeDefinitionIndex = 17991;

class MNDODJJEDFH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDODJJEDFH__CTOR_OFFSET))(this);
	}
};
