#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelMonsterInfo; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BELPLOHGILD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A94BA30)
#define BELPLOHGILD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A94BA70)
#define BELPLOHGILD___C___GETINSTANCESFROMGROUP_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A94BA80)
#define BELPLOHGILD___C___GETINSTANCESFROMGROUP_B__5_1_OFFSET UNITYSDK_OFFSET(0x1A94BAA0)
#define BELPLOHGILD___C___GETINSTANCESFROMGROUP_B__5_2_OFFSET UNITYSDK_OFFSET(0x1A94BAC0)

inline static constexpr unsigned int BELPLOHGILD___c_TypeDefinitionIndex = 53451;

	class BELPLOHGILD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59440);
		}

		static ::System::Func_2<::RPG::GameCore::LevelNPCInfo*, ::System::UInt32>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::RPG::GameCore::LevelNPCInfo*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59448);
		}

		static ::System::Func_2<::RPG::GameCore::LevelMonsterInfo*, ::System::UInt32>** StaticGet___9__5_2()
		{
			return (::System::Func_2<::RPG::GameCore::LevelMonsterInfo*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59450);
		}

		static ::System::Func_2<::RPG::GameCore::LevelPropInfo*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::GameCore::LevelPropInfo*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59458);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BELPLOHGILD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BELPLOHGILD___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __GetInstancesFromGroup_b__5_0(::RPG::GameCore::LevelPropInfo* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + BELPLOHGILD___C___GETINSTANCESFROMGROUP_B__5_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetInstancesFromGroup_b__5_1(::RPG::GameCore::LevelNPCInfo* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + BELPLOHGILD___C___GETINSTANCESFROMGROUP_B__5_1_OFFSET))(this, a1);
		}

		::System::UInt32 __GetInstancesFromGroup_b__5_2(::RPG::GameCore::LevelMonsterInfo* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + BELPLOHGILD___C___GETINSTANCESFROMGROUP_B__5_2_OFFSET))(this, a1);
		}

	};
