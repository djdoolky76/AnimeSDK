#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirContainerType.h"
#include "unitysdk/System/Object.h"
class MBAHJMANGHN;

#define GPIEDKIKBKM_CTOR_OFFSET UNITYSDK_OFFSET(0x15B4F200)
#define GPIEDKIKBKM_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x15B4EB00)
#define GPIEDKIKBKM_KHKPDAELGPG_OFFSET UNITYSDK_OFFSET(0x15B4EBD0)
#define GPIEDKIKBKM_MAPHFCPFEKE_OFFSET UNITYSDK_OFFSET(0x15B4EFD0)

inline static constexpr unsigned int GPIEDKIKBKM_TypeDefinitionIndex = 79339;

	class GPIEDKIKBKM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIEDKIKBKM_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::MBAHJMANGHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBAHJMANGHN*))((::PBYTE)hIl2Cpp + GPIEDKIKBKM_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Boolean KHKPDAELGPG(::MBAHJMANGHN* a1, ::RPG::Client::PixAir::PixAirContainerType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBAHJMANGHN*, ::RPG::Client::PixAir::PixAirContainerType))((::PBYTE)hIl2Cpp + GPIEDKIKBKM_KHKPDAELGPG_OFFSET))(this, a1, a2);
		}

		::System::Boolean MAPHFCPFEKE(::MBAHJMANGHN* a1, ::RPG::Client::PixAir::PixAirContainerType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBAHJMANGHN*, ::RPG::Client::PixAir::PixAirContainerType))((::PBYTE)hIl2Cpp + GPIEDKIKBKM_MAPHFCPFEKE_OFFSET))(this, a1, a2);
		}

	};
