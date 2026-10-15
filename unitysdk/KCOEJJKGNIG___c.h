#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCOEJJKGNIG;
namespace System { class Object; }

#define KCOEJJKGNIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7FC780)
#define KCOEJJKGNIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7FC7C0)
#define KCOEJJKGNIG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7FC7D0)

inline static constexpr unsigned int KCOEJJKGNIG___c_TypeDefinitionIndex = 32685;

	class KCOEJJKGNIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x106A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCOEJJKGNIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOEJJKGNIG___C_CTOR_OFFSET))(this);
		}

		::KCOEJJKGNIG* __cctor_b__33_0()
		{
			return ((::KCOEJJKGNIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOEJJKGNIG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
