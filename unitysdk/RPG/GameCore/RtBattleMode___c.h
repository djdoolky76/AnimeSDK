#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAKADBDHKBJ;
class EBBBJDPGDFG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_GAMECORE_RTBATTLEMODE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE735AC0)
#define RPG_GAMECORE_RTBATTLEMODE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE735B00)
#define RPG_GAMECORE_RTBATTLEMODE___C__ONPREINIT_B__83_0_OFFSET UNITYSDK_OFFSET(0xE735B10)
#define RPG_GAMECORE_RTBATTLEMODE___C__ONPREINIT_B__83_1_OFFSET UNITYSDK_OFFSET(0xE735B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleMode___c_TypeDefinitionIndex = 54270;

	class RtBattleMode___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::EBBBJDPGDFG*>** StaticGet___9__83_0()
		{
			return (::System::Action_1<::EBBBJDPGDFG*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x69750);
		}

		static ::System::Action_1<::AAKADBDHKBJ*>** StaticGet___9__83_1()
		{
			return (::System::Action_1<::AAKADBDHKBJ*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x69758);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x69760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnPreInit_b__83_0(::EBBBJDPGDFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBBBJDPGDFG*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___C__ONPREINIT_B__83_0_OFFSET))(this, a1);
		}

		::System::Void _OnPreInit_b__83_1(::AAKADBDHKBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAKADBDHKBJ*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___C__ONPREINIT_B__83_1_OFFSET))(this, a1);
		}

	};
}
