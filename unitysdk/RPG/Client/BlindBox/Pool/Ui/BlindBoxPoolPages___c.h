#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC887AB0)
#define RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC887AF0)
#define RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXPOOLPAGES___C__SHOWBLINDBOXPOOLDETAILPAGE_B__1_1_OFFSET UNITYSDK_OFFSET(0xC887B00)

namespace RPG::Client::BlindBox::Pool::Ui
{
	inline static constexpr unsigned int BlindBoxPoolPages___c_TypeDefinitionIndex = 74963;

	class BlindBoxPoolPages___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__1_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.BlindBox.Pool.Ui", "<>c")->GetStaticField(0x63BD0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.BlindBox.Pool.Ui", "<>c")->GetStaticField(0x63BD8);
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
