#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMIGPHLOLAJ_IHOPGDCAGIB.h"
#include "unitysdk/JMIGPHLOLAJ_PKOFKBLKFHI.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNNMCGCCDEA_POKPHBAFECA_OFFSET UNITYSDK_OFFSET(0x142B1540)
#define FNNMCGCCDEA__CTOR_OFFSET UNITYSDK_OFFSET(0x142B1490)

inline static constexpr unsigned int FNNMCGCCDEA_TypeDefinitionIndex = 69940;

class FNNMCGCCDEA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* ANOLDMFADEK; // 0x10

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* JBJFINAFFKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + FNNMCGCCDEA__CTOR_OFFSET))(this, JBJFINAFFKO);
	}

	::JMIGPHLOLAJ_IHOPGDCAGIB POKPHBAFECA(::JMIGPHLOLAJ_PKOFKBLKFHI BKMOOMDDMKG)
	{
		return ((::JMIGPHLOLAJ_IHOPGDCAGIB(*)(::PVOID, ::JMIGPHLOLAJ_PKOFKBLKFHI))((::PBYTE)hIl2Cpp + FNNMCGCCDEA_POKPHBAFECA_OFFSET))(this, BKMOOMDDMKG);
	}
};
