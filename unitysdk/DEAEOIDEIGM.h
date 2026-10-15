#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ProjectileMoveBehavior.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BGCurveProjectileData; }
namespace RPG::GameCore { class BGCurveWithDetectProjectileData; }
namespace RPG::GameCore { class BezierProjectileData; }
namespace RPG::GameCore { class BoomerangProjectileData; }
namespace RPG::GameCore { class BouncyProjectileData; }
namespace RPG::GameCore { class ClimbableLinearWithDetectProjectileData; }
namespace RPG::GameCore { class FollowWithDetectProjectileData; }
namespace RPG::GameCore { class HalfBoomerangProjectileData; }
namespace RPG::GameCore { class HalfBoomerangWithDetectProjectileData; }
namespace RPG::GameCore { class LinearProjectileData; }
namespace RPG::GameCore { class LinearWithDetectProjectileData; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ParabolaProjectileData; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class RandomTraceProjectileData; }
namespace RPG::GameCore { class StaticProjectileData; }
namespace RPG::GameCore { class TraceWithDetectProjectileData; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEAEOIDEIGM_AGGILODIBCN_OFFSET UNITYSDK_OFFSET(0xE4F2110)
#define DEAEOIDEIGM_BPGDAALHPOI_OFFSET UNITYSDK_OFFSET(0xE4F2740)
#define DEAEOIDEIGM_CCTOR_OFFSET UNITYSDK_OFFSET(0xE4F2AA0)
#define DEAEOIDEIGM_CJOCNMJPFPC_OFFSET UNITYSDK_OFFSET(0xE4F2870)
#define DEAEOIDEIGM_DDDCNCLGGMM_OFFSET UNITYSDK_OFFSET(0xE4F1F50)
#define DEAEOIDEIGM_DEEMLJIKBJD_OFFSET UNITYSDK_OFFSET(0xE4F1FE0)
#define DEAEOIDEIGM_EAILADFKCFC_OFFSET UNITYSDK_OFFSET(0xE4F2910)
#define DEAEOIDEIGM_GKJCBCFGOII_OFFSET UNITYSDK_OFFSET(0xE4F2560)
#define DEAEOIDEIGM_HEFKIJNIPMA_OFFSET UNITYSDK_OFFSET(0xE4F2380)
#define DEAEOIDEIGM_HKMLHADOAII_OFFSET UNITYSDK_OFFSET(0xE4F27E0)
#define DEAEOIDEIGM_HLDEDMBNDLA_OFFSET UNITYSDK_OFFSET(0xE4F2600)
#define DEAEOIDEIGM_IGGNAGDGNEB_OFFSET UNITYSDK_OFFSET(0xE4F24D0)
#define DEAEOIDEIGM_IGLNKAGEDJN_OFFSET UNITYSDK_OFFSET(0xE4F21D0)
#define DEAEOIDEIGM_IIEOIAEIKHE_OFFSET UNITYSDK_OFFSET(0xE4F2070)
#define DEAEOIDEIGM_KKBCMDOOCAK_OFFSET UNITYSDK_OFFSET(0xE4F1710)
#define DEAEOIDEIGM_LFCOIBKNODK_OFFSET UNITYSDK_OFFSET(0xE4F15B0)
#define DEAEOIDEIGM_MFFCLOMLBBJ_OFFSET UNITYSDK_OFFSET(0xE4F2430)
#define DEAEOIDEIGM_PCFBCBEAEAM_OFFSET UNITYSDK_OFFSET(0xE4F26A0)
#define DEAEOIDEIGM_PLILJALBKKL_OFFSET UNITYSDK_OFFSET(0xE4F2280)

	class DEAEOIDEIGM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::GameCore::ProjectileMoveBehavior>** StaticGet_OLFLEDMFMJD()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::GameCore::ProjectileMoveBehavior>**)UnitySDK::FromName("", "DEAEOIDEIGM")->GetStaticField(0x60FE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEAEOIDEIGM_CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::ProjectileMoveBehavior LFCOIBKNODK(::RPG::GameCore::NewProjectileConfig* a1)
		{
			return ((::RPG::GameCore::ProjectileMoveBehavior(*)(::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_LFCOIBKNODK_OFFSET))(a1);
		}

		static ::RPG::GameCore::NewProjectileConfig* KKBCMDOOCAK(::RPG::GameCore::ProjectileData* a1)
		{
			return ((::RPG::GameCore::NewProjectileConfig*(*)(::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_KKBCMDOOCAK_OFFSET))(a1);
		}

		static ::System::Void DEEMLJIKBJD(::RPG::GameCore::HalfBoomerangProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::HalfBoomerangProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_DEEMLJIKBJD_OFFSET))(a1, a2);
		}

		static ::System::Void DDDCNCLGGMM(::RPG::GameCore::BoomerangProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::BoomerangProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_DDDCNCLGGMM_OFFSET))(a1, a2);
		}

		static ::System::Void IIEOIAEIKHE(::RPG::GameCore::LinearProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::LinearProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_IIEOIAEIKHE_OFFSET))(a1, a2);
		}

		static ::System::Void AGGILODIBCN(::RPG::GameCore::StaticProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::StaticProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_AGGILODIBCN_OFFSET))(a1, a2);
		}

		static ::System::Void IGLNKAGEDJN(::RPG::GameCore::BouncyProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::BouncyProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_IGLNKAGEDJN_OFFSET))(a1, a2);
		}

		static ::System::Void PLILJALBKKL(::RPG::GameCore::RandomTraceProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::RandomTraceProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_PLILJALBKKL_OFFSET))(a1, a2);
		}

		static ::System::Void HEFKIJNIPMA(::RPG::GameCore::LinearWithDetectProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::LinearWithDetectProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_HEFKIJNIPMA_OFFSET))(a1, a2);
		}

		static ::System::Void MFFCLOMLBBJ(::RPG::GameCore::ClimbableLinearWithDetectProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClimbableLinearWithDetectProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_MFFCLOMLBBJ_OFFSET))(a1, a2);
		}

		static ::System::Void IGGNAGDGNEB(::RPG::GameCore::FollowWithDetectProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::FollowWithDetectProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_IGGNAGDGNEB_OFFSET))(a1, a2);
		}

		static ::System::Void GKJCBCFGOII(::RPG::GameCore::HalfBoomerangWithDetectProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::HalfBoomerangWithDetectProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_GKJCBCFGOII_OFFSET))(a1, a2);
		}

		static ::System::Void HLDEDMBNDLA(::RPG::GameCore::ParabolaProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::ParabolaProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_HLDEDMBNDLA_OFFSET))(a1, a2);
		}

		static ::System::Void PCFBCBEAEAM(::RPG::GameCore::BezierProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::BezierProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_PCFBCBEAEAM_OFFSET))(a1, a2);
		}

		static ::System::Void BPGDAALHPOI(::RPG::GameCore::TraceWithDetectProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TraceWithDetectProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_BPGDAALHPOI_OFFSET))(a1, a2);
		}

		static ::System::Void HKMLHADOAII(::RPG::GameCore::BGCurveProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::BGCurveProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_HKMLHADOAII_OFFSET))(a1, a2);
		}

		static ::System::Void CJOCNMJPFPC(::RPG::GameCore::BGCurveWithDetectProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::BGCurveWithDetectProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_CJOCNMJPFPC_OFFSET))(a1, a2);
		}

		static ::System::Void EAILADFKCFC(::RPG::GameCore::NewProjectileConfig* a1, ::RPG::GameCore::ProjectileData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::NewProjectileConfig*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + DEAEOIDEIGM_EAILADFKCFC_OFFSET))(a1, a2);
		}

	};
