#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::DepletablePool { class DepletablePoolPrize; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD5671A0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD5671E0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT___C__GET_TAKENCOUNT_B__19_0_OFFSET UNITYSDK_OFFSET(0xD567210)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0xD5671F0)

namespace RPG::Client::DepletablePool
{
	inline static constexpr unsigned int DepletablePoolContent___c_TypeDefinitionIndex = 76975;

	class DepletablePoolContent___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::DepletablePool::DepletablePoolPrize*, ::System::UInt32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::DepletablePool::DepletablePoolPrize*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client.DepletablePool", "<>c")->GetStaticField(0x1FF10);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.DepletablePool", "<>c")->GetStaticField(0x1FF18);
		}

		static ::System::Func_2<::RPG::Client::DepletablePool::DepletablePoolPrize*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::RPG::Client::DepletablePool::DepletablePoolPrize*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.DepletablePool", "<>c")->GetStaticField(0x1FF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __ctor_b__2_0(::RPG::Client::DepletablePool::DepletablePoolPrize* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::DepletablePool::DepletablePoolPrize*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT___C___CTOR_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_TakenCount_b__19_0(::RPG::Client::DepletablePool::DepletablePoolPrize* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DepletablePool::DepletablePoolPrize*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT___C__GET_TAKENCOUNT_B__19_0_OFFSET))(this, a1);
		}

	};
}
