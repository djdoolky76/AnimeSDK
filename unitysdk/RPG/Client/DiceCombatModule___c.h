#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class QuestData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_DICECOMBATMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD687250)
#define RPG_CLIENT_DICECOMBATMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD687290)
#define RPG_CLIENT_DICECOMBATMODULE___C__GETV2SCOREREWARDS_B__35_0_OFFSET UNITYSDK_OFFSET(0xD6872A0)
#define RPG_CLIENT_DICECOMBATMODULE___C__GETV2SCOREREWARDS_B__35_1_OFFSET UNITYSDK_OFFSET(0xD6872B0)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatModule___c_TypeDefinitionIndex = 65000;

	class DiceCombatModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__35_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x29990);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x29998);
		}

		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x299A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetV2ScoreRewards_b__35_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C__GETV2SCOREREWARDS_B__35_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetV2ScoreRewards_b__35_1(::RPG::Client::QuestData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C__GETV2SCOREREWARDS_B__35_1_OFFSET))(this, a1);
		}

	};
}
