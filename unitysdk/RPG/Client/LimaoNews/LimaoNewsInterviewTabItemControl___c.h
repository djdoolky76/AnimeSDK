#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABITEMCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF06AE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABITEMCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF06B20)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewTabItemControl___c_TypeDefinitionIndex = 83158;

	class LimaoNewsInterviewTabItemControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x2DA90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABITEMCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABITEMCONTROL___C_CTOR_OFFSET))(this);
		}

	};
}
