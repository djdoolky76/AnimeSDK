#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FateExpRewardLevelDataItem; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FATEEXPREWARDINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCE80C00)
#define RPG_CLIENT_FATEEXPREWARDINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCE80C30)
#define RPG_CLIENT_FATEEXPREWARDINFO___C__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xCE80C40)

namespace RPG::Client
{
	inline static constexpr unsigned int FateExpRewardInfo___c_TypeDefinitionIndex = 64015;

	class FateExpRewardInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4C1C0);
		}

		static ::System::Comparison_1<::RPG::Client::FateExpRewardLevelDataItem*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::FateExpRewardLevelDataItem*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4C1C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Init_b__1_0(::RPG::Client::FateExpRewardLevelDataItem* a1, ::RPG::Client::FateExpRewardLevelDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateExpRewardLevelDataItem*, ::RPG::Client::FateExpRewardLevelDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO___C__INIT_B__1_0_OFFSET))(this, a1, a2);
		}

	};
}
