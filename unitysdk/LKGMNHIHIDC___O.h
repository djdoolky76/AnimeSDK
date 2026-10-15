#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int LKGMNHIHIDC___O_TypeDefinitionIndex = 54946;

	class LKGMNHIHIDC___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Int32>** StaticGet__0____GetEntitySortKey()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Int32>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x697F0);
		}

	};
