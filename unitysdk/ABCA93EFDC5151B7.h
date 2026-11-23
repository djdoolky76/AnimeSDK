#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Transform; }

#define ABCA93EFDC5151B7_B35DA9141979D105_OFFSET UNITYSDK_OFFSET(0x1FC3040)
#define ABCA93EFDC5151B7_B71FC5C2A941EFAC_OFFSET UNITYSDK_OFFSET(0x1FC3310)
#define ABCA93EFDC5151B7_E01B3ACDDFC379CB_OFFSET UNITYSDK_OFFSET(0x1FC38C0)
#define ABCA93EFDC5151B7_E34E08B3E962FE70_OFFSET UNITYSDK_OFFSET(0x1FC36D0)
#define ABCA93EFDC5151B7_EF786A6EF8C219C6_OFFSET UNITYSDK_OFFSET(0x1FC39A0)
#define ABCA93EFDC5151B7_F695C9C2BA8578D2_OFFSET UNITYSDK_OFFSET(0x1FC37E0)
#define ABCA93EFDC5151B7_F8039F7C66466417_OFFSET UNITYSDK_OFFSET(0x1FC35E0)

inline static constexpr unsigned int ABCA93EFDC5151B7_TypeDefinitionIndex = 6858;

class ABCA93EFDC5151B7 : public ::System::Object
{
public:
	static ::UnityEngine::Transform* B71FC5C2A941EFAC(::UnityEngine::Transform* EFE497ABF6BF98D8, ::System::String* F79B4D487F303AB2, ::System::Boolean B59C92DA2BD0400D)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABCA93EFDC5151B7_B71FC5C2A941EFAC_OFFSET))(EFE497ABF6BF98D8, F79B4D487F303AB2, B59C92DA2BD0400D);
	}

	static ::UnityEngine::Transform* F8039F7C66466417(::UnityEngine::Transform* E1F4A9C72EB64D81, ::System::String* A2FF31F8FD1FC299, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABCA93EFDC5151B7_F8039F7C66466417_OFFSET))(E1F4A9C72EB64D81, A2FF31F8FD1FC299, F7C511FBCE59B4A5);
	}

	static ::System::Void E34E08B3E962FE70(::UnityEngine::Component* F1EE4CF10E4B5F91, ::System::Boolean A3E26351629B9EF8, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ABCA93EFDC5151B7_E34E08B3E962FE70_OFFSET))(F1EE4CF10E4B5F91, A3E26351629B9EF8, F7C511FBCE59B4A5);
	}

	static ::System::Void EF786A6EF8C219C6(::UnityEngine::Transform* E7A41DB667CBC570, ::System::Single EFD6B3862CDDD176)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ABCA93EFDC5151B7_EF786A6EF8C219C6_OFFSET))(E7A41DB667CBC570, EFD6B3862CDDD176);
	}

	static ::System::Void F695C9C2BA8578D2(::UnityEngine::Transform* E1C906AC21402CBB, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABCA93EFDC5151B7_F695C9C2BA8578D2_OFFSET))(E1C906AC21402CBB, F7C511FBCE59B4A5);
	}

	static ::System::Void E01B3ACDDFC379CB(::UnityEngine::Transform* E1C906AC21402CBB, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABCA93EFDC5151B7_E01B3ACDDFC379CB_OFFSET))(E1C906AC21402CBB, F7C511FBCE59B4A5);
	}

	static ::UnityEngine::Transform* B35DA9141979D105(::UnityEngine::Transform* EFE497ABF6BF98D8, ::System::String* F79B4D487F303AB2, ::System::Boolean B59C92DA2BD0400D)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABCA93EFDC5151B7_B35DA9141979D105_OFFSET))(EFE497ABF6BF98D8, F79B4D487F303AB2, B59C92DA2BD0400D);
	}
};
