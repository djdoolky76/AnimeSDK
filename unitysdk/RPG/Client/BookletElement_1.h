#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
class DMDPOFBLBIE;
class LNDHLHALKAK;
namespace RPG::Client { class IBookletView; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int BookletElement_1_TypeDefinitionIndex = 72387;

	template <typename T>
	class BookletElement_1 : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		T _Config; // 0x0
		::System::Collections::Generic::List_1<::LNDHLHALKAK*>* _UIAdaptOperations; // 0x0
		::System::Collections::Generic::List_1<::DMDPOFBLBIE*>* _Children; // 0x0
		::RPG::Client::IBookletView* _View_k__BackingField; // 0x0
		::DMDPOFBLBIE* _Parent_k__BackingField; // 0x0
	};
}
