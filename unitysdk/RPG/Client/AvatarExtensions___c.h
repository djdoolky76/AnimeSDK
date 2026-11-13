#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_AVATAREXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4C4660)
#define RPG_CLIENT_AVATAREXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C4690)
#define RPG_CLIENT_AVATAREXTENSIONS___C__GETRECOMMENDTRACENODEROWDATALIST_B__198_0_OFFSET UNITYSDK_OFFSET(0x1A4C46A0)
#define RPG_CLIENT_AVATAREXTENSIONS___C__GETTRACETREELEVELS_B__199_1_OFFSET UNITYSDK_OFFSET(0x1A4C46E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarExtensions___c_TypeDefinitionIndex = 63991;

	class AvatarExtensions___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::AvatarSkillTreeRow*>** StaticGet___9__198_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::AvatarSkillTreeRow*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5DA30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5DA38);
		}

		static ::System::Func_2<::KFBOFAILIBG, ::System::UInt32>** StaticGet___9__199_1()
		{
			return (::System::Func_2<::KFBOFAILIBG, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5DA40);
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
