#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class GGELFBGMBGK;

#define NPDPHIPFNEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x19CF6090)
#define NPDPHIPFNEA_ECCPIPCGAMI_OFFSET UNITYSDK_OFFSET(0x19CEBD90)

inline static constexpr unsigned int NPDPHIPFNEA_TypeDefinitionIndex = 77450;

	class NPDPHIPFNEA : public ::System::Object
	{
	public:
		static ::GGELFBGMBGK** StaticGet_GPLFCLHIECP()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E120);
		}

		static ::GGELFBGMBGK** StaticGet_MGDLBECFODO()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E128);
		}

		static ::GGELFBGMBGK** StaticGet_OBFPBJPLMGC()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E130);
		}

		static ::GGELFBGMBGK** StaticGet_ADPGBGPPMNE()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E138);
		}

		static ::GGELFBGMBGK** StaticGet_BBADCBEAPKA()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E140);
		}

		static ::GGELFBGMBGK** StaticGet_LGNGEDNNIDM()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E148);
		}

		static ::GGELFBGMBGK** StaticGet_CHKEFNBCNBF()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E150);
		}

		static ::GGELFBGMBGK** StaticGet_CMACEDHHFLP()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E158);
		}

		static ::GGELFBGMBGK** StaticGet_FELDBBKJCHO()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E160);
		}

		static ::GGELFBGMBGK** StaticGet_AACMGCOPAJA()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E168);
		}

		static ::GGELFBGMBGK** StaticGet_BDGHIDAABKJ()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E170);
		}

		static ::GGELFBGMBGK** StaticGet_OHDPKELHKPH()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E178);
		}

		static ::GGELFBGMBGK** StaticGet_LBBNEDHCGBC()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E180);
		}

		static ::GGELFBGMBGK** StaticGet_AMMPNOLLCIN()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E188);
		}

		static ::GGELFBGMBGK** StaticGet_GGHMIADFJHH()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E190);
		}

		static ::GGELFBGMBGK** StaticGet_HEACMMNNBDI()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E198);
		}

		static ::GGELFBGMBGK** StaticGet_GMCBLOFDELB()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E1A0);
		}

		static ::GGELFBGMBGK** StaticGet_LFONNGONOPP()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5E1A8);
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
