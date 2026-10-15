#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOCOPEELCCH;
namespace System { class Object; }

#define GOCOPEELCCH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4BF7A0)
#define GOCOPEELCCH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4BF7E0)
#define GOCOPEELCCH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4BF7F0)

inline static constexpr unsigned int GOCOPEELCCH___c_TypeDefinitionIndex = 25668;

	class GOCOPEELCCH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOCOPEELCCH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCOPEELCCH___C_CTOR_OFFSET))(this);
		}

		::GOCOPEELCCH* __cctor_b__23_0()
		{
			return ((::GOCOPEELCCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCOPEELCCH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
