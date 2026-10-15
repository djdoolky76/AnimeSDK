#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMGDKPACAED;
namespace System { class Object; }

#define KMGDKPACAED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86BBA0)
#define KMGDKPACAED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86BBE0)
#define KMGDKPACAED___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E86BBF0)

inline static constexpr unsigned int KMGDKPACAED___c_TypeDefinitionIndex = 27773;

	class KMGDKPACAED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMGDKPACAED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDKPACAED___C_CTOR_OFFSET))(this);
		}

		::KMGDKPACAED* __cctor_b__23_0()
		{
			return ((::KMGDKPACAED*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDKPACAED___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
