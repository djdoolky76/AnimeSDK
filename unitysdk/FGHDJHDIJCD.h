#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCFMHIMFADM.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournPersonaRoomAttributeData; }
namespace System { class Object; }

#define FGHDJHDIJCD_CTOR_OFFSET UNITYSDK_OFFSET(0x157569F0)
#define FGHDJHDIJCD_IJOONKNIDKI_OFFSET UNITYSDK_OFFSET(0x15756A00)
#define FGHDJHDIJCD_JKDLNCIIMMF_OFFSET UNITYSDK_OFFSET(0x15756A90)

inline static constexpr unsigned int FGHDJHDIJCD_TypeDefinitionIndex = 67256;

	class FGHDJHDIJCD : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournPersonaRoomAttributeData* KJIFEBHBEFE; // 0x10
		::NCFMHIMFADM LNPLJMDCPEP; // 0x18
		::System::Void _ctor(::NCFMHIMFADM a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFMHIMFADM))((::PBYTE)hIl2Cpp + FGHDJHDIJCD_CTOR_OFFSET))(this, a1);
		}

		::System::Object* IJOONKNIDKI()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHDJHDIJCD_IJOONKNIDKI_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomAttributeData* JKDLNCIIMMF()
		{
			return ((::RPG::Client::RogueTournPersonaRoomAttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHDJHDIJCD_JKDLNCIIMMF_OFFSET))(this);
		}

	};
