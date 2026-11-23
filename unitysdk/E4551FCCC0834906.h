#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define E4551FCCC0834906_AAD5B20E982C7501_OFFSET UNITYSDK_OFFSET(0x3DEE260)
#define E4551FCCC0834906_B2366F1FE01129D7_OFFSET UNITYSDK_OFFSET(0x3DEE2C0)
#define E4551FCCC0834906_BA9221877F593717_OFFSET UNITYSDK_OFFSET(0x3DEE200)
#define E4551FCCC0834906_F06E49FE0FE784C7_OFFSET UNITYSDK_OFFSET(0x3DEE380)
#define E4551FCCC0834906_F9F3A4A5BF81AF3E_OFFSET UNITYSDK_OFFSET(0x3DEE320)

inline static constexpr unsigned int E4551FCCC0834906_TypeDefinitionIndex = 20183;

class E4551FCCC0834906 : public ::System::Object
{
public:
	static ::System::Exception* B2366F1FE01129D7()
	{
		return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + E4551FCCC0834906_B2366F1FE01129D7_OFFSET))();
	}

	static ::System::Exception* F06E49FE0FE784C7()
	{
		return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + E4551FCCC0834906_F06E49FE0FE784C7_OFFSET))();
	}

	static ::System::Exception* AAD5B20E982C7501(::System::String* B9AEC57275825552)
	{
		return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + E4551FCCC0834906_AAD5B20E982C7501_OFFSET))(B9AEC57275825552);
	}

	static ::System::Exception* BA9221877F593717(::System::String* B9AEC57275825552)
	{
		return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + E4551FCCC0834906_BA9221877F593717_OFFSET))(B9AEC57275825552);
	}

	static ::System::Exception* F9F3A4A5BF81AF3E()
	{
		return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + E4551FCCC0834906_F9F3A4A5BF81AF3E_OFFSET))();
	}
};
