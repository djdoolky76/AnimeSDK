#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthModule___O_TypeDefinitionIndex = 67521;

	class GrowthModule___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__3___IsTracePath()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x17620);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__1___IsEquipmentExp()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x17628);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__0___IsAvatarExp()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x17630);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__4___IsWeeklyMonsterDrop()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x17638);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__7___IsTrackOfDestiny()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x17640);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__2___IsAvatarRank()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x17648);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__5___IsCredit()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x17650);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__6___IsCommonMonsterDrop()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x17658);
		}

	};
}
