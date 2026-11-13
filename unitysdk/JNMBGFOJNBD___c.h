#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNMBGFOJNBD;
namespace System { class Object; }

#define JNMBGFOJNBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20002B10)
#define JNMBGFOJNBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20002B50)
#define JNMBGFOJNBD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20002B60)

inline static constexpr unsigned int JNMBGFOJNBD___c_TypeDefinitionIndex = 30680;

	class JNMBGFOJNBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x67640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNMBGFOJNBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMBGFOJNBD___C_CTOR_OFFSET))(this);
		}

		::JNMBGFOJNBD* __cctor_b__28_0()
		{
			return ((::JNMBGFOJNBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMBGFOJNBD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
