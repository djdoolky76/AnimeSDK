#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraDuelShopViewEffectBase; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PDDKPMPNFPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC010CD0)
#define PDDKPMPNFPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC010D10)
#define PDDKPMPNFPG___C__TRYCREATEWITHEFFECT_B__2_0_OFFSET UNITYSDK_OFFSET(0xC010D20)
#define PDDKPMPNFPG___C___TRYCREATEEFFECT_B__6_1_OFFSET UNITYSDK_OFFSET(0xC010D30)

	class PDDKPMPNFPG___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65520);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65528);
		}

		static ::System::Func_2<::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*, ::System::Boolean>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDDKPMPNFPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDKPMPNFPG___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _TryCreateWithEffect_b__2_0(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDDKPMPNFPG___C__TRYCREATEWITHEFFECT_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean __TryCreateEffect_b__6_1(::RPG::Client::Prop::ChimeraDuelShopViewEffectBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*))((::PBYTE)hIl2Cpp + PDDKPMPNFPG___C___TRYCREATEEFFECT_B__6_1_OFFSET))(this, a1);
		}

	};
