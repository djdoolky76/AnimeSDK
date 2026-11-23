#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B8A686045547AA7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B8A686045547AA7F_TypeDefinitionIndex = 7714;

class B8A686045547AA7F : public ::System::Object
{
public:
	::E865F6F8B8B44C1E AF41532E7F7801AD; // 0x10
	::E865F6F8B8B44C1E B8897E9E8177BD91; // 0x18
	::System::Int32 E04C06BFE19D6905; // 0x20
	::System::Byte _padding0[0x4];
	::System::String* AEDCABB247AF5AEE; // 0x28
	::System::String* EDF0995C6692D454; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8A686045547AA7F__CTOR_OFFSET))(this);
	}
};
