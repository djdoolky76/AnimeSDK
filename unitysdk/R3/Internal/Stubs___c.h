#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/R3/Result.h"
namespace System { class Object; }

#define R3_INTERNAL_STUBS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3F5220)
#define R3_INTERNAL_STUBS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F5260)
#define R3_INTERNAL_STUBS___C___CCTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x1C3F5270)

namespace R3::Internal
{
	inline static constexpr unsigned int Stubs___c_TypeDefinitionIndex = 35976;

	class Stubs___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("R3.Internal", "<>c")->GetStaticField(0xA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_INTERNAL_STUBS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_INTERNAL_STUBS___C_CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__1_0(::R3::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::Result))((::PBYTE)hIl2Cpp + R3_INTERNAL_STUBS___C___CCTOR_B__1_0_OFFSET))(this, a1);
		}

	};
}
