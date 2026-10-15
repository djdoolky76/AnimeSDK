#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class MonsterData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC52D4F0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC52D530)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA___C__GETMONSTERDATA_B__1_0_OFFSET UNITYSDK_OFFSET(0xC52D540)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA___C__GETPINNEDAVATARS_B__5_0_OFFSET UNITYSDK_OFFSET(0xC52D590)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendLevelData___c_TypeDefinitionIndex = 61558;

	class ActivityLocalLegendLevelData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2C140);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2C148);
		}

		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2C150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMonsterData_b__1_0(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA___C__GETMONSTERDATA_B__1_0_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetPinnedAvatars_b__5_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA___C__GETPINNEDAVATARS_B__5_0_OFFSET))(this, a1);
		}

	};
}
