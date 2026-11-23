#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class FF1237522147A967;
namespace System { class Object; }

#define AC6624AB0D57DC9A_BEB80E9A4BC1D1F4_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define AC6624AB0D57DC9A_BEB80E9A4BC1D1F4__CTOR_OFFSET UNITYSDK_OFFSET(0x2284E60)

inline static constexpr unsigned int AC6624AB0D57DC9A_BEB80E9A4BC1D1F4_TypeDefinitionIndex = 12235;

class AC6624AB0D57DC9A_BEB80E9A4BC1D1F4 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AC6624AB0D57DC9A_BEB80E9A4BC1D1F4__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 AB46D6A196F8FF64, ::FF1237522147A967* E883E1B7FF605E04)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FF1237522147A967*))((::PBYTE)hIl2Cpp + AC6624AB0D57DC9A_BEB80E9A4BC1D1F4_INVOKE_OFFSET))(this, AB46D6A196F8FF64, E883E1B7FF605E04);
	}
};
