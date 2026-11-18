#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHBMDMONNBB_MLBOIKABFHJ.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EHBMDMONNBB__CTOR_OFFSET UNITYSDK_OFFSET(0x17230970)

inline static constexpr unsigned int EHBMDMONNBB_TypeDefinitionIndex = 72221;

class EHBMDMONNBB : public ::System::Object
{
public:
	::System::String* PONMLAPAEBJ; // 0x10
	::System::Int32 PHOGCAKNBCJ; // 0x18
	::System::Boolean CDPLHMCECPB; // 0x1C
	::System::Byte _padding0[0x3];
	::EHBMDMONNBB_MLBOIKABFHJ KKPHLMFOGHJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBMDMONNBB__CTOR_OFFSET))(this);
	}
};
