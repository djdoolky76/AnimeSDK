#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A5CAEE1FA8564D3B;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define A5CAEE1FA8564D3B_B05E31236FB854B8_EC7EB2DAFF5C76BE_OFFSET UNITYSDK_OFFSET(0x3AC7ED0)
#define A5CAEE1FA8564D3B_B05E31236FB854B8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A5CAEE1FA8564D3B_B05E31236FB854B8_TypeDefinitionIndex = 12115;

class A5CAEE1FA8564D3B_B05E31236FB854B8 : public ::System::Object
{
public:
	::A5CAEE1FA8564D3B* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A5CAEE1FA8564D3B_B05E31236FB854B8__CTOR_OFFSET))(this);
	}

	::System::Void EC7EB2DAFF5C76BE(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A5CAEE1FA8564D3B_B05E31236FB854B8_EC7EB2DAFF5C76BE_OFFSET))(this, A6CAE7339066B0FB);
	}
};
