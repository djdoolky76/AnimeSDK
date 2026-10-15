#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNHKFNPECCB;
namespace System { class Object; }

#define JNHKFNPECCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E797C70)
#define JNHKFNPECCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E797CB0)
#define JNHKFNPECCB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E797CC0)

inline static constexpr unsigned int JNHKFNPECCB___c_TypeDefinitionIndex = 30637;

	class JNHKFNPECCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNHKFNPECCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHKFNPECCB___C_CTOR_OFFSET))(this);
		}

		::JNHKFNPECCB* __cctor_b__23_0()
		{
			return ((::JNHKFNPECCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHKFNPECCB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
