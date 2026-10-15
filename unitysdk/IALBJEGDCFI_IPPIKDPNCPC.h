#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IALBJEGDCFI_HCBKBKPNDKB.h"
#include "unitysdk/PLHLAIJKMOD.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"

#define IALBJEGDCFI_IPPIKDPNCPC_CTOR_OFFSET UNITYSDK_OFFSET(0x15E0BDB0)
#define IALBJEGDCFI_IPPIKDPNCPC_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15E0C480)
#define IALBJEGDCFI_IPPIKDPNCPC_HNEADNPJHEB_OFFSET UNITYSDK_OFFSET(0x15E0C4B0)
#define IALBJEGDCFI_IPPIKDPNCPC_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15E0C4A0)

inline static constexpr unsigned int IALBJEGDCFI_IPPIKDPNCPC_TypeDefinitionIndex = 79494;

	class IALBJEGDCFI_IPPIKDPNCPC : public ::IALBJEGDCFI_HCBKBKPNDKB
	{
	public:
		::PLHLAIJKMOD _Transform_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_IPPIKDPNCPC_CTOR_OFFSET))(this);
		}

		::PLHLAIJKMOD get_Transform()
		{
			return ((::PLHLAIJKMOD(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_IPPIKDPNCPC_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void set_Transform(::PLHLAIJKMOD a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLHLAIJKMOD))((::PBYTE)hIl2Cpp + IALBJEGDCFI_IPPIKDPNCPC_SET_TRANSFORM_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::MechCraftRotationType HNEADNPJHEB()
		{
			return ((::RPG::Client::MechCraft::MechCraftRotationType(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_IPPIKDPNCPC_HNEADNPJHEB_OFFSET))(this);
		}

	};
