#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimView.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/RPG/GCFreeClosure/ActionClosure_1.h"
class EMJIDLCDFMI;
class GIPAFBHPHHE;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client::Mono { class FiveDimBodyCollisionSensor; }
namespace RPG::Client::Mono { class FiveDimBodyCollisionSensorWithStay; }
namespace RPG::Client::Mono { class FiveDimBodyTriggerSensor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Rigidbody; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_AFACJKFOHND_OFFSET UNITYSDK_OFFSET(0xD442230)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_AHMGMGAMBMO_OFFSET UNITYSDK_OFFSET(0xD441D60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_ANFCEOPMCMB_OFFSET UNITYSDK_OFFSET(0xD442070)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_CILFPIOIIEH_OFFSET UNITYSDK_OFFSET(0xD442110)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_CILJAHIMANC_OFFSET UNITYSDK_OFFSET(0xD4323D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD4341A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_GKKEFPEAHPI_OFFSET UNITYSDK_OFFSET(0xD435BD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_IEJIMFCHJHK_OFFSET UNITYSDK_OFFSET(0xD4330B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_ILFALDOBANJ_OFFSET UNITYSDK_OFFSET(0xD432930)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD432330)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_KNBOMLJBMNP_OFFSET UNITYSDK_OFFSET(0xD442020)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_LMFEMEAONKG_OFFSET UNITYSDK_OFFSET(0xD442540)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_LOEAOMGAHLA_OFFSET UNITYSDK_OFFSET(0xD442160)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_MOPACJNADOB_OFFSET UNITYSDK_OFFSET(0xD435360)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_PFKCNLJHLNH_OFFSET UNITYSDK_OFFSET(0xD441FD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_POJDHPCCBFH_OFFSET UNITYSDK_OFFSET(0xD4420C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_PPHIAKJJGPE_OFFSET UNITYSDK_OFFSET(0xD433600)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD433B40)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimPropPhysicsProxyView_TypeDefinitionIndex = 77205;

	class FiveDimPropPhysicsProxyView : public ::RPG::Client::LittleGame::FiveDim::FiveDimView
	{
	public:
		::UnityEngine::Rigidbody* NNGNKLOBGIF; // 0x208
		::RPG::Client::Mono::FiveDimBodyCollisionSensor* HLGAOHEMJAI; // 0x210
		::RPG::Client::Mono::FiveDimBodyTriggerSensor* ANBNCGONHPK; // 0x218
		::RPG::Client::Mono::FiveDimBodyCollisionSensorWithStay* JDNAKAALPMD; // 0x220
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::GIPAFBHPHHE*, ::UnityEngine::Collider*>>* IHBHHELPJBL; // 0x228
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void CILJAHIMANC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_CILJAHIMANC_OFFSET))(this);
		}

		::System::Void PPHIAKJJGPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_PPHIAKJJGPE_OFFSET))(this);
		}

		::System::Void MOPACJNADOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_MOPACJNADOB_OFFSET))(this);
		}

		::System::Void GKKEFPEAHPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_GKKEFPEAHPI_OFFSET))(this);
		}

		::System::Void ILFALDOBANJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_ILFALDOBANJ_OFFSET))(this, a1);
		}

		::System::Void IEJIMFCHJHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_IEJIMFCHJHK_OFFSET))(this);
		}

		::System::Void PFKCNLJHLNH(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_PFKCNLJHLNH_OFFSET))(this, a1);
		}

		::System::Void KNBOMLJBMNP(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_KNBOMLJBMNP_OFFSET))(this, a1);
		}

		::System::Void ANFCEOPMCMB(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_ANFCEOPMCMB_OFFSET))(this, a1);
		}

		::System::Void POJDHPCCBFH(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_POJDHPCCBFH_OFFSET))(this, a1);
		}

		::System::Void CILFPIOIIEH(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_CILFPIOIIEH_OFFSET))(this, a1);
		}

		::System::Void LOEAOMGAHLA(::UnityEngine::Collider* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_LOEAOMGAHLA_OFFSET))(this, a1, a2);
		}

		::System::Void AFACJKFOHND(::UnityEngine::Collider* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_AFACJKFOHND_OFFSET))(this, a1, a2);
		}

		::System::Void AHMGMGAMBMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_AHMGMGAMBMO_OFFSET))(this);
		}

		::RPG::GCFreeClosure::ActionClosure_1<::System::Boolean> LMFEMEAONKG(::UnityEngine::Collider* a1)
		{
			return ((::RPG::GCFreeClosure::ActionClosure_1<::System::Boolean>(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW_LMFEMEAONKG_OFFSET))(this, a1);
		}

	};
}
