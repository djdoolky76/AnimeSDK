#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBBF470)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBBF4B0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsSponsorItemControl___c_TypeDefinitionIndex = 83181;

	class LimaoNewsSponsorItemControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x38BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMCONTROL___C_CTOR_OFFSET))(this);
		}

	};
}
