#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A59B6DEE0EE199B9;
namespace PampelGames::RoadConstructor { class ComponentSettings; }
namespace PampelGames::RoadConstructor { class IntersectionObject; }
namespace PampelGames::RoadConstructor { class RoadObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Splines { class Spline; }

#define A92A73DEAB98DDE8_ECC46C9A746D4633_OFFSET UNITYSDK_OFFSET(0x3D98D10)
#define A92A73DEAB98DDE8_F2E918650F653235_OFFSET UNITYSDK_OFFSET(0x3D99250)

inline static constexpr unsigned int A92A73DEAB98DDE8_TypeDefinitionIndex = 18853;

class A92A73DEAB98DDE8 : public ::System::Object
{
public:
	static ::UnityEngine::Splines::Spline* F2E918650F653235(::PampelGames::RoadConstructor::ComponentSettings* B657584D50B81BBF, ::A59B6DEE0EE199B9* F0C66DF2B324066A)
	{
		return ((::UnityEngine::Splines::Spline*(*)(::PampelGames::RoadConstructor::ComponentSettings*, ::A59B6DEE0EE199B9*))((::PBYTE)hIl2Cpp + A92A73DEAB98DDE8_F2E918650F653235_OFFSET))(B657584D50B81BBF, F0C66DF2B324066A);
	}

	static ::System::Void ECC46C9A746D4633(::PampelGames::RoadConstructor::ComponentSettings* B657584D50B81BBF, ::A59B6DEE0EE199B9* F0C66DF2B324066A, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*& A596B5649374478A, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>*& A7DEE7B7302EF505, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*& E3FFEC1FA07C7786)
	{
		return ((::System::Void(*)(::PampelGames::RoadConstructor::ComponentSettings*, ::A59B6DEE0EE199B9*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*&, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>*&, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*&))((::PBYTE)hIl2Cpp + A92A73DEAB98DDE8_ECC46C9A746D4633_OFFSET))(B657584D50B81BBF, F0C66DF2B324066A, A596B5649374478A, A7DEE7B7302EF505, E3FFEC1FA07C7786);
	}
};
