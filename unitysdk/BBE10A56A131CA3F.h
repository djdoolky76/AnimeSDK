#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BBE10A56A131CA3F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BBE10A56A131CA3F_TypeDefinitionIndex = 19401;

class BBE10A56A131CA3F : public ::System::Object
{
public:
	::System::Boolean A4381C54CD1E837D; // 0x10
	::System::Boolean FFB480CA62D597A9; // 0x11
	::System::Byte _padding0[0x6];
	::System::String* E24F2320F05CDB10; // 0x18
	::System::Boolean EFEF970FA33DD17E; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBE10A56A131CA3F__CTOR_OFFSET))(this);
	}
};
