#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }

#define RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC88F050)
#define RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC88F090)
#define RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES___C__SHOWBLINDBOXPOOLDETAILPAGE_B__1_1_OFFSET UNITYSDK_OFFSET(0xC88F0A0)

namespace RPG::Client::BlindBox::Pool::Ui
{
	inline static constexpr unsigned int BlindBoxPoolPages___c_TypeDefinitionIndex = 74964;

	class BlindBoxPoolPages___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.BlindBox.Pool.Ui", "<>c")->GetStaticField(0x5E190);
		}

		static ::System::Action** StaticGet___9__1_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.BlindBox.Pool.Ui", "<>c")->GetStaticField(0x5E198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowBlindBoxPoolDetailPage_b__1_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES___C__SHOWBLINDBOXPOOLDETAILPAGE_B__1_1_OFFSET))(this, a1);
		}

	};
}
