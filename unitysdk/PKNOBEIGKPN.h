#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

#define PKNOBEIGKPN_CTOR_OFFSET UNITYSDK_OFFSET(0xC2EA320)
#define PKNOBEIGKPN_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0xC2EA330)
#define PKNOBEIGKPN_MNJOCIFNCFK_OFFSET UNITYSDK_OFFSET(0xC2EA660)
#define PKNOBEIGKPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC2EA780)

	class PKNOBEIGKPN : public ::System::Object
	{
	public:
		::RPG::Client::IAssetOperation* NHDIHIPANIG; // 0x10
		::System::Void _ctor(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + PKNOBEIGKPN_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNOBEIGKPN_KEOKEELBKHI_OFFSET))(this);
		}

		::System::Boolean MNJOCIFNCFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNOBEIGKPN_MNJOCIFNCFK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNOBEIGKPN_TOSTRING_OFFSET))(this);
		}

	};
