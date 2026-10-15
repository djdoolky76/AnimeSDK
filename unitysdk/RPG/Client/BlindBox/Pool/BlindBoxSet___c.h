#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::BlindBox::Pool { class BlindBox; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC88D7B0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC88D7F0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET___C__GET__DEBUGGERDISPLAY_B__9_0_OFFSET UNITYSDK_OFFSET(0xC88D800)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxSet___c_TypeDefinitionIndex = 74919;

	class BlindBoxSet___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::BlindBox::Pool::BlindBox*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::BlindBox::Pool::BlindBox*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.BlindBox.Pool", "<>c")->GetStaticField(0x5E0C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.BlindBox.Pool", "<>c")->GetStaticField(0x5E0C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get__DebuggerDisplay_b__9_0(::RPG::Client::BlindBox::Pool::BlindBox* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Pool::BlindBox*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET___C__GET__DEBUGGERDISPLAY_B__9_0_OFFSET))(this, a1);
		}

	};
}
