#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A99E611D68D1D7A4_A1B8C9492430AA2F_F3B8E8408ADC8176_OFFSET UNITYSDK_OFFSET(0x3A5CB20)
#define A99E611D68D1D7A4_A1B8C9492430AA2F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A99E611D68D1D7A4_A1B8C9492430AA2F_TypeDefinitionIndex = 12985;

class A99E611D68D1D7A4_A1B8C9492430AA2F : public ::System::Object
{
public:
	::System::String* B26FDED83CB31119; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A99E611D68D1D7A4_A1B8C9492430AA2F__CTOR_OFFSET))(this);
	}

	::System::Void F3B8E8408ADC8176(::System::Int32 AB46D6A196F8FF64, ::System::String* A9DC260775AB80C3, ::System::Int32 FEB1DB7035CB3236)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + A99E611D68D1D7A4_A1B8C9492430AA2F_F3B8E8408ADC8176_OFFSET))(this, AB46D6A196F8FF64, A9DC260775AB80C3, FEB1DB7035CB3236);
	}
};
