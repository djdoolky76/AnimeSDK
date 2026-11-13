#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define JAHCGOLIOMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19A4D550)
#define JAHCGOLIOMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19A4D590)
#define JAHCGOLIOMF___C___APPLYRANKSKILLPARAMSMODIFICATIONSFORBATTLEEVENTSKILL_B__71_0_OFFSET UNITYSDK_OFFSET(0x19A4D670)
#define JAHCGOLIOMF___C___APPLYSPECIALSKILLPARAMSMODIFICATIONSFORAVATARSKILL_B__68_0_OFFSET UNITYSDK_OFFSET(0x19A4D5A0)
#define JAHCGOLIOMF___C___APPLYSPECIALSKILLPARAMSMODIFICATIONSFORBATTLEEVENTSKILL_B__69_0_OFFSET UNITYSDK_OFFSET(0x19A4D5E0)
#define JAHCGOLIOMF___C___APPLYSPECIALSKILLPARAMSMODIFICATIONSFORSERVANTSKILL_B__70_0_OFFSET UNITYSDK_OFFSET(0x19A4D630)

inline static constexpr unsigned int JAHCGOLIOMF___c_TypeDefinitionIndex = 60336;

	class JAHCGOLIOMF___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>** StaticGet___9__71_0()
		{
			return (::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CC90);
		}

		static ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>** StaticGet___9__69_0()
		{
			return (::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CC98);
		}

		static ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>** StaticGet___9__70_0()
		{
			return (::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CCA0);
		}

		static ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>** StaticGet___9__68_0()
		{
			return (::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CCA8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CCB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAHCGOLIOMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHCGOLIOMF___C_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* __ApplySpecialSkillParamsModificationsForAvatarSkill_b__68_0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JAHCGOLIOMF___C___APPLYSPECIALSKILLPARAMSMODIFICATIONSFORAVATARSKILL_B__68_0_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* __ApplySpecialSkillParamsModificationsForBattleEventSkill_b__69_0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JAHCGOLIOMF___C___APPLYSPECIALSKILLPARAMSMODIFICATIONSFORBATTLEEVENTSKILL_B__69_0_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* __ApplySpecialSkillParamsModificationsForServantSkill_b__70_0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JAHCGOLIOMF___C___APPLYSPECIALSKILLPARAMSMODIFICATIONSFORSERVANTSKILL_B__70_0_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* __ApplyRankSkillParamsModificationsForBattleEventSkill_b__71_0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JAHCGOLIOMF___C___APPLYRANKSKILLPARAMSMODIFICATIONSFORBATTLEEVENTSKILL_B__71_0_OFFSET))(this, a1, a2);
		}

	};
