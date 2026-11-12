#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/APCGKBOPGJL.h"
class IPFNLCFACJH;
class MGMOCEDAKBA;
class OADLFAMLGPP;

#define GBLDMBDDIFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16887350)
#define GBLDMBDDIFJ_NMICMPPACIH_OFFSET UNITYSDK_OFFSET(0x168873E0)

inline static constexpr unsigned int GBLDMBDDIFJ_TypeDefinitionIndex = 63982;

	class GBLDMBDDIFJ : public ::System::Object
	{
	public:
		::MGMOCEDAKBA* PHODDKHPFEC; // 0x10
		::IPFNLCFACJH* DCJCONLGILD; // 0x18
		::System::Void _ctor(::IPFNLCFACJH* a1, ::MGMOCEDAKBA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IPFNLCFACJH*, ::MGMOCEDAKBA*))((::PBYTE)hIl2Cpp + GBLDMBDDIFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::OADLFAMLGPP* NMICMPPACIH(::APCGKBOPGJL a1, ::System::UInt32 a2)
		{
			return ((::OADLFAMLGPP*(*)(::PVOID, ::APCGKBOPGJL, ::System::UInt32))((::PBYTE)hIl2Cpp + GBLDMBDDIFJ_NMICMPPACIH_OFFSET))(this, a1, a2);
		}

	};
