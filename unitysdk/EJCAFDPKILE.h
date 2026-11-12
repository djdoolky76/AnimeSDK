#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/FeverOperationKind.h"
class LPHINGPIEAJ;

#define EJCAFDPKILE_CTOR_OFFSET UNITYSDK_OFFSET(0x25080)
#define EJCAFDPKILE_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x12B10)
#define EJCAFDPKILE_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1D40)
#define EJCAFDPKILE_GET_KIND_OFFSET UNITYSDK_OFFSET(0xE600)

inline static constexpr unsigned int EJCAFDPKILE_TypeDefinitionIndex = 79966;

	struct alignas(8) EJCAFDPKILE
	{
		::RPG::Client::LittleGame::ComicDessert::FeverOperationKind _Kind_k__BackingField; // 0x10
		::System::UInt32 _DeviceID_k__BackingField; // 0x14
		::LPHINGPIEAJ* _Device_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::LittleGame::ComicDessert::FeverOperationKind a1, ::System::UInt32 a2, ::LPHINGPIEAJ* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::FeverOperationKind, ::System::UInt32, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + EJCAFDPKILE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LittleGame::ComicDessert::FeverOperationKind get_Kind()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::FeverOperationKind(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCAFDPKILE_GET_KIND_OFFSET))(this);
		}

		::System::UInt32 get_DeviceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCAFDPKILE_GET_DEVICEID_OFFSET))(this);
		}

		::LPHINGPIEAJ* get_Device()
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCAFDPKILE_GET_DEVICE_OFFSET))(this);
		}

	};
