#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJIFFMGIAHL;
class PIHNNIFOPOC;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class BaseGachaPoolData; }

#define NJJIMLDMCNG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC13600)
#define NJJIMLDMCNG_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0xBC13370)
#define NJJIMLDMCNG_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0xBC13320)
#define NJJIMLDMCNG_KBMJGBPKCFF_OFFSET UNITYSDK_OFFSET(0xBC13060)
#define NJJIMLDMCNG_KPKCFMCJBCF_OFFSET UNITYSDK_OFFSET(0xBC12FF0)

inline static constexpr unsigned int NJJIMLDMCNG_TypeDefinitionIndex = 65581;

	class NJJIMLDMCNG : public ::System::Object
	{
	public:
		::FJIFFMGIAHL* JAPKCFJEKCH; // 0x10
		::RPG::Client::BaseGachaPoolData* PDCALMBAIHH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJIMLDMCNG_CTOR_OFFSET))(this);
		}

		::System::Void KPKCFMCJBCF(::RPG::AvatarSystem::IAvatar* a1, ::FJIFFMGIAHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::FJIFFMGIAHL*))((::PBYTE)hIl2Cpp + NJJIMLDMCNG_KPKCFMCJBCF_OFFSET))(this, a1, a2);
		}

		::System::Boolean JAGPJGOOALH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJIMLDMCNG_JAGPJGOOALH_OFFSET))(this);
		}

		::PIHNNIFOPOC* HFIDHKKOEOA()
		{
			return ((::PIHNNIFOPOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJIMLDMCNG_HFIDHKKOEOA_OFFSET))(this);
		}

		::RPG::Client::BaseGachaPoolData* KBMJGBPKCFF(::System::UInt32 a1)
		{
			return ((::RPG::Client::BaseGachaPoolData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJJIMLDMCNG_KBMJGBPKCFF_OFFSET))(this, a1);
		}

	};
