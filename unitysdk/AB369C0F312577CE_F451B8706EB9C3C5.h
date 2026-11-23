#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define AB369C0F312577CE_F451B8706EB9C3C5_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define AB369C0F312577CE_F451B8706EB9C3C5__CTOR_OFFSET UNITYSDK_OFFSET(0x2D0FC20)

inline static constexpr unsigned int AB369C0F312577CE_F451B8706EB9C3C5_TypeDefinitionIndex = 13050;

class AB369C0F312577CE_F451B8706EB9C3C5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AB369C0F312577CE_F451B8706EB9C3C5__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32& A288CB28FC2A6DA3, ::System::IntPtr F220A2D27F7C6B6C, ::System::Int32& F2E014F34A4A1D04)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + AB369C0F312577CE_F451B8706EB9C3C5_INVOKE_OFFSET))(this, A288CB28FC2A6DA3, F220A2D27F7C6B6C, F2E014F34A4A1D04);
	}
};
