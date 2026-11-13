#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKCLHMNONOD.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JNLGKNMDMKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0D3130)
#define JNLGKNMDMKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D3170)
#define JNLGKNMDMKN___C__BUILD_B__2_0_OFFSET UNITYSDK_OFFSET(0x1A0D3180)

inline static constexpr unsigned int JNLGKNMDMKN___c_TypeDefinitionIndex = 77081;

	class JNLGKNMDMKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22950);
		}

		static ::System::Func_2<::System::UInt32, ::AKCLHMNONOD>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::UInt32, ::AKCLHMNONOD>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22958);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNLGKNMDMKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLGKNMDMKN___C_CTOR_OFFSET))(this);
		}

		::AKCLHMNONOD _Build_b__2_0(::System::UInt32 a1)
		{
			return ((::AKCLHMNONOD(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNLGKNMDMKN___C__BUILD_B__2_0_OFFSET))(this, a1);
		}

	};
