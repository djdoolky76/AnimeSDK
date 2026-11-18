#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MOHDBDOMBPN;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOHDBDOMBPN_AJJINDMLHEA_AGHEFFJACNG_OFFSET UNITYSDK_OFFSET(0x131A7C30)
#define MOHDBDOMBPN_AJJINDMLHEA__CTOR_OFFSET UNITYSDK_OFFSET(0x131A7C20)

inline static constexpr unsigned int MOHDBDOMBPN_AJJINDMLHEA_TypeDefinitionIndex = 69264;

class MOHDBDOMBPN_AJJINDMLHEA : public ::System::Object
{
public:
	::System::String* PAHLJPEDDAA; // 0x10
	::System::Func_1<::System::Int64>* BIJOFFFGJBN; // 0x18
	::MOHDBDOMBPN* KLHPEBKNIFB; // 0x20
	::System::Int64 BBHKNMJLKBI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHDBDOMBPN_AJJINDMLHEA__CTOR_OFFSET))(this);
	}

	::System::String* AGHEFFJACNG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHDBDOMBPN_AJJINDMLHEA_AGHEFFJACNG_OFFSET))(this);
	}
};
