#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHOFKNCODLC;
namespace System { class Object; }

#define JHOFKNCODLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204B1B70)
#define JHOFKNCODLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204B1BB0)
#define JHOFKNCODLC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x204B1BC0)

inline static constexpr unsigned int JHOFKNCODLC___c_TypeDefinitionIndex = 28999;

	class JHOFKNCODLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHOFKNCODLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOFKNCODLC___C_CTOR_OFFSET))(this);
		}

		::JHOFKNCODLC* __cctor_b__18_0()
		{
			return ((::JHOFKNCODLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOFKNCODLC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
