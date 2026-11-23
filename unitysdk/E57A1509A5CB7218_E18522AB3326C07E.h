#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PampelGames::RoadConstructor { class IntersectionObject; }
namespace PampelGames::RoadConstructor { class RoadObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int E57A1509A5CB7218_E18522AB3326C07E_TypeDefinitionIndex = 18793;

struct alignas(8) E57A1509A5CB7218_E18522AB3326C07E
{
	::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* E8FFFB8848396669; // 0x10
	::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* A57139F24DC4EC1D; // 0x18
};
