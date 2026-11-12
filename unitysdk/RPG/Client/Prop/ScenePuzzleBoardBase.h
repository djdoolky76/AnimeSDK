#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
namespace RPG::Client::Prop { class ScenePuzzleItemBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_PROP_SCENEPUZZLEBOARDBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xE819070)
#define RPG_CLIENT_PROP_SCENEPUZZLEBOARDBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE818FD0)
#define RPG_CLIENT_PROP_SCENEPUZZLEBOARDBASE_PNEAJECMAEL_OFFSET UNITYSDK_OFFSET(0xE818AF0)
#define RPG_CLIENT_PROP_SCENEPUZZLEBOARDBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xE818C30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ScenePuzzleBoardBase_TypeDefinitionIndex = 81626;

	class ScenePuzzleBoardBase : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ScenePuzzleItemBase*, ::UnityEngine::Collider*>* DNELBNCKKEE; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SCENEPUZZLEBOARDBASE_CTOR_OFFSET))(this);
		}

		::System::Void PNEAJECMAEL(::RPG::Client::Prop::ScenePuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ScenePuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SCENEPUZZLEBOARDBASE_PNEAJECMAEL_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SCENEPUZZLEBOARDBASE_UPDATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SCENEPUZZLEBOARDBASE_DISPOSE_OFFSET))(this);
		}

	};
}
