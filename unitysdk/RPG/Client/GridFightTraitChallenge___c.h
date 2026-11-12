#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class QuestData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDCCA830)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDCCA870)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__30_0_OFFSET UNITYSDK_OFFSET(0xDCCA880)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__30_1_OFFSET UNITYSDK_OFFSET(0xDCCA8F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__32_0_OFFSET UNITYSDK_OFFSET(0xDCCA900)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__32_1_OFFSET UNITYSDK_OFFSET(0xDCCA970)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitChallenge___c_TypeDefinitionIndex = 67328;

	class GridFightTraitChallenge___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__30_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x12A30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x12A38);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x12A40);
		}

		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__32_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x12A48);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x12A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::QuestData* _get_Quests_b__30_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__30_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_Quests_b__30_1(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__30_1_OFFSET))(this, a1);
		}

		::RPG::Client::QuestData* _get_StandardQuests_b__32_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__32_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_StandardQuests_b__32_1(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__32_1_OFFSET))(this, a1);
		}

	};
}
