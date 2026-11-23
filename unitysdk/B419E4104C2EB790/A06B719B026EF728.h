#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"

namespace System { class Object; }

#define B419E4104C2EB790_A06B719B026EF728_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define B419E4104C2EB790_A06B719B026EF728__CTOR_OFFSET UNITYSDK_OFFSET(0x2663E40)

namespace B419E4104C2EB790
{
	inline static constexpr unsigned int A06B719B026EF728_TypeDefinitionIndex = 6304;

	class A06B719B026EF728 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B419E4104C2EB790_A06B719B026EF728__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Boolean Invoke(::E12F55A5FCCCF1EC E945DEF1AA3DF943, ::E12F55A5FCCCF1EC E9060BFDD17314FE, ::E12F55A5FCCCF1EC AAD086C831DD92C6)
		{
			return ((::System::Boolean(*)(::PVOID, ::E12F55A5FCCCF1EC, ::E12F55A5FCCCF1EC, ::E12F55A5FCCCF1EC))((::PBYTE)hIl2Cpp + B419E4104C2EB790_A06B719B026EF728_INVOKE_OFFSET))(this, E945DEF1AA3DF943, E9060BFDD17314FE, AAD086C831DD92C6);
		}
	};
}
