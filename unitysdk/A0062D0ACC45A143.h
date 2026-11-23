#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B223EC95048EAAE0/B3CC6E5519497EE3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace PampelGames::RoadConstructor { class IntersectionObject; }
namespace PampelGames::RoadConstructor { class RoadObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A0062D0ACC45A143_BF0E3E9003030614_OFFSET UNITYSDK_OFFSET(0x3D81F20)
#define A0062D0ACC45A143_E4BD58A0662EA34E_OFFSET UNITYSDK_OFFSET(0x3D80FD0)

inline static constexpr unsigned int A0062D0ACC45A143_TypeDefinitionIndex = 18816;

class A0062D0ACC45A143 : public ::System::Object
{
public:
	static ::System::Void BF0E3E9003030614(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* AB58B9103C09E854, ::B223EC95048EAAE0::B3CC6E5519497EE3 F04E814AC4A8897C)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*, ::B223EC95048EAAE0::B3CC6E5519497EE3))((::PBYTE)hIl2Cpp + A0062D0ACC45A143_BF0E3E9003030614_OFFSET))(AB58B9103C09E854, F04E814AC4A8897C);
	}

	static ::System::Void E4BD58A0662EA34E(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* E8FFFB8848396669, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* A57139F24DC4EC1D, ::B223EC95048EAAE0::B3CC6E5519497EE3 F04E814AC4A8897C, ::UnityEngine::Vector2 B51B28163DA464F6)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>*, ::B223EC95048EAAE0::B3CC6E5519497EE3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + A0062D0ACC45A143_E4BD58A0662EA34E_OFFSET))(E8FFFB8848396669, A57139F24DC4EC1D, F04E814AC4A8897C, B51B28163DA464F6);
	}
};
