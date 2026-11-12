#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/ForceKillMarkType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BBBFLEAFFBE;
class GLFJKDOINMH;
class MJNKFBGOEBK;
class NAMMEJAABAM;
namespace RPG::Client { class ForceKillMarkDataProvider; }
namespace RPG::Client { class MechanicThresholdHPMarkDataContainer; }
namespace RPG::Client { class NihiluxDirtyHPRatioMaskData; }
namespace RPG::Client { class StageInvasionForceKillMarkData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MMLNMMOMLPI_CEFFMAKBAGG_OFFSET UNITYSDK_OFFSET(0xC2941A0)
#define MMLNMMOMLPI_CTOR_OFFSET UNITYSDK_OFFSET(0xC294C70)
#define MMLNMMOMLPI_DMIHNLJANPG_OFFSET UNITYSDK_OFFSET(0xC293BC0)
#define MMLNMMOMLPI_FDHEMNOCOMJ_OFFSET UNITYSDK_OFFSET(0xC293B20)
#define MMLNMMOMLPI_IIILMOPLGGH_OFFSET UNITYSDK_OFFSET(0xC293C50)
#define MMLNMMOMLPI_IPKLEHABJDF_OFFSET UNITYSDK_OFFSET(0xC293AA0)
#define MMLNMMOMLPI_LNLJDDJNPPH_OFFSET UNITYSDK_OFFSET(0xC294A10)
#define MMLNMMOMLPI_NKKOKPKHCGD_OFFSET UNITYSDK_OFFSET(0xC294990)
#define MMLNMMOMLPI_ONKHABDIMME_OFFSET UNITYSDK_OFFSET(0xC2943C0)
#define MMLNMMOMLPI__ONBIND_OFFSET UNITYSDK_OFFSET(0xC293930)
#define MMLNMMOMLPI__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC2938C0)

inline static constexpr unsigned int MMLNMMOMLPI_TypeDefinitionIndex = 73655;

	class MMLNMMOMLPI : public ::FMPCODLIOLG
	{
	public:
		::MJNKFBGOEBK* GMEHKAHEKPA; // 0x60
		::GLFJKDOINMH* CNMNFOIDLBL; // 0x68
		::UnityEngine::Transform* CLAFNOAIFCF; // 0x70
		::NAMMEJAABAM* CCKCPODGIKP; // 0x78
		::System::Collections::Generic::List_1<::NAMMEJAABAM*>* ACFLJIOGAFJ; // 0x80
		::UnityEngine::Transform* OHJCABBKJHA; // 0x88
		::System::Boolean KICAHMGNMED; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLNMMOMLPI_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MMLNMMOMLPI__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLNMMOMLPI__ONBIND_OFFSET))(this);
		}

		::System::Void IPKLEHABJDF(::RPG::Client::ForceKillMarkDataProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ForceKillMarkDataProvider*))((::PBYTE)hIl2Cpp + MMLNMMOMLPI_IPKLEHABJDF_OFFSET))(this, a1);
		}

		::System::Void FDHEMNOCOMJ(::RPG::Client::ForceKillMarkDataProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ForceKillMarkDataProvider*))((::PBYTE)hIl2Cpp + MMLNMMOMLPI_FDHEMNOCOMJ_OFFSET))(this, a1);
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

		::System::Void DMIHNLJANPG(::RPG::Client::ForceKillMarkDataProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ForceKillMarkDataProvider*))((::PBYTE)hIl2Cpp + MMLNMMOMLPI_DMIHNLJANPG_OFFSET))(this, a1);
		}

		::System::Void LNLJDDJNPPH(::RPG::Client::NihiluxDirtyHPRatioMaskData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NihiluxDirtyHPRatioMaskData*))((::PBYTE)hIl2Cpp + MMLNMMOMLPI_LNLJDDJNPPH_OFFSET))(this, a1);
		}

	};
