#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetSummonStateType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::Pet { class IPetInstanceRepository; }
namespace System { class WeakReference; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IFMEAICPKCI_AGHCACKCDAM_OFFSET UNITYSDK_OFFSET(0x15F249A0)
#define IFMEAICPKCI_CTOR_OFFSET UNITYSDK_OFFSET(0x15F01530)
#define IFMEAICPKCI_DJEEPPHMNNI_OFFSET UNITYSDK_OFFSET(0x15F247E0)
#define IFMEAICPKCI_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x15F24790)

inline static constexpr unsigned int IFMEAICPKCI_TypeDefinitionIndex = 75711;

	class IFMEAICPKCI : public ::System::Object
	{
	public:
		::System::WeakReference* NMPIJGKPFIK; // 0x10
		::RPG::Client::Pet::PetInstanceIdentifier LNPLJMDCPEP; // 0x18
		::System::Void _ctor(::RPG::Client::Pet::PetInstanceIdentifier a1, ::RPG::Client::Pet::IPetInstanceRepository* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::PetInstanceIdentifier, ::RPG::Client::Pet::IPetInstanceRepository*))((::PBYTE)hIl2Cpp + IFMEAICPKCI_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Pet::PetSummonStateType JBIOGKPHKKC()
		{
			return ((::RPG::Client::Pet::PetSummonStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMEAICPKCI_JBIOGKPHKKC_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetInstance* DJEEPPHMNNI()
		{
			return ((::RPG::Client::Pet::IPetInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMEAICPKCI_DJEEPPHMNNI_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* AGHCACKCDAM()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMEAICPKCI_AGHCACKCDAM_OFFSET))(this);
		}

	};
