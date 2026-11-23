#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B5FA9BAC3B8156B2_FFA214F94FEFB94D_F3B8E8408ADC8176_OFFSET UNITYSDK_OFFSET(0x3A994F0)
#define B5FA9BAC3B8156B2_FFA214F94FEFB94D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B5FA9BAC3B8156B2_FFA214F94FEFB94D_TypeDefinitionIndex = 12015;

class B5FA9BAC3B8156B2_FFA214F94FEFB94D : public ::System::Object
{
public:
	::System::String* F54BD0D7A1C4787C; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B5FA9BAC3B8156B2_FFA214F94FEFB94D__CTOR_OFFSET))(this);
	}

	::System::Void F3B8E8408ADC8176(::System::Int32 AB46D6A196F8FF64, ::System::String* BD2C65BCCC92F212, ::System::String* ADA902CFC22F5C58)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + B5FA9BAC3B8156B2_FFA214F94FEFB94D_F3B8E8408ADC8176_OFFSET))(this, AB46D6A196F8FF64, BD2C65BCCC92F212, ADA902CFC22F5C58);
	}
};
