#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Product; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PAYMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC2AD90)
#define RPG_CLIENT_PAYMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2ADC0)
#define RPG_CLIENT_PAYMODULE___C__GET_ALLHCOINPRODUCTS_B__41_0_OFFSET UNITYSDK_OFFSET(0x1DC2ADD0)
#define RPG_CLIENT_PAYMODULE___C__GET_MONTHCARDPRODUCT_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DC2AE40)

namespace RPG::Client
{
	inline static constexpr unsigned int PayModule___c_TypeDefinitionIndex = 68372;

	class PayModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::Product*, ::System::Boolean>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::RPG::Client::Product*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x28330);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x28338);
		}

		static ::System::Func_2<::RPG::Client::Product*, ::System::Boolean>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::RPG::Client::Product*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x28340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_AllHcoinProducts_b__41_0(::RPG::Client::Product* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Product*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__GET_ALLHCOINPRODUCTS_B__41_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_MonthCardProduct_b__43_0(::RPG::Client::Product* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Product*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__GET_MONTHCARDPRODUCT_B__43_0_OFFSET))(this, a1);
		}

	};
}
