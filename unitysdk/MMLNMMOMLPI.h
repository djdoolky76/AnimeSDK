#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/ForceKillMarkType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BBBFLEAFFBE;
class GLFJKDOINMH;
class NAMMEJAABAM;
namespace RPG::Client { class ForceKillMarkDataProvider; }
namespace RPG::Client { class MechanicThresholdHPMarkDataContainer; }
namespace RPG::Client { class StageInvasionForceKillMarkData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MMLNMMOMLPI_CEFFMAKBAGG_OFFSET UNITYSDK_OFFSET(0xB9D7CF0)
#define MMLNMMOMLPI_CTOR_OFFSET UNITYSDK_OFFSET(0xB9D8550)
#define MMLNMMOMLPI_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB9D7600)
#define MMLNMMOMLPI_IIILMOPLGGH_OFFSET UNITYSDK_OFFSET(0xB9D77A0)
#define MMLNMMOMLPI_IPKLEHABJDF_OFFSET UNITYSDK_OFFSET(0xB9D7700)
#define MMLNMMOMLPI_NKKOKPKHCGD_OFFSET UNITYSDK_OFFSET(0xB9D84D0)
#define MMLNMMOMLPI_ONKHABDIMME_OFFSET UNITYSDK_OFFSET(0xB9D7F10)
#define MMLNMMOMLPI__ONBIND_OFFSET UNITYSDK_OFFSET(0xB9D7670)

	class MMLNMMOMLPI : public ::FMPCODLIOLG
	{
	public:
		::GLFJKDOINMH* CNMNFOIDLBL; // 0x60
		::System::Collections::Generic::List_1<::NAMMEJAABAM*>* ACFLJIOGAFJ; // 0x68
		::UnityEngine::Transform* OHJCABBKJHA; // 0x70
		::NAMMEJAABAM* CCKCPODGIKP; // 0x78
		::System::Boolean KICAHMGNMED; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLNMMOMLPI_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MMLNMMOMLPI_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLNMMOMLPI__ONBIND_OFFSET))(this);
		}

		::System::Void IPKLEHABJDF(::RPG::Client::ForceKillMarkDataProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ForceKillMarkDataProvider*))((::PBYTE)hIl2Cpp + MMLNMMOMLPI_IPKLEHABJDF_OFFSET))(this, a1);
		}

		::System::Void IIILMOPLGGH(::BBBFLEAFFBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBBFLEAFFBE*))((::PBYTE)hIl2Cpp + MMLNMMOMLPI_IIILMOPLGGH_OFFSET))(this, a1);
		}

		::System::String* NKKOKPKHCGD(::RPG::GameCore::ForceKillMarkType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ForceKillMarkType))((::PBYTE)hIl2Cpp + MMLNMMOMLPI_NKKOKPKHCGD_OFFSET))(this, a1);
		}

		::System::Void CEFFMAKBAGG(::RPG::Client::StageInvasionForceKillMarkData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StageInvasionForceKillMarkData*))((::PBYTE)hIl2Cpp + MMLNMMOMLPI_CEFFMAKBAGG_OFFSET))(this, a1);
		}

		::System::Void ONKHABDIMME(::RPG::Client::MechanicThresholdHPMarkDataContainer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechanicThresholdHPMarkDataContainer*))((::PBYTE)hIl2Cpp + MMLNMMOMLPI_ONKHABDIMME_OFFSET))(this, a1);
		}

	};
