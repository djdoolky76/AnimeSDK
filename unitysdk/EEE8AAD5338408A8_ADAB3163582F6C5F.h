#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class B8FAD569CE79AAEB;
namespace System { class Object; }
namespace System { class String; }
template <typename T> class BFEEB82C8AC83862;

#define EEE8AAD5338408A8_ADAB3163582F6C5F_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define EEE8AAD5338408A8_ADAB3163582F6C5F__CTOR_OFFSET UNITYSDK_OFFSET(0x2978430)

inline static constexpr unsigned int EEE8AAD5338408A8_ADAB3163582F6C5F_TypeDefinitionIndex = 15772;

class EEE8AAD5338408A8_ADAB3163582F6C5F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EEE8AAD5338408A8_ADAB3163582F6C5F__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::B8FAD569CE79AAEB* AD0CAFBAFB8B01EA, ::System::String* E74700DF48C501C9, ::BFEEB82C8AC83862<::System::Int64>* E82293C0814051A5)
	{
		return ((::System::Void(*)(::PVOID, ::B8FAD569CE79AAEB*, ::System::String*, ::BFEEB82C8AC83862<::System::Int64>*))((::PBYTE)hIl2Cpp + EEE8AAD5338408A8_ADAB3163582F6C5F_INVOKE_OFFSET))(this, AD0CAFBAFB8B01EA, E74700DF48C501C9, E82293C0814051A5);
	}
};
