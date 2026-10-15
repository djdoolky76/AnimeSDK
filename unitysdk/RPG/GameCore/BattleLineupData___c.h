#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MazeBuffData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_GAMECORE_BATTLELINEUPDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE5C83C0)
#define RPG_GAMECORE_BATTLELINEUPDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE5C83F0)
#define RPG_GAMECORE_BATTLELINEUPDATA___C__GETALLAVATARGLOBALMAZEBUFFDATALIST_B__11_0_OFFSET UNITYSDK_OFFSET(0xE5C8400)

namespace RPG::GameCore
{
	class BattleLineupData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x57690);
		}

		static ::System::Func_2<::RPG::GameCore::MazeBuffData*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::GameCore::MazeBuffData*, ::System::Boolean>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x57698);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllAvatarGlobalMazeBuffDataList_b__11_0(::RPG::GameCore::MazeBuffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA___C__GETALLAVATARGLOBALMAZEBUFFDATALIST_B__11_0_OFFSET))(this, a1);
		}

	};
}
