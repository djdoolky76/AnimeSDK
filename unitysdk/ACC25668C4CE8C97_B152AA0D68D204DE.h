#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEC0E6D302F81A77.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ACC25668C4CE8C97_B152AA0D68D204DE__CTOR_OFFSET UNITYSDK_OFFSET(0x385A2B0)

inline static constexpr unsigned int ACC25668C4CE8C97_B152AA0D68D204DE_TypeDefinitionIndex = 18017;

class ACC25668C4CE8C97_B152AA0D68D204DE : public ::FEC0E6D302F81A77
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* A5DE50AEAF1B0A20; // 0x18
	::UnityEngine::Transform* B2A0B12783A9A3A2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACC25668C4CE8C97_B152AA0D68D204DE__CTOR_OFFSET))(this);
	}
};
