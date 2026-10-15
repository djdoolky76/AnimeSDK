#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class RogueScoreRewardRow; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUESCOREREWARDDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF5F910)
#define RPG_CLIENT_ROGUESCOREREWARDDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDF5F950)
#define RPG_CLIENT_ROGUESCOREREWARDDATA___C__GETCURSCOREREWARDROWS_B__4_0_OFFSET UNITYSDK_OFFSET(0xDF5F960)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueScoreRewardData___c_TypeDefinitionIndex = 67470;

	class RogueScoreRewardData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::RogueScoreRewardRow*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::RogueScoreRewardRow*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x69260);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x69268);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetCurScoreRewardRows_b__4_0(::RPG::GameCore::RogueScoreRewardRow* a1, ::RPG::GameCore::RogueScoreRewardRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueScoreRewardRow*, ::RPG::GameCore::RogueScoreRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESCOREREWARDDATA___C__GETCURSCOREREWARDROWS_B__4_0_OFFSET))(this, a1, a2);
		}

	};
}
