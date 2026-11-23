#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B1417BB04C63EF58;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }

#define B1417BB04C63EF58_E1FE8D7BA6964D68_B7E41C99BFF3E57F_OFFSET UNITYSDK_OFFSET(0x3975290)
#define B1417BB04C63EF58_E1FE8D7BA6964D68__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B1417BB04C63EF58_E1FE8D7BA6964D68_TypeDefinitionIndex = 12480;

class B1417BB04C63EF58_E1FE8D7BA6964D68 : public ::System::Object
{
public:
	::B1417BB04C63EF58* A544919C800E2923; // 0x10
	::System::String* AF4717A1A80FD60F; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1417BB04C63EF58_E1FE8D7BA6964D68__CTOR_OFFSET))(this);
	}

	::System::Void B7E41C99BFF3E57F(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B1417BB04C63EF58_E1FE8D7BA6964D68_B7E41C99BFF3E57F_OFFSET))(this, A6CAE7339066B0FB);
	}
};
