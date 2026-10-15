#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD3D3B50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD3D3B90)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostInfoRowControl___c_TypeDefinitionIndex = 80394;

	class LimaoNewsPostInfoRowControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x1FAF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL___C_CTOR_OFFSET))(this);
		}

	};
}
