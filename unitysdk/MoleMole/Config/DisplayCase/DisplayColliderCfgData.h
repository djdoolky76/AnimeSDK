#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole::Config::DisplayCase
{
	inline static constexpr unsigned int DisplayColliderCfgData_TypeDefinitionIndex = 55147;

	struct alignas(8) DisplayColliderCfgData
	{
		::UnityEngine::Vector3 Center; // 0x10
		::UnityEngine::Vector3 Size; // 0x1C
		::System::Single Yaw; // 0x28
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* PanelSettles; // 0x30
	};
}
