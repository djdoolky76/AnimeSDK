#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CAJNOGLDGNH_EAOFNOLGMFG_OFFSET UNITYSDK_OFFSET(0x20068300)
#define CAJNOGLDGNH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x200682F0)
#define CAJNOGLDGNH__CTOR_OFFSET UNITYSDK_OFFSET(0x200682E0)

inline static constexpr unsigned int CAJNOGLDGNH_TypeDefinitionIndex = 6974;

class CAJNOGLDGNH : public ::System::Attribute
{
public:
	::System::String* HODAIDNDKHD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJNOGLDGNH__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CAJNOGLDGNH__CTOR_1_OFFSET))(this, HODAIDNDKHD);
	}

	::System::String* EAOFNOLGMFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJNOGLDGNH_EAOFNOLGMFG_OFFSET))(this);
	}
};
