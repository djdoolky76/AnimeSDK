#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
class COIEOCDIBBP;
namespace RPG::Client::Pet { class IPetInstanceRepository; }
namespace RPG::Client::Pet { class IPetLineup; }
namespace System { template <typename T> class WeakReference_1; }

#define IEKJLPDEGMM_BFKMEJGGPHL_OFFSET UNITYSDK_OFFSET(0x15EF5380)
#define IEKJLPDEGMM_CTOR_OFFSET UNITYSDK_OFFSET(0x15EF5260)
#define IEKJLPDEGMM_NLCDGIPGFDJ_OFFSET UNITYSDK_OFFSET(0x15EF5310)
#define IEKJLPDEGMM_OADDJIHHFLD_OFFSET UNITYSDK_OFFSET(0x15EF5620)

inline static constexpr unsigned int IEKJLPDEGMM_TypeDefinitionIndex = 75708;

	class IEKJLPDEGMM : public ::System::Object
	{
	public:
		::System::WeakReference_1<::RPG::Client::Pet::IPetInstanceRepository*>* NMPIJGKPFIK; // 0x10
		::System::Void _ctor(::RPG::Client::Pet::IPetInstanceRepository* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::IPetInstanceRepository*))((::PBYTE)hIl2Cpp + IEKJLPDEGMM_CTOR_OFFSET))(this, a1);
		}

		::COIEOCDIBBP* NLCDGIPGFDJ()
		{
			return ((::COIEOCDIBBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKJLPDEGMM_NLCDGIPGFDJ_OFFSET))(this);
		}

		::COIEOCDIBBP* BFKMEJGGPHL(::RPG::Client::Pet::PetInstanceIdentifier a1)
		{
			return ((::COIEOCDIBBP*(*)(::PVOID, ::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + IEKJLPDEGMM_BFKMEJGGPHL_OFFSET))(this, a1);
		}

		::COIEOCDIBBP* OADDJIHHFLD(::RPG::Client::Pet::IPetLineup* a1)
		{
			return ((::COIEOCDIBBP*(*)(::PVOID, ::RPG::Client::Pet::IPetLineup*))((::PBYTE)hIl2Cpp + IEKJLPDEGMM_OADDJIHHFLD_OFFSET))(this, a1);
		}

	};
