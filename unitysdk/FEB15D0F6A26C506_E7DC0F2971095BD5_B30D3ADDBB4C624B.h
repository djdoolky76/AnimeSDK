#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/FEB15D0F6A26C506_F1E905A9A25EDD66.h"

namespace System { class Object; }

#define FEB15D0F6A26C506_E7DC0F2971095BD5_B30D3ADDBB4C624B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define FEB15D0F6A26C506_E7DC0F2971095BD5_B30D3ADDBB4C624B__CTOR_OFFSET UNITYSDK_OFFSET(0x33414C0)

inline static constexpr unsigned int FEB15D0F6A26C506_E7DC0F2971095BD5_B30D3ADDBB4C624B_TypeDefinitionIndex = 20512;

class FEB15D0F6A26C506_E7DC0F2971095BD5_B30D3ADDBB4C624B : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* param_0, ::System::IntPtr param_1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FEB15D0F6A26C506_E7DC0F2971095BD5_B30D3ADDBB4C624B__CTOR_OFFSET))(this, param_0, param_1);
	}

	::System::Int32 Invoke(::System::IntPtr A13B7748C703FE2E, ::FEB15D0F6A26C506_F1E905A9A25EDD66& A6B5840567522F01)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::FEB15D0F6A26C506_F1E905A9A25EDD66&))((::PBYTE)hIl2Cpp + FEB15D0F6A26C506_E7DC0F2971095BD5_B30D3ADDBB4C624B_INVOKE_OFFSET))(this, A13B7748C703FE2E, A6B5840567522F01);
	}
};
