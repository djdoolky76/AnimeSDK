#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraShotData_EKNIALFMDNP.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole
{
	inline static constexpr unsigned int CameraShotData_ShotAttachOffsetData_TypeDefinitionIndex = 46405;

	struct alignas(8) CameraShotData_ShotAttachOffsetData
	{
		::MoleMole::CameraShotData_EKNIALFMDNP followType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* baseAttachPoint; // 0x18
		::System::Boolean alwaysCalcOffset; // 0x20
		::System::Boolean applyExtraOffset; // 0x21
		::System::Byte _padding1[0x2];
		::System::Single extraOffsetRatio; // 0x24
		::System::Collections::Generic::List_1<::System::String*>* extraOffsetAttachPoints; // 0x28
	};
}
