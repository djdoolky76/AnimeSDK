#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EMJIDLCDFMI;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class LittleGameLevelCurveInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_LITTLEGAME_MONOCURVE_BEPPEACKGBD_OFFSET UNITYSDK_OFFSET(0xD4737E0)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xD474010)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD473870)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_GETDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0xD473960)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_GETENTITY_OFFSET UNITYSDK_OFFSET(0xD473570)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_GETLENGTH_OFFSET UNITYSDK_OFFSET(0xD473900)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_GFMPFDFLMCD_1_OFFSET UNITYSDK_OFFSET(0xD473B60)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_GFMPFDFLMCD_OFFSET UNITYSDK_OFFSET(0xD473620)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD4735B0)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_JFMDNHBKLNP_OFFSET UNITYSDK_OFFSET(0xD473FD0)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_NCNDOANEEOM_OFFSET UNITYSDK_OFFSET(0xD473F80)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_RECALCULATE_OFFSET UNITYSDK_OFFSET(0xD473A60)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_RELEASE_OFFSET UNITYSDK_OFFSET(0xD473710)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MonoCurve_TypeDefinitionIndex = 76511;

	class MonoCurve : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* PNOHBBMHGLB; // 0x20
		::BansheeGz::BGSpline::Components::BGCcMath* GCDHOEKJBLI; // 0x28
		::Entitas::IEntity* KAKEIDJDNHJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_CTOR_OFFSET))(this);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_GETENTITY_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_RELEASE_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_EVALUATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_GETLENGTH_OFFSET))(this);
		}

		::System::Single GetDistanceRatio(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_GETDISTANCERATIO_OFFSET))(this, a1);
		}

		::System::Void Recalculate(::KLNKLOMDIIC a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::KLNKLOMDIIC, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_RECALCULATE_OFFSET))(this, a1, a2);
		}

		::System::Void GFMPFDFLMCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_GFMPFDFLMCD_OFFSET))(this);
		}

		::System::Void BEPPEACKGBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_BEPPEACKGBD_OFFSET))(this);
		}

		::System::Void GFMPFDFLMCD_1(::RPG::GameCore::LittleGameLevelCurveInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelCurveInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_GFMPFDFLMCD_1_OFFSET))(this, a1);
		}

		::System::Void NCNDOANEEOM(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_NCNDOANEEOM_OFFSET))(this, a1);
		}

		::System::Void JFMDNHBKLNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_JFMDNHBKLNP_OFFSET))(this);
		}

	};
}
