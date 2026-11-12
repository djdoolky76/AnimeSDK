#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

#define EIFHKEAKKBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x16400410)

inline static constexpr unsigned int EIFHKEAKKBA_TypeDefinitionIndex = 60323;

	class EIFHKEAKKBA : public ::System::Object
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_KPPLNGEDLOP()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EIFHKEAKKBA")->GetStaticField(0x56B0);
		}

		static ::RPG::GameCore::StringHash* StaticGet_EGGKMEHHAEH()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EIFHKEAKKBA")->GetStaticField(0x56B4);
		}

		static ::RPG::GameCore::StringHash* StaticGet_PLCCLDHJHPJ()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EIFHKEAKKBA")->GetStaticField(0x56B8);
		}

		static ::RPG::GameCore::StringHash* StaticGet_DGPDHFPICAF()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EIFHKEAKKBA")->GetStaticField(0x56BC);
		}

		static ::RPG::GameCore::StringHash* StaticGet_KOIDNCGGBJL()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EIFHKEAKKBA")->GetStaticField(0x56C0);
		}

		static ::RPG::GameCore::StringHash* StaticGet_BOOMKPKGBME()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EIFHKEAKKBA")->GetStaticField(0x56C4);
		}

		static ::RPG::GameCore::StringHash* StaticGet_OFNCOGMODLM()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EIFHKEAKKBA")->GetStaticField(0x56C8);
		}

		static ::RPG::GameCore::StringHash* StaticGet_NIKJFHGIKAK()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EIFHKEAKKBA")->GetStaticField(0x56CC);
		}

		static ::RPG::GameCore::StringHash* StaticGet_DPLLEEOPMDI()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EIFHKEAKKBA")->GetStaticField(0x56D0);
		}

		static ::RPG::GameCore::StringHash* StaticGet_KFCEBLGCKCF()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EIFHKEAKKBA")->GetStaticField(0x56D4);
		}

		static ::RPG::GameCore::StringHash* StaticGet_PICEKONJFEA()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EIFHKEAKKBA")->GetStaticField(0x56D8);
		}

		static ::RPG::GameCore::StringHash* StaticGet_CKBMBAEIFPN()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "EIFHKEAKKBA")->GetStaticField(0x56DC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIFHKEAKKBA_CCTOR_OFFSET))();
		}

	};
