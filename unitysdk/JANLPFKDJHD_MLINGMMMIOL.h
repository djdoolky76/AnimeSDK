#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class ConfigEntityJoystickOrders;
namespace System { class Action; }

#define JANLPFKDJHD_MLINGMMMIOL_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x16598AC0)
#define JANLPFKDJHD_MLINGMMMIOL__CTOR_OFFSET UNITYSDK_OFFSET(0x16598340)

inline static constexpr unsigned int JANLPFKDJHD_MLINGMMMIOL_TypeDefinitionIndex = 86074;

class JANLPFKDJHD_MLINGMMMIOL : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10
	::System::Action* IBNICCGMILF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANLPFKDJHD_MLINGMMMIOL__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::ConfigEntityJoystickOrders* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigEntityJoystickOrders*))((::PBYTE)hIl2Cpp + JANLPFKDJHD_MLINGMMMIOL_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
