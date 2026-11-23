#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A91E6FBA46261828/AECE11D68815C664.h"
#include "unitysdk/E8CC797ECA9C07A3.h"
#include "unitysdk/System/Object.h"

#define E53DCDB3F7BB7192_E7DEAF937ECB559E_OFFSET UNITYSDK_OFFSET(0x227D670)
#define E53DCDB3F7BB7192__CCTOR_OFFSET UNITYSDK_OFFSET(0x227D6C0)

inline static constexpr unsigned int E53DCDB3F7BB7192_TypeDefinitionIndex = 7026;

class E53DCDB3F7BB7192 : public ::System::Object
{
public:
	static ::E8CC797ECA9C07A3* StaticGet_AE04A22CC80CDB9D()
	{
		return (::E8CC797ECA9C07A3*)Il2CppClass::FromTypeDefinitionIndex(E53DCDB3F7BB7192_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E53DCDB3F7BB7192__CCTOR_OFFSET))();
	}

	static ::E8CC797ECA9C07A3 E7DEAF937ECB559E(::A91E6FBA46261828::AECE11D68815C664 B538F427253AE316)
	{
		return ((::E8CC797ECA9C07A3(*)(::A91E6FBA46261828::AECE11D68815C664))((::PBYTE)hIl2Cpp + E53DCDB3F7BB7192_E7DEAF937ECB559E_OFFSET))(B538F427253AE316);
	}
};
