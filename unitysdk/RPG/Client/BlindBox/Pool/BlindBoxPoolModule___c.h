#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::BlindBox::Pool { class IBlindBox; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C553A60)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C553AA0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C___ONBLINDBOXOPENBOXSCRSP_B__6_2_OFFSET UNITYSDK_OFFSET(0x1C553AB0)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxPoolModule___c_TypeDefinitionIndex = 77239;

	class BlindBoxPoolModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::BlindBox::Pool::IBlindBox*, ::System::Boolean>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::RPG::Client::BlindBox::Pool::IBlindBox*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.BlindBox.Pool", "<>c")->GetStaticField(0x69400);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.BlindBox.Pool", "<>c")->GetStaticField(0x69408);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnBlindBoxOpenBoxScRsp_b__6_2(::RPG::Client::BlindBox::Pool::IBlindBox* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Pool::IBlindBox*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C___ONBLINDBOXOPENBOXSCRSP_B__6_2_OFFSET))(this, a1);
		}

	};
}
