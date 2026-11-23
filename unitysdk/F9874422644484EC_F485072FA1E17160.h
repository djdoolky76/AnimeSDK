#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F9874422644484EC_A403B99D3ECA085F.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define F9874422644484EC_F485072FA1E17160_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define F9874422644484EC_F485072FA1E17160__CTOR_OFFSET UNITYSDK_OFFSET(0x2284E60)

inline static constexpr unsigned int F9874422644484EC_F485072FA1E17160_TypeDefinitionIndex = 15353;

class F9874422644484EC_F485072FA1E17160 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F9874422644484EC_F485072FA1E17160__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::F9874422644484EC_A403B99D3ECA085F B714679C324FF96E, ::System::String* A7714DE08D5D7E93)
	{
		return ((::System::Void(*)(::PVOID, ::F9874422644484EC_A403B99D3ECA085F, ::System::String*))((::PBYTE)hIl2Cpp + F9874422644484EC_F485072FA1E17160_INVOKE_OFFSET))(this, B714679C324FF96E, A7714DE08D5D7E93);
	}
};
