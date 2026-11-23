#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define F8278436A0F8D5D5_E67D6F84E5F92651_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define F8278436A0F8D5D5_E67D6F84E5F92651__CTOR_OFFSET UNITYSDK_OFFSET(0x3E73DF0)

inline static constexpr unsigned int F8278436A0F8D5D5_E67D6F84E5F92651_TypeDefinitionIndex = 15095;

class F8278436A0F8D5D5_E67D6F84E5F92651 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F8278436A0F8D5D5_E67D6F84E5F92651__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::System::IntPtr ABFACF4B79951FBB, ::System::IntPtr F79B4D487F303AB2, ::System::IntPtr& E4CEFA39185DED2A)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + F8278436A0F8D5D5_E67D6F84E5F92651_INVOKE_OFFSET))(this, ABFACF4B79951FBB, F79B4D487F303AB2, E4CEFA39185DED2A);
	}
};
