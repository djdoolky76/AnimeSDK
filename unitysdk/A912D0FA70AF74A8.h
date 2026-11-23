#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E7F9C9491EE9F059/A1DD51B242BE0B4E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchState.h"
#include "unitysdk/AA8B3CE8DA68E5DC.h"
#include "unitysdk/E933BCBDA877A2DF_FD07CE844DDC2C64.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class Touchscreen; }
template <typename T> class FE49F524354D3A59;

#define A912D0FA70AF74A8_A151FDF418E565A0_OFFSET UNITYSDK_OFFSET(0x3F5EA40)
#define A912D0FA70AF74A8_AEB2F6F054161E0B_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define A912D0FA70AF74A8_E858405034D0A020_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A912D0FA70AF74A8_E8840150C6E30984_OFFSET UNITYSDK_OFFSET(0x3F5ED10)
#define A912D0FA70AF74A8__CTOR_OFFSET UNITYSDK_OFFSET(0x3F5EDD0)

inline static constexpr unsigned int A912D0FA70AF74A8_TypeDefinitionIndex = 14322;

class A912D0FA70AF74A8 : public ::System::Object
{
public:
	::UnityEngine::InputSystem::Touchscreen* E11C865672E9650C; // 0x10
	::System::Int32 B57B9F18EB6AD438; // 0x18
	::System::Byte _padding0[0x4];
	::FE49F524354D3A59<::UnityEngine::InputSystem::LowLevel::TouchState>* E656F92D239DD8CE; // 0x20

	static ::System::Boolean E8840150C6E30984(::UnityEngine::InputSystem::InputControl* B35325D9541AD934, ::System::Double FF0A37159A523E06, ::AA8B3CE8DA68E5DC AE3D61BA8B59B50D)
	{
		return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Double, ::AA8B3CE8DA68E5DC))((::PBYTE)hIl2Cpp + A912D0FA70AF74A8_E8840150C6E30984_OFFSET))(B35325D9541AD934, FF0A37159A523E06, AE3D61BA8B59B50D);
	}

	::UnityEngine::InputSystem::Touchscreen* E858405034D0A020()
	{
		return ((::UnityEngine::InputSystem::Touchscreen*(*)(::PVOID))((::PBYTE)hIl2Cpp + A912D0FA70AF74A8_E858405034D0A020_OFFSET))(this);
	}

	::System::Void A151FDF418E565A0(::E933BCBDA877A2DF_FD07CE844DDC2C64 B4E4937C5E1E0450)
	{
		return ((::System::Void(*)(::PVOID, ::E933BCBDA877A2DF_FD07CE844DDC2C64))((::PBYTE)hIl2Cpp + A912D0FA70AF74A8_A151FDF418E565A0_OFFSET))(this, B4E4937C5E1E0450);
	}

	::System::Void _ctor(::UnityEngine::InputSystem::Touchscreen* EC85C08F164E7D38, ::System::Int32 B48C66E5FB2449C6, ::E7F9C9491EE9F059::A1DD51B242BE0B4E EACE0D008B5E35EE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Touchscreen*, ::System::Int32, ::E7F9C9491EE9F059::A1DD51B242BE0B4E))((::PBYTE)hIl2Cpp + A912D0FA70AF74A8__CTOR_OFFSET))(this, EC85C08F164E7D38, B48C66E5FB2449C6, EACE0D008B5E35EE);
	}

	::System::Int32 AEB2F6F054161E0B()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + A912D0FA70AF74A8_AEB2F6F054161E0B_OFFSET))(this);
	}
};
