#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class JsonEnum; }

#define JKCCJBKPGME_CCTOR_OFFSET UNITYSDK_OFFSET(0x17B18530)

inline static constexpr unsigned int JKCCJBKPGME_TypeDefinitionIndex = 55228;

	class JKCCJBKPGME : public ::System::Object
	{
	public:
		static ::RPG::GameCore::JsonEnum** StaticGet_NLPHANKNJHB()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "JKCCJBKPGME")->GetStaticField(0x14460);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_HGLIFJGHADE()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "JKCCJBKPGME")->GetStaticField(0x14468);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_FKKCHDLIKBE()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "JKCCJBKPGME")->GetStaticField(0x14470);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_IBNGJKBPMOO()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("", "JKCCJBKPGME")->GetStaticField(0x14478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKCCJBKPGME_CCTOR_OFFSET))();
		}

	};
