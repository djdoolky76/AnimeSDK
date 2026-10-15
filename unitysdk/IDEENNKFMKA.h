#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
namespace RPG::Client { class BattleGamePhase; }
namespace System { class Object; }

#define IDEENNKFMKA_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0x15EC0B10)
#define IDEENNKFMKA_BMEDNBHJKLE_OFFSET UNITYSDK_OFFSET(0x15EC1300)
#define IDEENNKFMKA_BOLAEGNINAP_OFFSET UNITYSDK_OFFSET(0x15EC27E0)
#define IDEENNKFMKA_CTOR_OFFSET UNITYSDK_OFFSET(0x15EC2910)
#define IDEENNKFMKA_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x15EC0AC0)
#define IDEENNKFMKA_DCNBLEDBPCI_OFFSET UNITYSDK_OFFSET(0x15EC1230)
#define IDEENNKFMKA_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0x15EC10F0)
#define IDEENNKFMKA_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x15EC0D80)
#define IDEENNKFMKA_GIMIJMFDHAC_OFFSET UNITYSDK_OFFSET(0x15EC1B90)
#define IDEENNKFMKA_GNJDDHCBFCI_OFFSET UNITYSDK_OFFSET(0x15EC2540)
#define IDEENNKFMKA_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0x15EC12B0)
#define IDEENNKFMKA_KLGPCGNJNGJ_OFFSET UNITYSDK_OFFSET(0x15EC13B0)
#define IDEENNKFMKA_MEACOKEBFCD_OFFSET UNITYSDK_OFFSET(0x15EC1520)
#define IDEENNKFMKA_MFBJFOANHMB_OFFSET UNITYSDK_OFFSET(0x15EC0E50)
#define IDEENNKFMKA_ONAOHDOJFCM_OFFSET UNITYSDK_OFFSET(0x15EC0EC0)

	class IDEENNKFMKA : public ::LJKHPOHKIIF
	{
	public:
		::RPG::Client::BattleGamePhase* NOHNKAIALPJ; // 0x20
		::System::Boolean MNGPPIDHNPI; // 0x28
		::System::Boolean FJMFKJEIOIO; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEENNKFMKA_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEENNKFMKA_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEENNKFMKA_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEENNKFMKA_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEENNKFMKA_GNLKPJHAKHM_OFFSET))(this);
		}

		::System::Void BMEDNBHJKLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEENNKFMKA_BMEDNBHJKLE_OFFSET))(this);
		}

		::System::Void AJLCJJOOOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEENNKFMKA_AJLCJJOOOOE_OFFSET))(this);
		}

		::System::Void KLGPCGNJNGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEENNKFMKA_KLGPCGNJNGJ_OFFSET))(this);
		}

		::System::Void MFBJFOANHMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEENNKFMKA_MFBJFOANHMB_OFFSET))(this);
		}

		::System::Void MEACOKEBFCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEENNKFMKA_MEACOKEBFCD_OFFSET))(this);
		}

		::System::Boolean GNJDDHCBFCI(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IDEENNKFMKA_GNJDDHCBFCI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GIMIJMFDHAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEENNKFMKA_GIMIJMFDHAC_OFFSET))(this);
		}

		::System::Void BOLAEGNINAP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDEENNKFMKA_BOLAEGNINAP_OFFSET))(this, a1);
		}

		::System::Void ONAOHDOJFCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEENNKFMKA_ONAOHDOJFCM_OFFSET))(this);
		}

		::System::Void DCNBLEDBPCI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IDEENNKFMKA_DCNBLEDBPCI_OFFSET))(this, a1);
		}

	};
