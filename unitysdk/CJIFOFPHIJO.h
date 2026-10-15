#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABOIDFLIHMB;
namespace Proto { class Item; }
namespace RPG::Client::BlindBox::Pool { class BlindBoxOpenResultPet; }
namespace RPG::Client::BlindBox::Pool { class IBlindBoxOpenResult; }
namespace RPG::Client::Pet { class IPetInstanceRepository; }

#define CJIFOFPHIJO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD20BCE0)
#define CJIFOFPHIJO_CTOR_OFFSET UNITYSDK_OFFSET(0xD20BC90)
#define CJIFOFPHIJO_JPNENBMFGJI_OFFSET UNITYSDK_OFFSET(0xD20C720)

inline static constexpr unsigned int CJIFOFPHIJO_TypeDefinitionIndex = 74953;

	class CJIFOFPHIJO : public ::System::Object
	{
	public:
		::RPG::Client::Pet::IPetInstanceRepository* EBDCGPKDBIK; // 0x10
		::System::Single DPFFHBGECKM; // 0x18
		::System::Single GJLPMPKOCBB; // 0x1C
		::System::Void _ctor(::RPG::Client::Pet::IPetInstanceRepository* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::IPetInstanceRepository*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CJIFOFPHIJO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::BlindBox::Pool::IBlindBoxOpenResult* BPLPBPMEODA(::ABOIDFLIHMB* a1)
		{
			return ((::RPG::Client::BlindBox::Pool::IBlindBoxOpenResult*(*)(::PVOID, ::ABOIDFLIHMB*))((::PBYTE)hIl2Cpp + CJIFOFPHIJO_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Pool::BlindBoxOpenResultPet* JPNENBMFGJI(::Proto::Item* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::BlindBox::Pool::BlindBoxOpenResultPet*(*)(::PVOID, ::Proto::Item*, ::System::Boolean))((::PBYTE)hIl2Cpp + CJIFOFPHIJO_JPNENBMFGJI_OFFSET))(this, a1, a2);
		}

	};
