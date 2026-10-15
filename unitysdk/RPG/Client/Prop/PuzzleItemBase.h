#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class FJDBIPNBNEE;
namespace RPG::GameCore { class GameComponentBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_PUZZLEITEMBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xDD89090)
#define RPG_CLIENT_PROP_PUZZLEITEMBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD88FD0)
#define RPG_CLIENT_PROP_PUZZLEITEMBASE_INITPUZZLEITEM_OFFSET UNITYSDK_OFFSET(0xDD88F90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PuzzleItemBase_TypeDefinitionIndex = 78790;

	class PuzzleItemBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::FJDBIPNBNEE* NFALKNMMPFM; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameComponentBase*>* GEEPKLAIPOC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEITEMBASE_CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzleItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEITEMBASE_INITPUZZLEITEM_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEITEMBASE_DISPOSE_OFFSET))(this);
		}

	};
}
