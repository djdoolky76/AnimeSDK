#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ITEMCOMPOSEMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD382920)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD382950)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___C__INITMAP_B__5_0_OFFSET UNITYSDK_OFFSET(0xD382960)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeModule___c_TypeDefinitionIndex = 65753;

	class ItemComposeModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1AAA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1AAA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _InitMap_b__5_0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___C__INITMAP_B__5_0_OFFSET))(this, a1, a2);
		}

	};
}
