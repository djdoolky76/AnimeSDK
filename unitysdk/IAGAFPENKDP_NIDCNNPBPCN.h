#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IAGAFPENKDP_NIDCNNPBPCN_COBBFNDGGKL_OFFSET UNITYSDK_OFFSET(0x19420B50)
#define IAGAFPENKDP_NIDCNNPBPCN_FOLOCMDHBDA_OFFSET UNITYSDK_OFFSET(0x19420B10)
#define IAGAFPENKDP_NIDCNNPBPCN_NIFLKKHKHOJ_OFFSET UNITYSDK_OFFSET(0x19420AD0)

inline static constexpr unsigned int IAGAFPENKDP_NIDCNNPBPCN_TypeDefinitionIndex = 65023;

	class IAGAFPENKDP_NIDCNNPBPCN : public ::System::Object
	{
	public:
		static ::System::UInt32 NIFLKKHKHOJ()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + IAGAFPENKDP_NIDCNNPBPCN_NIFLKKHKHOJ_OFFSET))();
		}

		static ::System::UInt32 FOLOCMDHBDA()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + IAGAFPENKDP_NIDCNNPBPCN_FOLOCMDHBDA_OFFSET))();
		}

		static ::System::UInt32 COBBFNDGGKL()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + IAGAFPENKDP_NIDCNNPBPCN_COBBFNDGGKL_OFFSET))();
		}

	};
