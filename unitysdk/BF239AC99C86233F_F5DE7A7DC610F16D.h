#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BF239AC99C86233F;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BF239AC99C86233F_F5DE7A7DC610F16D_EFD9EE3A9EE2A842_OFFSET UNITYSDK_OFFSET(0x2064150)
#define BF239AC99C86233F_F5DE7A7DC610F16D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BF239AC99C86233F_F5DE7A7DC610F16D_TypeDefinitionIndex = 8374;

class BF239AC99C86233F_F5DE7A7DC610F16D : public ::System::Object
{
public:
	::BF239AC99C86233F* A544919C800E2923; // 0x10
	::System::Action_1<::System::Boolean>* B294FBF5AC6D3546; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF239AC99C86233F_F5DE7A7DC610F16D__CTOR_OFFSET))(this);
	}

	::System::Void EFD9EE3A9EE2A842(::System::Boolean AD09E42C80D4B5FC, ::System::String* E22BCD4736CD9DF9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + BF239AC99C86233F_F5DE7A7DC610F16D_EFD9EE3A9EE2A842_OFFSET))(this, AD09E42C80D4B5FC, E22BCD4736CD9DF9);
	}
};
