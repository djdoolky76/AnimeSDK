#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFCFB40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFCFB80)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostDetailWindow___c_TypeDefinitionIndex = 83187;

	class LimaoNewsPostDetailWindow___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x36A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW___C_CTOR_OFFSET))(this);
		}

	};
}
