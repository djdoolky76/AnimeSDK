#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookAvatarComparerFactory___O_TypeDefinitionIndex = 67537;

	class HandbookAvatarComparerFactory___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>** StaticGet__1___CheckIsGrowthTarget()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x1C480);
		}

		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>** StaticGet__0___CheckIsTrial()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x1C488);
		}

		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>** StaticGet__2___CheckIsMarked()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x1C490);
		}

	};
}
