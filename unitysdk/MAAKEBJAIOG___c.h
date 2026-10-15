#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MAAKEBJAIOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5702B0)
#define MAAKEBJAIOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5702F0)
#define MAAKEBJAIOG___C__BINDTARGETCHIPSONLYCONSTRAINTS_B__12_0_OFFSET UNITYSDK_OFFSET(0x1C570300)

	class MAAKEBJAIOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18940);
		}

		static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::System::Int32, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18948);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAAKEBJAIOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAKEBJAIOG___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _BindTargetChipsOnlyConstraints_b__12_0(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MAAKEBJAIOG___C__BINDTARGETCHIPSONLYCONSTRAINTS_B__12_0_OFFSET))(this, a1);
		}

	};
