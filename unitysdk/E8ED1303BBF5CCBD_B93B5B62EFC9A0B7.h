#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PampelGames::RoadConstructor { class ComponentSettings; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int E8ED1303BBF5CCBD_B93B5B62EFC9A0B7_TypeDefinitionIndex = 18868;

struct alignas(8) E8ED1303BBF5CCBD_B93B5B62EFC9A0B7
{
	::System::Collections::Generic::List_1<::Unity::Mathematics::float3>* EE1132C39414A7EC; // 0x10
	::UnityEngine::Vector3 A470B90B620F8AD6; // 0x18
	::System::Byte _padding0[0x4];
	::PampelGames::RoadConstructor::ComponentSettings* B657584D50B81BBF; // 0x28
};
