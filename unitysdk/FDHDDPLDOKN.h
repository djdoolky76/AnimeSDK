#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FDHDDPLDOKN__CTOR_OFFSET UNITYSDK_OFFSET(0x13204640)

inline static constexpr unsigned int FDHDDPLDOKN_TypeDefinitionIndex = 84826;

class FDHDDPLDOKN : public ::System::Object
{
public:
	::System::UInt64 DGEBDBEOEFO; // 0x10
	::System::Boolean ELDKOLNMHPN; // 0x18
	::System::Boolean EHGMNHMIHCA; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHDDPLDOKN__CTOR_OFFSET))(this);
	}
};
