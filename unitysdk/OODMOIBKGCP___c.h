#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class OCPOIDCNJDA;
class OODMOIBKGCP;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class PingPongEnemyConfig; }
namespace RPG::GameCore { class PingPongEnemyUnitConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Transform; }

#define OODMOIBKGCP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBF71EE0)
#define OODMOIBKGCP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBF71F20)
#define OODMOIBKGCP___C__CREATEBALL_B__9_0_OFFSET UNITYSDK_OFFSET(0xBF71FC0)
#define OODMOIBKGCP___C__CREATEDROPITEM_B__10_0_OFFSET UNITYSDK_OFFSET(0xBF71FF0)
#define OODMOIBKGCP___C__CREATEENEMYBULLET_B__8_0_OFFSET UNITYSDK_OFFSET(0xBF71F90)
#define OODMOIBKGCP___C__CREATEENEMY_B__15_0_OFFSET UNITYSDK_OFFSET(0xBF72020)
#define OODMOIBKGCP___C__CREATERACKETBULLET_B__7_0_OFFSET UNITYSDK_OFFSET(0xBF71F60)
#define OODMOIBKGCP___C__CREATERACKET_B__6_0_OFFSET UNITYSDK_OFFSET(0xBF71F30)
#define OODMOIBKGCP___C___CREATEENEMYUNIT_B__21_0_OFFSET UNITYSDK_OFFSET(0xBF72060)

inline static constexpr unsigned int OODMOIBKGCP___c_TypeDefinitionIndex = 76655;

	class OODMOIBKGCP___c : public ::System::Object
	{
	public:
		static ::System::Action_4<::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*, ::System::ValueTuple_2<::RPG::GameCore::PingPongEnemyConfig*, ::RPG::GameCore::LittleGameEntityConfig*>>** StaticGet___9__15_0()
		{
			return (::System::Action_4<::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*, ::System::ValueTuple_2<::RPG::GameCore::PingPongEnemyConfig*, ::RPG::GameCore::LittleGameEntityConfig*>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63270);
		}

		static ::System::Action_3<::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*>** StaticGet___9__10_0()
		{
			return (::System::Action_3<::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63278);
		}

		static ::System::Action_3<::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*>** StaticGet___9__9_0()
		{
			return (::System::Action_3<::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63280);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63288);
		}

		static ::System::Action_3<::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*>** StaticGet___9__8_0()
		{
			return (::System::Action_3<::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63290);
		}

		static ::System::Action_4<::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*, ::RPG::GameCore::PingPongEnemyUnitConfig*>** StaticGet___9__21_0()
		{
			return (::System::Action_4<::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*, ::RPG::GameCore::PingPongEnemyUnitConfig*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63298);
		}

		static ::System::Action_3<::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*>** StaticGet___9__6_0()
		{
			return (::System::Action_3<::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x632A0);
		}

		static ::System::Action_3<::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*>** StaticGet___9__7_0()
		{
			return (::System::Action_3<::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x632A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OODMOIBKGCP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OODMOIBKGCP___C_CTOR_OFFSET))(this);
		}

		::System::Void _CreateRacket_b__6_0(::OODMOIBKGCP* a1, ::OCPOIDCNJDA* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OODMOIBKGCP___C__CREATERACKET_B__6_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CreateRacketBullet_b__7_0(::OODMOIBKGCP* a1, ::OCPOIDCNJDA* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OODMOIBKGCP___C__CREATERACKETBULLET_B__7_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CreateEnemyBullet_b__8_0(::OODMOIBKGCP* a1, ::OCPOIDCNJDA* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OODMOIBKGCP___C__CREATEENEMYBULLET_B__8_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CreateBall_b__9_0(::OODMOIBKGCP* a1, ::OCPOIDCNJDA* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OODMOIBKGCP___C__CREATEBALL_B__9_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CreateDropItem_b__10_0(::OODMOIBKGCP* a1, ::OCPOIDCNJDA* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OODMOIBKGCP___C__CREATEDROPITEM_B__10_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CreateEnemy_b__15_0(::OODMOIBKGCP* a1, ::OCPOIDCNJDA* a2, ::UnityEngine::Transform* a3, ::System::ValueTuple_2<::RPG::GameCore::PingPongEnemyConfig*, ::RPG::GameCore::LittleGameEntityConfig*> a4)
		{
			return ((::System::Void(*)(::PVOID, ::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*, ::System::ValueTuple_2<::RPG::GameCore::PingPongEnemyConfig*, ::RPG::GameCore::LittleGameEntityConfig*>))((::PBYTE)hIl2Cpp + OODMOIBKGCP___C__CREATEENEMY_B__15_0_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void __CreateEnemyUnit_b__21_0(::OODMOIBKGCP* a1, ::OCPOIDCNJDA* a2, ::UnityEngine::Transform* a3, ::RPG::GameCore::PingPongEnemyUnitConfig* a4)
		{
			return ((::System::Void(*)(::PVOID, ::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*, ::RPG::GameCore::PingPongEnemyUnitConfig*))((::PBYTE)hIl2Cpp + OODMOIBKGCP___C___CREATEENEMYUNIT_B__21_0_OFFSET))(this, a1, a2, a3, a4);
		}

	};
