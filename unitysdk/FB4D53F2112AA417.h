#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FB4D53F2112AA417__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FB4D53F2112AA417_TypeDefinitionIndex = 8985;

class FB4D53F2112AA417 : public ::System::Object
{
public:
	::System::String* AEB3623BB2B3C7F1; // 0x10
	::E865F6F8B8B44C1E E34282693D52D228; // 0x18
	::System::Int32 E04C06BFE19D6905; // 0x20
	::System::Byte _padding0[0x4];
	::System::String* AEDCABB247AF5AEE; // 0x28
	::System::String* EDF0995C6692D454; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB4D53F2112AA417__CTOR_OFFSET))(this);
	}
};
