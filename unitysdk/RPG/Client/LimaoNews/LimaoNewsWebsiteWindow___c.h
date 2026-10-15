#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD3E7160)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD3E71A0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWebsiteWindow___c_TypeDefinitionIndex = 80405;

	class LimaoNewsWebsiteWindow___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x20B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW___C_CTOR_OFFSET))(this);
		}

	};
}
