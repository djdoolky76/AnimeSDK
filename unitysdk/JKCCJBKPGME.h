#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class JsonEnum; }

#define JKCCJBKPGME_CCTOR_OFFSET UNITYSDK_OFFSET(0xB212AD0)

	class JKCCJBKPGME : public ::System::Object
	{
	public:
		static ::RPG::GameCore::JsonEnum** StaticGet_IBNGJKBPMOO()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "JKCCJBKPGME")->GetStaticField(0x166A0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_FKKCHDLIKBE()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "JKCCJBKPGME")->GetStaticField(0x166A8);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_NLPHANKNJHB()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "JKCCJBKPGME")->GetStaticField(0x166B0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_HGLIFJGHADE()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "JKCCJBKPGME")->GetStaticField(0x166B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKCCJBKPGME_CCTOR_OFFSET))();
		}

	};
