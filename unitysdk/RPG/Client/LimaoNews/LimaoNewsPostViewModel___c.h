#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD3E15C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD3E1600)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C__SHOWSUBMITTEDPOSTWINDOW_B__74_0_OFFSET UNITYSDK_OFFSET(0xD3E1610)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostViewModel___c_TypeDefinitionIndex = 80471;

	class LimaoNewsPostViewModel___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__74_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x243A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x243A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowSubmittedPostWindow_b__74_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTVIEWMODEL___C__SHOWSUBMITTEDPOSTWINDOW_B__74_0_OFFSET))(this);
		}

	};
}
