#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FAPHHBABPCF;
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }

#define FAPHHBABPCF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1568A880)
#define FAPHHBABPCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1568A940)

inline static constexpr unsigned int FAPHHBABPCF_TypeDefinitionIndex = 75393;

	class FAPHHBABPCF : public ::System::Object
	{
	public:
		::RPG::Client::TextID NMAHGFAPENI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPHHBABPCF_CTOR_OFFSET))(this);
		}

		static ::FAPHHBABPCF* BPLPBPMEODA(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
		{
			return ((::FAPHHBABPCF*(*)(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + FAPHHBABPCF_BPLPBPMEODA_OFFSET))(a1);
		}

	};
