#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/APCGKBOPGJL.h"
class IPFNLCFACJH;
class MGMOCEDAKBA;
class OADLFAMLGPP;

#define GBLDMBDDIFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15951C70)
#define GBLDMBDDIFJ_NMICMPPACIH_OFFSET UNITYSDK_OFFSET(0x15951D00)

inline static constexpr unsigned int GBLDMBDDIFJ_TypeDefinitionIndex = 62569;

	class GBLDMBDDIFJ : public ::System::Object
	{
	public:
		::IPFNLCFACJH* DCJCONLGILD; // 0x10
		::MGMOCEDAKBA* PHODDKHPFEC; // 0x18
		::System::Void _ctor(::IPFNLCFACJH* a1, ::MGMOCEDAKBA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IPFNLCFACJH*, ::MGMOCEDAKBA*))((::PBYTE)hIl2Cpp + GBLDMBDDIFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::OADLFAMLGPP* NMICMPPACIH(::APCGKBOPGJL a1, ::System::UInt32 a2)
		{
			return ((::OADLFAMLGPP*(*)(::PVOID, ::APCGKBOPGJL, ::System::UInt32))((::PBYTE)hIl2Cpp + GBLDMBDDIFJ_NMICMPPACIH_OFFSET))(this, a1, a2);
		}

	};
