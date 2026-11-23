#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A7417194EED331E6_F0CD683B49F8EDA4_BC7476E572FD0B26_OFFSET UNITYSDK_OFFSET(0x3A985B0)
#define A7417194EED331E6_F0CD683B49F8EDA4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A7417194EED331E6_F0CD683B49F8EDA4_TypeDefinitionIndex = 12009;

class A7417194EED331E6_F0CD683B49F8EDA4 : public ::System::Object
{
public:
	::System::String* BA2C9EFBD50F3212; // 0x10
	::System::String* B960AC235824C6C8; // 0x18
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7417194EED331E6_F0CD683B49F8EDA4__CTOR_OFFSET))(this);
	}

	::System::Void BC7476E572FD0B26(::System::Int32 B714679C324FF96E, ::System::String* B4B6D6374ADCCE26)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + A7417194EED331E6_F0CD683B49F8EDA4_BC7476E572FD0B26_OFFSET))(this, B714679C324FF96E, B4B6D6374ADCCE26);
	}
};
