#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournExpRewardDataItem; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNEXPDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEA78E0)
#define RPG_CLIENT_ROGUETOURNEXPDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA7910)
#define RPG_CLIENT_ROGUETOURNEXPDATA___C___TRYINITREWARDROWS_B__12_0_OFFSET UNITYSDK_OFFSET(0x1CEA7920)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournExpData___c_TypeDefinitionIndex = 69811;

	class RogueTournExpData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72990);
		}

		static ::System::Comparison_1<::RPG::Client::RogueTournExpRewardDataItem*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::RPG::Client::RogueTournExpRewardDataItem*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72998);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __TryInitRewardRows_b__12_0(::RPG::Client::RogueTournExpRewardDataItem* a1, ::RPG::Client::RogueTournExpRewardDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournExpRewardDataItem*, ::RPG::Client::RogueTournExpRewardDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA___C___TRYINITREWARDROWS_B__12_0_OFFSET))(this, a1, a2);
		}

	};
}
