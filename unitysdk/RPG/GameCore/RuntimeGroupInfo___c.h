#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelGroupRandomInitControl; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_GAMECORE_RUNTIMEGROUPINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE746520)
#define RPG_GAMECORE_RUNTIMEGROUPINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE746550)
#define RPG_GAMECORE_RUNTIMEGROUPINFO___C__TRYGETLITTLEGAMEINFO_B__28_0_OFFSET UNITYSDK_OFFSET(0xE746580)
#define RPG_GAMECORE_RUNTIMEGROUPINFO___C___DORANDOMINIT_B__0_0_OFFSET UNITYSDK_OFFSET(0xE746560)

namespace RPG::GameCore
{
	class RuntimeGroupInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6CB10);
		}

		static ::System::Func_3<::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_3<::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*, ::System::Boolean>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6CB18);
		}

		static ::System::Func_2<::RPG::GameCore::LevelGroupRandomInitControl*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::GameCore::LevelGroupRandomInitControl*, ::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6CB20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __DoRandomInit_b__0_0(::RPG::GameCore::LevelGroupRandomInitControl* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelGroupRandomInitControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO___C___DORANDOMINIT_B__0_0_OFFSET))(this, a1);
		}

		::System::Boolean _TryGetLittleGameInfo_b__28_0(::System::UInt32 a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMEGROUPINFO___C__TRYGETLITTLEGAMEINFO_B__28_0_OFFSET))(this, a1, a2);
		}

	};
}
