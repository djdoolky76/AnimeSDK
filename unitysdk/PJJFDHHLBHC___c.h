#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelMonsterInfo; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PJJFDHHLBHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCBB64A0)
#define PJJFDHHLBHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCBB64E0)
#define PJJFDHHLBHC___C___GETINSTANCESFROMGROUP_B__6_0_OFFSET UNITYSDK_OFFSET(0xCBB64F0)
#define PJJFDHHLBHC___C___GETINSTANCESFROMGROUP_B__6_1_OFFSET UNITYSDK_OFFSET(0xCBB6510)
#define PJJFDHHLBHC___C___GETINSTANCESFROMGROUP_B__6_2_OFFSET UNITYSDK_OFFSET(0xCBB6530)

inline static constexpr unsigned int PJJFDHHLBHC___c_TypeDefinitionIndex = 53453;

	class PJJFDHHLBHC___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::LevelPropInfo*, ::System::UInt32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::GameCore::LevelPropInfo*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72590);
		}

		static ::System::Func_2<::RPG::GameCore::LevelNPCInfo*, ::System::UInt32>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::RPG::GameCore::LevelNPCInfo*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72598);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x725A0);
		}

		static ::System::Func_2<::RPG::GameCore::LevelMonsterInfo*, ::System::UInt32>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::RPG::GameCore::LevelMonsterInfo*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x725A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJJFDHHLBHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJFDHHLBHC___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __GetInstancesFromGroup_b__6_0(::RPG::GameCore::LevelPropInfo* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + PJJFDHHLBHC___C___GETINSTANCESFROMGROUP_B__6_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetInstancesFromGroup_b__6_1(::RPG::GameCore::LevelNPCInfo* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + PJJFDHHLBHC___C___GETINSTANCESFROMGROUP_B__6_1_OFFSET))(this, a1);
		}

		::System::UInt32 __GetInstancesFromGroup_b__6_2(::RPG::GameCore::LevelMonsterInfo* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + PJJFDHHLBHC___C___GETINSTANCESFROMGROUP_B__6_2_OFFSET))(this, a1);
		}

	};
