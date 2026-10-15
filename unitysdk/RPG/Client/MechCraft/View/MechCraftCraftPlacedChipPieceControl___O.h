#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace RPG::Client::MechCraft::View
{
	class MechCraftCraftPlacedChipPieceControl___O : public ::System::Object
	{
	public:
		static ::System::Func_3<::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int>** StaticGet__0___Min()
		{
			return (::System::Func_3<::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>O")->GetStaticField(0x59050);
		}

	};
}
