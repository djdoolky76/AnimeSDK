#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJLBCEKFOJH.h"
#include "unitysdk/System/Object.h"

class DADCGCNPEAD;
namespace System { class EventHandler; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace MoleMole::QuickGraph::Algorithm
{
	inline static constexpr unsigned int AlgorithmBase_1_TypeDefinitionIndex = 28323;

	template <typename T>
	class AlgorithmBase_1 : public ::System::Object
	{
	public:
		T visitedGraph; // 0x0
		::DADCGCNPEAD* services; // 0x0
		::System::Object* syncRoot; // 0x0
		::DJLBCEKFOJH state; // 0x0
		::System::EventHandler* StateChanged; // 0x0
		::System::EventHandler* Started; // 0x0
		::System::EventHandler* Finished; // 0x0
		::System::EventHandler* Aborted; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* _services; // 0x0
	};
}
