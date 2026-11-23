#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define AB369C0F312577CE_FA31EB06158A745C_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define AB369C0F312577CE_FA31EB06158A745C__CTOR_OFFSET UNITYSDK_OFFSET(0x3A628B0)

inline static constexpr unsigned int AB369C0F312577CE_FA31EB06158A745C_TypeDefinitionIndex = 13049;

class AB369C0F312577CE_FA31EB06158A745C : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AB369C0F312577CE_FA31EB06158A745C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::IntPtr F220A2D27F7C6B6C, ::System::Int32& F54AF627638DE3C9)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + AB369C0F312577CE_FA31EB06158A745C_INVOKE_OFFSET))(this, F220A2D27F7C6B6C, F54AF627638DE3C9);
	}
};
