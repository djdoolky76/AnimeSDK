#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFKBHNOFEPI.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2; }

#define MGCCNIAPJIF_CTOR_OFFSET UNITYSDK_OFFSET(0xB90FE30)
#define MGCCNIAPJIF_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xB90FDB0)
#define MGCCNIAPJIF_IAONPECOKLB_OFFSET UNITYSDK_OFFSET(0xB90FD30)

inline static constexpr unsigned int MGCCNIAPJIF_TypeDefinitionIndex = 62791;

	class MGCCNIAPJIF : public ::System::Object
	{
	public:
		::RPG::Client::LRUCache_2<::BFKBHNOFEPI, ::RPG::Client::IAvatarSkinData*>* BDBOGJHLEIG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCCNIAPJIF_CTOR_OFFSET))(this);
		}

		::System::Boolean IAONPECOKLB(::BFKBHNOFEPI a1, ::RPG::Client::IAvatarSkinData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFKBHNOFEPI, ::RPG::Client::IAvatarSkinData*))((::PBYTE)hIl2Cpp + MGCCNIAPJIF_IAONPECOKLB_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP(::BFKBHNOFEPI a1, ::RPG::Client::IAvatarSkinData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BFKBHNOFEPI, ::RPG::Client::IAvatarSkinData*))((::PBYTE)hIl2Cpp + MGCCNIAPJIF_EGFCFCBHJJP_OFFSET))(this, a1, a2);
		}

	};
