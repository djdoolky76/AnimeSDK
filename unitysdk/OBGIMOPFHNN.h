#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionRemoveBuff; }

#define OBGIMOPFHNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7CADD0)
#define OBGIMOPFHNN_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C7CADE0)

inline static constexpr unsigned int OBGIMOPFHNN_TypeDefinitionIndex = 37392;

	class OBGIMOPFHNN : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionRemoveBuff* DKGLLLPNFOB; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionRemoveBuff* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionRemoveBuff*))((::PBYTE)hIl2Cpp + OBGIMOPFHNN_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + OBGIMOPFHNN_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
