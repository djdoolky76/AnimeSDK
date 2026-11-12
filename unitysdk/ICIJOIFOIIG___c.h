#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICIJOIFOIIG;
namespace System { class Object; }

#define ICIJOIFOIIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F93E060)
#define ICIJOIFOIIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F93E090)
#define ICIJOIFOIIG___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F93E0A0)

inline static constexpr unsigned int ICIJOIFOIIG___c_TypeDefinitionIndex = 34734;

	class ICIJOIFOIIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICIJOIFOIIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICIJOIFOIIG___C_CTOR_OFFSET))(this);
		}

		::ICIJOIFOIIG* __cctor_b__48_0()
		{
			return ((::ICIJOIFOIIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICIJOIFOIIG___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
