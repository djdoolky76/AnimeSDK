#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E8C932FC42A3F77E;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E8C932FC42A3F77E_B7DD63E03A3B7120_B5428E03E3839786_OFFSET UNITYSDK_OFFSET(0x3976540)
#define E8C932FC42A3F77E_B7DD63E03A3B7120_F4ADDCBDC38FA593_OFFSET UNITYSDK_OFFSET(0x39764F0)
#define E8C932FC42A3F77E_B7DD63E03A3B7120__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E8C932FC42A3F77E_B7DD63E03A3B7120_TypeDefinitionIndex = 12476;

class E8C932FC42A3F77E_B7DD63E03A3B7120 : public ::System::Object
{
public:
	::E8C932FC42A3F77E* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_B7DD63E03A3B7120__CTOR_OFFSET))(this);
	}

	::System::Void F4ADDCBDC38FA593(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* E96FF67B7586C927, ::System::String* A9B0E744486424C1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_B7DD63E03A3B7120_F4ADDCBDC38FA593_OFFSET))(this, E96FF67B7586C927, A9B0E744486424C1);
	}

	::System::Void B5428E03E3839786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_B7DD63E03A3B7120_B5428E03E3839786_OFFSET))(this);
	}
};
