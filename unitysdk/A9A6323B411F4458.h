#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B66F534B95FABB6C;
namespace PampelGames::RoadConstructor { class ComponentSettings; }
namespace PampelGames::RoadConstructor { class IntersectionObject; }
namespace PampelGames::RoadConstructor { class RoadObject; }
namespace PampelGames::RoadConstructor { class UndoObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class BF99F5374C2D4358;

#define A9A6323B411F4458_A05C04E3AE8D21BA_OFFSET UNITYSDK_OFFSET(0x3DA1620)
#define A9A6323B411F4458_E74476CC4EF4DF47_OFFSET UNITYSDK_OFFSET(0x3DA1850)
#define A9A6323B411F4458_F4FEE4B3C4E3EF3C_OFFSET UNITYSDK_OFFSET(0x3DA1BD0)

inline static constexpr unsigned int A9A6323B411F4458_TypeDefinitionIndex = 18852;

class A9A6323B411F4458 : public ::System::Object
{
public:
	static ::System::Void A05C04E3AE8D21BA(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* AB3F5215CFCBEDF2, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* A7DEE7B7302EF505)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>*))((::PBYTE)hIl2Cpp + A9A6323B411F4458_A05C04E3AE8D21BA_OFFSET))(AB3F5215CFCBEDF2, A7DEE7B7302EF505);
	}

	static ::System::Void E74476CC4EF4DF47(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* AB58B9103C09E854, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* E3FFEC1FA07C7786)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*))((::PBYTE)hIl2Cpp + A9A6323B411F4458_E74476CC4EF4DF47_OFFSET))(AB58B9103C09E854, E3FFEC1FA07C7786);
	}

	static ::System::Void F4FEE4B3C4E3EF3C(::PampelGames::RoadConstructor::ComponentSettings* B657584D50B81BBF, ::UnityEngine::GameObject* BF83972A914A5B3C, ::BF99F5374C2D4358<::PampelGames::RoadConstructor::UndoObject*>* EEE12C1ECBBA95FF, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* E02371808536564E, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* B51731A4F8EF107D, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* B66F255973A08D73, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* E4F696E992CDD38B, ::B66F534B95FABB6C* A58C385F41656EA2)
	{
		return ((::System::Void(*)(::PampelGames::RoadConstructor::ComponentSettings*, ::UnityEngine::GameObject*, ::BF99F5374C2D4358<::PampelGames::RoadConstructor::UndoObject*>*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>*, ::B66F534B95FABB6C*))((::PBYTE)hIl2Cpp + A9A6323B411F4458_F4FEE4B3C4E3EF3C_OFFSET))(B657584D50B81BBF, BF83972A914A5B3C, EEE12C1ECBBA95FF, E02371808536564E, B51731A4F8EF107D, B66F255973A08D73, E4F696E992CDD38B, A58C385F41656EA2);
	}
};
