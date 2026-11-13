#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBNEIIGLHDH;
namespace System { class Object; }

#define FBNEIIGLHDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F89AB30)
#define FBNEIIGLHDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F89AB70)
#define FBNEIIGLHDH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F89AB80)

inline static constexpr unsigned int FBNEIIGLHDH___c_TypeDefinitionIndex = 29180;

	class FBNEIIGLHDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x420B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBNEIIGLHDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNEIIGLHDH___C_CTOR_OFFSET))(this);
		}

		::FBNEIIGLHDH* __cctor_b__23_0()
		{
			return ((::FBNEIIGLHDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNEIIGLHDH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
