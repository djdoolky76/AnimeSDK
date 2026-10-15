#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class GGELFBGMBGK;

#define NPDPHIPFNEA_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCFB510)
#define NPDPHIPFNEA_ECCPIPCGAMI_OFFSET UNITYSDK_OFFSET(0xBCF3E30)

	class NPDPHIPFNEA : public ::System::Object
	{
	public:
		static ::GGELFBGMBGK** StaticGet_GPLFCLHIECP()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x58840);
		}

		static ::GGELFBGMBGK** StaticGet_LGNGEDNNIDM()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x58848);
		}

		static ::GGELFBGMBGK** StaticGet_ADPGBGPPMNE()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x58850);
		}

		static ::GGELFBGMBGK** StaticGet_HEACMMNNBDI()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x58858);
		}

		static ::GGELFBGMBGK** StaticGet_BDGHIDAABKJ()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x58860);
		}

		static ::GGELFBGMBGK** StaticGet_MGDLBECFODO()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x58868);
		}

		static ::GGELFBGMBGK** StaticGet_GGHMIADFJHH()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x58870);
		}

		static ::GGELFBGMBGK** StaticGet_AMMPNOLLCIN()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x58878);
		}

		static ::GGELFBGMBGK** StaticGet_CMACEDHHFLP()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x58880);
		}

		static ::GGELFBGMBGK** StaticGet_LFONNGONOPP()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x58888);
		}

		static ::GGELFBGMBGK** StaticGet_CHKEFNBCNBF()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x58890);
		}

		static ::GGELFBGMBGK** StaticGet_LBBNEDHCGBC()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x58898);
		}

		static ::GGELFBGMBGK** StaticGet_OBFPBJPLMGC()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x588A0);
		}

		static ::GGELFBGMBGK** StaticGet_FELDBBKJCHO()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x588A8);
		}

		static ::GGELFBGMBGK** StaticGet_BBADCBEAPKA()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x588B0);
		}

		static ::GGELFBGMBGK** StaticGet_AACMGCOPAJA()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x588B8);
		}

		static ::GGELFBGMBGK** StaticGet_OHDPKELHKPH()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x588C0);
		}

		static ::GGELFBGMBGK** StaticGet_GMCBLOFDELB()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x588C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPDPHIPFNEA_CCTOR_OFFSET))();
		}

		static ::GGELFBGMBGK* ECCPIPCGAMI(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::GGELFBGMBGK*(*)(::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + NPDPHIPFNEA_ECCPIPCGAMI_OFFSET))(a1);
		}

	};
