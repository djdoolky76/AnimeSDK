#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class GGELFBGMBGK;

#define NPDPHIPFNEA_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCF4410)
#define NPDPHIPFNEA_ECCPIPCGAMI_OFFSET UNITYSDK_OFFSET(0xBCECC50)

inline static constexpr unsigned int NPDPHIPFNEA_TypeDefinitionIndex = 75123;

	class NPDPHIPFNEA : public ::System::Object
	{
	public:
		static ::GGELFBGMBGK** StaticGet_LBBNEDHCGBC()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53C20);
		}

		static ::GGELFBGMBGK** StaticGet_CMACEDHHFLP()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53C28);
		}

		static ::GGELFBGMBGK** StaticGet_GMCBLOFDELB()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53C30);
		}

		static ::GGELFBGMBGK** StaticGet_BBADCBEAPKA()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53C38);
		}

		static ::GGELFBGMBGK** StaticGet_GPLFCLHIECP()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53C40);
		}

		static ::GGELFBGMBGK** StaticGet_HEACMMNNBDI()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53C48);
		}

		static ::GGELFBGMBGK** StaticGet_LGNGEDNNIDM()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53C50);
		}

		static ::GGELFBGMBGK** StaticGet_ADPGBGPPMNE()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53C58);
		}

		static ::GGELFBGMBGK** StaticGet_AMMPNOLLCIN()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53C60);
		}

		static ::GGELFBGMBGK** StaticGet_AACMGCOPAJA()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53C68);
		}

		static ::GGELFBGMBGK** StaticGet_OBFPBJPLMGC()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53C70);
		}

		static ::GGELFBGMBGK** StaticGet_MGDLBECFODO()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53C78);
		}

		static ::GGELFBGMBGK** StaticGet_CHKEFNBCNBF()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53C80);
		}

		static ::GGELFBGMBGK** StaticGet_BDGHIDAABKJ()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53C88);
		}

		static ::GGELFBGMBGK** StaticGet_OHDPKELHKPH()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53C90);
		}

		static ::GGELFBGMBGK** StaticGet_FELDBBKJCHO()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53C98);
		}

		static ::GGELFBGMBGK** StaticGet_GGHMIADFJHH()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53CA0);
		}

		static ::GGELFBGMBGK** StaticGet_LFONNGONOPP()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x53CA8);
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
