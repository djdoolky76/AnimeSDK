#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
namespace RPG::Client::Pet { class IPetInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IALFNMFNEJB_CTOR_OFFSET UNITYSDK_OFFSET(0x15E0CB60)
#define IALFNMFNEJB_DFACNDFPDHK_OFFSET UNITYSDK_OFFSET(0x15E0D0A0)
#define IALFNMFNEJB_FBPGMELOEKN_OFFSET UNITYSDK_OFFSET(0x15E0CFB0)
#define IALFNMFNEJB_FJDONKCCMCM_OFFSET UNITYSDK_OFFSET(0x15E0D7B0)
#define IALFNMFNEJB_IFHBHIHHFBM_OFFSET UNITYSDK_OFFSET(0x15E0CEA0)

inline static constexpr unsigned int IALFNMFNEJB_TypeDefinitionIndex = 74904;

	class IALFNMFNEJB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Pet::BlindBox::BlindBoxPetKind, ::System::UInt32>* KCKKPNGFKGO; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Pet::BlindBox::BlindBoxPetKind, ::System::Boolean>* KNCDOAKBFJH; // 0x18
		::System::UInt32 NPOOJAEMDLJ; // 0x20
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IALFNMFNEJB_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IFHBHIHHFBM(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + IALFNMFNEJB_IFHBHIHHFBM_OFFSET))(this, a1);
		}

		::System::UInt32 FBPGMELOEKN(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + IALFNMFNEJB_FBPGMELOEKN_OFFSET))(this, a1);
		}

		::System::UInt32 DFACNDFPDHK(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*))((::PBYTE)hIl2Cpp + IALFNMFNEJB_DFACNDFPDHK_OFFSET))(this, a1);
		}

		::System::UInt32 FJDONKCCMCM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IALFNMFNEJB_FJDONKCCMCM_OFFSET))(this);
		}

	};
