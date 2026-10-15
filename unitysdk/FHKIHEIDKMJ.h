#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCFOLLEKPGG;
namespace RPG::Client::BlindBox::Pool { class IPoolContents; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPetRepository; }

#define FHKIHEIDKMJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15781380)
#define FHKIHEIDKMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15781320)

inline static constexpr unsigned int FHKIHEIDKMJ_TypeDefinitionIndex = 74939;

	class FHKIHEIDKMJ : public ::System::Object
	{
	public:
		::KCFOLLEKPGG* ABOFCNEHLKK; // 0x10
		::System::Void _ctor(::RPG::Client::Pet::BlindBox::IBlindBoxPetRepository* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPetRepository*))((::PBYTE)hIl2Cpp + FHKIHEIDKMJ_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Pool::IPoolContents* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::RPG::Client::BlindBox::Pool::IPoolContents*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHKIHEIDKMJ_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
