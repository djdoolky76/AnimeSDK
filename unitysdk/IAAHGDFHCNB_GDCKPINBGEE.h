#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IAAHGDFHCNB_MGCPDNMHMCO;
namespace System { class Action; }
namespace System { class String; }

#define IAAHGDFHCNB_GDCKPINBGEE_PFFFHBGLBOA_OFFSET UNITYSDK_OFFSET(0x15E923F0)
#define IAAHGDFHCNB_GDCKPINBGEE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E923E0)

inline static constexpr unsigned int IAAHGDFHCNB_GDCKPINBGEE_TypeDefinitionIndex = 88127;

class IAAHGDFHCNB_GDCKPINBGEE : public ::System::Object
{
public:
	::System::String* DMKBGJMJELN; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::IAAHGDFHCNB_MGCPDNMHMCO* NGGNKKAMDGH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_GDCKPINBGEE__CTOR_OFFSET))(this);
	}

	::System::Void PFFFHBGLBOA(::Il2CppArray<::System::Byte>* AOADDGCDELC)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_GDCKPINBGEE_PFFFHBGLBOA_OFFSET))(this, AOADDGCDELC);
	}
};
