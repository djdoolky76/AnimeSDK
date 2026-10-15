#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNHKFNPECCB;
namespace System { class Object; }

#define JNHKFNPECCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E76A650)
#define JNHKFNPECCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E76A690)
#define JNHKFNPECCB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E76A6A0)

inline static constexpr unsigned int JNHKFNPECCB___c_TypeDefinitionIndex = 30637;

	class JNHKFNPECCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x682E0);
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
