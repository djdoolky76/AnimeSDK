#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_AVATAREXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD04C9B0)
#define RPG_CLIENT_AVATAREXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD04C9E0)
#define RPG_CLIENT_AVATAREXTENSIONS___C__GETRECOMMENDTRACENODEROWDATALIST_B__198_0_OFFSET UNITYSDK_OFFSET(0xD04C9F0)
#define RPG_CLIENT_AVATAREXTENSIONS___C__GETTRACETREELEVELS_B__199_1_OFFSET UNITYSDK_OFFSET(0xD04CA30)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarExtensions___c_TypeDefinitionIndex = 63991;

	class AvatarExtensions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x572F0);
		}

		static ::System::Func_2<::KFBOFAILIBG, ::System::UInt32>** StaticGet___9__199_1()
		{
			return (::System::Func_2<::KFBOFAILIBG, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x572F8);
		}

		static ::System::Comparison_1<::RPG::GameCore::AvatarSkillTreeRow*>** StaticGet___9__198_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::AvatarSkillTreeRow*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetRecommendTraceNodeRowDataList_b__198_0(::RPG::GameCore::AvatarSkillTreeRow* a1, ::RPG::GameCore::AvatarSkillTreeRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__GETRECOMMENDTRACENODEROWDATALIST_B__198_0_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetTraceTreeLevels_b__199_1(::KFBOFAILIBG a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::KFBOFAILIBG))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__GETTRACETREELEVELS_B__199_1_OFFSET))(this, a1);
		}

	};
}
