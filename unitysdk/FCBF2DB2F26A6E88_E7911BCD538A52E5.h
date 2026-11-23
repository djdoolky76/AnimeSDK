#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"

namespace PampelGames::RoadConstructor { class RoadObject; }
namespace PampelGames::RoadConstructor { class SceneObject; }
namespace PampelGames::RoadConstructor { class SpawnObject; }
namespace PampelGames::RoadConstructor { class SpawnedObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int FCBF2DB2F26A6E88_E7911BCD538A52E5_TypeDefinitionIndex = 18894;

struct alignas(8) FCBF2DB2F26A6E88_E7911BCD538A52E5
{
	::PampelGames::RoadConstructor::SpawnObject* BA4225D466D2758A; // 0x10
	::System::Single B1502BDAED8034EB; // 0x18
	::System::Byte _padding0[0x4];
	::PampelGames::RoadConstructor::SceneObject* F2F13BF43CD75E06; // 0x20
	::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* E8FFFB8848396669; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::B3A7F113FE1DE383>* E005E733EDEC552A; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* A8C7BF6B7EC947CD; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* BA9137EB27F5E0FC; // 0x40
	::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::SpawnedObject*>* E5D3158178DF2846; // 0x48
};
