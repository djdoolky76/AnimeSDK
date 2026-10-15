#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueGambleGroupData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF00D10)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDF00D50)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C___SORTGROUPDATALIST_B__12_0_OFFSET UNITYSDK_OFFSET(0xDF00D60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleBaseFunc___c_TypeDefinitionIndex = 67232;

	class RogueGambleBaseFunc___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x63BF0);
		}

		static ::System::Comparison_1<::RPG::Client::RogueGambleGroupData*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::RPG::Client::RogueGambleGroupData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x63BF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SortGroupDataList_b__12_0(::RPG::Client::RogueGambleGroupData* a1, ::RPG::Client::RogueGambleGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueGambleGroupData*, ::RPG::Client::RogueGambleGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C___SORTGROUPDATALIST_B__12_0_OFFSET))(this, a1, a2);
		}

	};
}
