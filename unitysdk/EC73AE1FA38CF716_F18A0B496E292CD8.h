#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_B11F7E39B57B34B8.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EC73AE1FA38CF716_F18A0B496E292CD8_A4DA501C852FD43D_OFFSET UNITYSDK_OFFSET(0x3FE1A20)

inline static constexpr unsigned int EC73AE1FA38CF716_F18A0B496E292CD8_TypeDefinitionIndex = 14446;

struct alignas(4) EC73AE1FA38CF716_F18A0B496E292CD8
{
	::System::Int32 F1E5C91CC90BA48C; // 0x10
	::UnityEngine::InputSystem::HID::HID_B11F7E39B57B34B8 F095BCC88712425D; // 0x14
	::System::Int32 AD32ADD3A13490EF; // 0x18

	static ::System::Int32 A4DA501C852FD43D(::System::Nullable_1<::System::Int32> F1E5C91CC90BA48C, ::UnityEngine::InputSystem::HID::HID_B11F7E39B57B34B8 F095BCC88712425D, ::System::Collections::Generic::List_1<::System::Object*>* B559078F63DEB3A4)
	{
		return ((::System::Int32(*)(::System::Nullable_1<::System::Int32>, ::UnityEngine::InputSystem::HID::HID_B11F7E39B57B34B8, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EC73AE1FA38CF716_F18A0B496E292CD8_A4DA501C852FD43D_OFFSET))(F1E5C91CC90BA48C, F095BCC88712425D, B559078F63DEB3A4);
	}
};
