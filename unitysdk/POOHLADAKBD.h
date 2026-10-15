#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseGameFlow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POOHLADAKBD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC36D810)

inline static constexpr unsigned int POOHLADAKBD_TypeDefinitionIndex = 64351;

	class POOHLADAKBD : public ::System::Object
	{
	public:
		static ::RPG::Client::BaseGameFlow* BPLPBPMEODA(::RPG::GameCore::GameFlowType a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2)
		{
			return ((::RPG::Client::BaseGameFlow*(*)(::RPG::GameCore::GameFlowType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + POOHLADAKBD_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
