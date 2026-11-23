#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B62A9047B03B607A_E700DC0AEA43482D_AD8827CD25D2D6E1_OFFSET UNITYSDK_OFFSET(0x3B0D8F0)
#define B62A9047B03B607A_E700DC0AEA43482D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B62A9047B03B607A_E700DC0AEA43482D_TypeDefinitionIndex = 12268;

class B62A9047B03B607A_E700DC0AEA43482D : public ::System::Object
{
public:
	::System::String* EAE533E9B4BAEB61; // 0x10
	::System::String* B960AC235824C6C8; // 0x18
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B62A9047B03B607A_E700DC0AEA43482D__CTOR_OFFSET))(this);
	}

	::System::Void AD8827CD25D2D6E1(::System::Int32 B714679C324FF96E, ::System::String* B4B6D6374ADCCE26)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + B62A9047B03B607A_E700DC0AEA43482D_AD8827CD25D2D6E1_OFFSET))(this, B714679C324FF96E, B4B6D6374ADCCE26);
	}
};
