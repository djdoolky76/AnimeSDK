#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDE6790)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDDE67D0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewDetailWindow___c_TypeDefinitionIndex = 83156;

	class LimaoNewsInterviewDetailWindow___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x28DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___C_CTOR_OFFSET))(this);
		}

	};
}
