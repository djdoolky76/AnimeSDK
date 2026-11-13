#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCIOMLIEACB;
namespace System { class Object; }

#define MCIOMLIEACB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD423B0)
#define MCIOMLIEACB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD423F0)
#define MCIOMLIEACB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD42400)

inline static constexpr unsigned int MCIOMLIEACB___c_TypeDefinitionIndex = 32886;

	class MCIOMLIEACB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCIOMLIEACB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIOMLIEACB___C_CTOR_OFFSET))(this);
		}

		::MCIOMLIEACB* __cctor_b__28_0()
		{
			return ((::MCIOMLIEACB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIOMLIEACB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
