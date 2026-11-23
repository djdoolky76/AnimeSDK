#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Object; }
namespace System { class String; }

#define A65A2E103B4AF1B3_FB66F81D41BB82C5_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define A65A2E103B4AF1B3_FB66F81D41BB82C5__CTOR_OFFSET UNITYSDK_OFFSET(0x2EEF610)

inline static constexpr unsigned int A65A2E103B4AF1B3_FB66F81D41BB82C5_TypeDefinitionIndex = 11894;

class A65A2E103B4AF1B3_FB66F81D41BB82C5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A65A2E103B4AF1B3_FB66F81D41BB82C5__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 AB46D6A196F8FF64, ::System::String* B083BE7841B347C4, ::MiHoYo::SDK::AccountModel* E0B1DDD91A901A3D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + A65A2E103B4AF1B3_FB66F81D41BB82C5_INVOKE_OFFSET))(this, AB46D6A196F8FF64, B083BE7841B347C4, E0B1DDD91A901A3D);
	}
};
