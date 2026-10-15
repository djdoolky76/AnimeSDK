#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }

	class LKGMNHIHIDC___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Int32>** StaticGet__0____GetEntitySortKey()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Int32>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x65100);
		}

	};
