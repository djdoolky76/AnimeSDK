#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define EFF16717BFA9F775_E01B3ACDDFC379CB_OFFSET UNITYSDK_OFFSET(0x229ECB0)
#define EFF16717BFA9F775_E34E08B3E962FE70_OFFSET UNITYSDK_OFFSET(0x229EBA0)

inline static constexpr unsigned int EFF16717BFA9F775_TypeDefinitionIndex = 7100;

class EFF16717BFA9F775 : public ::System::Object
{
public:
	static ::System::Void E34E08B3E962FE70(::UnityEngine::GameObject* A86A90C31A146E9C, ::System::Boolean A3E26351629B9EF8, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EFF16717BFA9F775_E34E08B3E962FE70_OFFSET))(A86A90C31A146E9C, A3E26351629B9EF8, F7C511FBCE59B4A5);
	}

	static ::System::Void E01B3ACDDFC379CB(::UnityEngine::GameObject* A86A90C31A146E9C, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + EFF16717BFA9F775_E01B3ACDDFC379CB_OFFSET))(A86A90C31A146E9C, F7C511FBCE59B4A5);
	}
};
