#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define JAHCGOLIOMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1653DBA0)
#define JAHCGOLIOMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1653DBE0)
#define JAHCGOLIOMF___C___APPLYCYRENESKILLPARAMSMODIFICATIONSFORAVATARSKILL_B__57_0_OFFSET UNITYSDK_OFFSET(0x1653DBF0)
#define JAHCGOLIOMF___C___APPLYCYRENESKILLPARAMSMODIFICATIONSFORBATTLEEVENTSKILL_B__58_0_OFFSET UNITYSDK_OFFSET(0x1653DC30)
#define JAHCGOLIOMF___C___APPLYCYRENESKILLPARAMSMODIFICATIONSFORSERVANTSKILL_B__59_0_OFFSET UNITYSDK_OFFSET(0x1653DC80)
#define JAHCGOLIOMF___C___APPLYRANKSKILLPARAMSMODIFICATIONSFORBATTLEEVENTSKILL_B__60_0_OFFSET UNITYSDK_OFFSET(0x1653DCC0)

inline static constexpr unsigned int JAHCGOLIOMF___c_TypeDefinitionIndex = 59061;

	class JAHCGOLIOMF___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>** StaticGet___9__57_0()
		{
			return (::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A6D0);
		}

		static ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>** StaticGet___9__58_0()
		{
			return (::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A6D8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A6E0);
		}

		static ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>** StaticGet___9__60_0()
		{
			return (::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A6E8);
		}

		static ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>** StaticGet___9__59_0()
		{
			return (::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A6F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAHCGOLIOMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHCGOLIOMF___C_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* __ApplyCyreneSkillParamsModificationsForAvatarSkill_b__57_0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JAHCGOLIOMF___C___APPLYCYRENESKILLPARAMSMODIFICATIONSFORAVATARSKILL_B__57_0_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* __ApplyCyreneSkillParamsModificationsForBattleEventSkill_b__58_0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JAHCGOLIOMF___C___APPLYCYRENESKILLPARAMSMODIFICATIONSFORBATTLEEVENTSKILL_B__58_0_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* __ApplyCyreneSkillParamsModificationsForServantSkill_b__59_0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JAHCGOLIOMF___C___APPLYCYRENESKILLPARAMSMODIFICATIONSFORSERVANTSKILL_B__59_0_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* __ApplyRankSkillParamsModificationsForBattleEventSkill_b__60_0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JAHCGOLIOMF___C___APPLYRANKSKILLPARAMSMODIFICATIONSFORBATTLEEVENTSKILL_B__60_0_OFFSET))(this, a1, a2);
		}

	};
