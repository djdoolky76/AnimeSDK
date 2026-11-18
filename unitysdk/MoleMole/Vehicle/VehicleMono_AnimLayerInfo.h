#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleMono_AnimLayerInfo_TypeDefinitionIndex = 85358;

	struct alignas(8) VehicleMono_AnimLayerInfo
	{
		::System::Collections::Generic::List_1<::System::Object*>* states; // 0x10
	};
}
