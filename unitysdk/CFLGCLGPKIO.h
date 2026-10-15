#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFLGCLGPKIO;
namespace RPG::Client { class MapMappingInfoData; }

#define CFLGCLGPKIO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCC4C500)
#define CFLGCLGPKIO_CTOR_OFFSET UNITYSDK_OFFSET(0xCC4C5C0)
#define CFLGCLGPKIO_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xCC4C5D0)
#define CFLGCLGPKIO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCC4C4B0)

inline static constexpr unsigned int CFLGCLGPKIO_TypeDefinitionIndex = 62928;

	class CFLGCLGPKIO : public ::System::Object
	{
	public:
		::RPG::Client::MapMappingInfoData* KHDMDJELPPL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLGCLGPKIO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::MapMappingInfoData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CFLGCLGPKIO_KPJGDHLENIP_OFFSET))(this, a1);
		}

		static ::CFLGCLGPKIO* BPLPBPMEODA(::RPG::Client::MapMappingInfoData* a1)
		{
			return ((::CFLGCLGPKIO*(*)(::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CFLGCLGPKIO_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 get_IconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLGCLGPKIO_GET_ICONTYPE_OFFSET))(this);
		}

	};
