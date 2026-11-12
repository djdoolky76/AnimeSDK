#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDE150D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDE15110)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostSubmitWindow___c_TypeDefinitionIndex = 83193;

	class LimaoNewsPostSubmitWindow___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x2FDC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW___C_CTOR_OFFSET))(this);
		}

	};
}
