#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDF2D87A96496AE8_A241DF0E7B20F97F;
namespace System { class Action; }
namespace System { class EC00AF6EBD418F0F; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDF2D87A96496AE8_F56528CF0C2837EE_E9E6DA31AAB96B25_OFFSET UNITYSDK_OFFSET(0x2A1C7A0)
#define BDF2D87A96496AE8_F56528CF0C2837EE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BDF2D87A96496AE8_F56528CF0C2837EE_TypeDefinitionIndex = 15890;

class BDF2D87A96496AE8_F56528CF0C2837EE : public ::System::Object
{
public:
	::System::Action* E5753F48089F9529; // 0x10
	::System::EC00AF6EBD418F0F* A5E13DE10579BB67; // 0x18
	::BDF2D87A96496AE8_A241DF0E7B20F97F* A8791C2B0F6F977B; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDF2D87A96496AE8_F56528CF0C2837EE__CTOR_OFFSET))(this);
	}

	::System::Void E9E6DA31AAB96B25(::System::Collections::Generic::List_1<::System::String*>* B1393CF69DA74A3D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + BDF2D87A96496AE8_F56528CF0C2837EE_E9E6DA31AAB96B25_OFFSET))(this, B1393CF69DA74A3D);
	}
};
