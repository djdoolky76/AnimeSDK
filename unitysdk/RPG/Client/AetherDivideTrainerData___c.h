#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class QuestData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_AETHERDIVIDETRAINERDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC62DB10)
#define RPG_CLIENT_AETHERDIVIDETRAINERDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC62DB50)
#define RPG_CLIENT_AETHERDIVIDETRAINERDATA___C__GETSORTEDQUESTDATALIST_B__7_0_OFFSET UNITYSDK_OFFSET(0xC62DB60)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherDivideTrainerData___c_TypeDefinitionIndex = 62237;

	class AetherDivideTrainerData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4CF10);
		}

		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4CF18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETRAINERDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETRAINERDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedQuestDataList_b__7_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETRAINERDATA___C__GETSORTEDQUESTDATALIST_B__7_0_OFFSET))(this, a1);
		}

	};
}
