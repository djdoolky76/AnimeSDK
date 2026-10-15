#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJHIIFCIPMB;
namespace System { class Object; }

#define EJHIIFCIPMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E28AB50)
#define EJHIIFCIPMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E28AB90)
#define EJHIIFCIPMB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E28ABA0)

inline static constexpr unsigned int EJHIIFCIPMB___c_TypeDefinitionIndex = 28583;

	class EJHIIFCIPMB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CBC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJHIIFCIPMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHIIFCIPMB___C_CTOR_OFFSET))(this);
		}

		::EJHIIFCIPMB* __cctor_b__23_0()
		{
			return ((::EJHIIFCIPMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHIIFCIPMB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
