#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E6C363D74446382E;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define E6C363D74446382E_A7C8A585F095D034_EFD9EE3A9EE2A842_OFFSET UNITYSDK_OFFSET(0x1EC4D40)
#define E6C363D74446382E_A7C8A585F095D034__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E6C363D74446382E_A7C8A585F095D034_TypeDefinitionIndex = 6778;

class E6C363D74446382E_A7C8A585F095D034 : public ::System::Object
{
public:
	::E6C363D74446382E* A544919C800E2923; // 0x10
	::System::Action_1<::System::Boolean>* B294FBF5AC6D3546; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6C363D74446382E_A7C8A585F095D034__CTOR_OFFSET))(this);
	}

	::System::Void EFD9EE3A9EE2A842(::System::Boolean AD09E42C80D4B5FC, ::System::String* E22BCD4736CD9DF9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + E6C363D74446382E_A7C8A585F095D034_EFD9EE3A9EE2A842_OFFSET))(this, AD09E42C80D4B5FC, E22BCD4736CD9DF9);
	}
};
