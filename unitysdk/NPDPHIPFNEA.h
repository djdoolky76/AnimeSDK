#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class GGELFBGMBGK;

#define NPDPHIPFNEA_CCTOR_OFFSET UNITYSDK_OFFSET(0xC5EA870)
#define NPDPHIPFNEA_ECCPIPCGAMI_OFFSET UNITYSDK_OFFSET(0xC5E0640)

inline static constexpr unsigned int NPDPHIPFNEA_TypeDefinitionIndex = 77451;

	class NPDPHIPFNEA : public ::System::Object
	{
	public:
		static ::GGELFBGMBGK** StaticGet_AMMPNOLLCIN()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A3F0);
		}

		static ::GGELFBGMBGK** StaticGet_GPLFCLHIECP()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A3F8);
		}

		static ::GGELFBGMBGK** StaticGet_OHDPKELHKPH()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A400);
		}

		static ::GGELFBGMBGK** StaticGet_HEACMMNNBDI()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A408);
		}

		static ::GGELFBGMBGK** StaticGet_GGHMIADFJHH()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A410);
		}

		static ::GGELFBGMBGK** StaticGet_BBADCBEAPKA()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A418);
		}

		static ::GGELFBGMBGK** StaticGet_CHKEFNBCNBF()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A420);
		}

		static ::GGELFBGMBGK** StaticGet_LBBNEDHCGBC()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A428);
		}

		static ::GGELFBGMBGK** StaticGet_LFONNGONOPP()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A430);
		}

		static ::GGELFBGMBGK** StaticGet_FELDBBKJCHO()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A438);
		}

		static ::GGELFBGMBGK** StaticGet_ADPGBGPPMNE()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A440);
		}

		static ::GGELFBGMBGK** StaticGet_MGDLBECFODO()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A448);
		}

		static ::GGELFBGMBGK** StaticGet_BDGHIDAABKJ()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A450);
		}

		static ::GGELFBGMBGK** StaticGet_CMACEDHHFLP()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A458);
		}

		static ::GGELFBGMBGK** StaticGet_OBFPBJPLMGC()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A460);
		}

		static ::GGELFBGMBGK** StaticGet_LGNGEDNNIDM()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A468);
		}

		static ::GGELFBGMBGK** StaticGet_GMCBLOFDELB()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A470);
		}

		static ::GGELFBGMBGK** StaticGet_AACMGCOPAJA()
		{
			return (::GGELFBGMBGK**)UnitySDK::FromName("", "NPDPHIPFNEA")->GetStaticField(0x5A478);
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
