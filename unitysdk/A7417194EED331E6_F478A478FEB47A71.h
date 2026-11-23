#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A7417194EED331E6_F478A478FEB47A71_AC20C01C65CE11A6_OFFSET UNITYSDK_OFFSET(0x3A99160)
#define A7417194EED331E6_F478A478FEB47A71__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A7417194EED331E6_F478A478FEB47A71_TypeDefinitionIndex = 12005;

class A7417194EED331E6_F478A478FEB47A71 : public ::System::Object
{
public:
	::System::String* B23A1FE2DF746573; // 0x10
	::System::String* BC44D01FDCF9D2D6; // 0x18
	::System::String* B960AC235824C6C8; // 0x20
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7417194EED331E6_F478A478FEB47A71__CTOR_OFFSET))(this);
	}

	::System::Void AC20C01C65CE11A6(::System::Int32 B714679C324FF96E, ::System::String* B4B6D6374ADCCE26)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + A7417194EED331E6_F478A478FEB47A71_AC20C01C65CE11A6_OFFSET))(this, B714679C324FF96E, B4B6D6374ADCCE26);
	}
};
