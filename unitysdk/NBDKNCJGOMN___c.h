#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBDKNCJGOMN;
namespace System { class Object; }

#define NBDKNCJGOMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EACEEF0)
#define NBDKNCJGOMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EACEF20)
#define NBDKNCJGOMN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EACEF30)

inline static constexpr unsigned int NBDKNCJGOMN___c_TypeDefinitionIndex = 33927;

	class NBDKNCJGOMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CE10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBDKNCJGOMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDKNCJGOMN___C_CTOR_OFFSET))(this);
		}

		::NBDKNCJGOMN* __cctor_b__28_0()
		{
			return ((::NBDKNCJGOMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDKNCJGOMN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
