#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_AVATAREXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC6EE1C0)
#define RPG_CLIENT_AVATAREXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC6EE1F0)
#define RPG_CLIENT_AVATAREXTENSIONS___C__GETRECOMMENDTRACENODEROWDATALIST_B__184_0_OFFSET UNITYSDK_OFFSET(0xC6EE200)
#define RPG_CLIENT_AVATAREXTENSIONS___C__GETTRACETREELEVELS_B__185_1_OFFSET UNITYSDK_OFFSET(0xC6EE250)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarExtensions___c_TypeDefinitionIndex = 62572;

	class AvatarExtensions___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::AvatarSkillTreeRow*>** StaticGet___9__184_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::AvatarSkillTreeRow*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5AE10);
		}

		static ::System::Func_2<::KFBOFAILIBG, ::System::UInt32>** StaticGet___9__185_1()
		{
			return (::System::Func_2<::KFBOFAILIBG, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5AE18);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5AE20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetRecommendTraceNodeRowDataList_b__184_0(::RPG::GameCore::AvatarSkillTreeRow* a1, ::RPG::GameCore::AvatarSkillTreeRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__GETRECOMMENDTRACENODEROWDATALIST_B__184_0_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetTraceTreeLevels_b__185_1(::KFBOFAILIBG a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::KFBOFAILIBG))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__GETTRACETREELEVELS_B__185_1_OFFSET))(this, a1);
		}

	};
}
