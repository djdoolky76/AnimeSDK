#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDE328E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDE32920)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C__SHOWSUBMITTEDPOSTWINDOW_B__76_0_OFFSET UNITYSDK_OFFSET(0xDE32930)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostViewModel___c_TypeDefinitionIndex = 83251;

	class LimaoNewsPostViewModel___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__76_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x30F90);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x30F98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowSubmittedPostWindow_b__76_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C__SHOWSUBMITTEDPOSTWINDOW_B__76_0_OFFSET))(this);
		}

	};
}
