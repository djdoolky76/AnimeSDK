#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class F77C0B948299CD47;
namespace PampelGames::RoadConstructor { class ComponentSettings; }
namespace PampelGames::RoadConstructor { class Road; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Splines { class Spline; }

inline static constexpr unsigned int FE2D2EC286587905_EA76EC050E0392B3_TypeDefinitionIndex = 18801;

struct alignas(8) FE2D2EC286587905_EA76EC050E0392B3
{
	::F77C0B948299CD47* F399E3CBFECFAFC7; // 0x10
	::PampelGames::RoadConstructor::Road* BFB6C894910B2791; // 0x18
	::System::Int32 F42689B146774BE7; // 0x20
	::System::Byte _padding0[0x4];
	::PampelGames::RoadConstructor::ComponentSettings* B657584D50B81BBF; // 0x28
	::UnityEngine::Splines::Spline* A5DAA190E6C1C7E3; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* EE309516028B9C0D; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* AB685CB28D901459; // 0x40
};
