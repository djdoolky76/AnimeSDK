#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLLEONBDOMJ.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
class AGCPAMNLCGN;
class EJONAJLENKI;

#define EJONAJLENKI_APINEOJPFFG_OFFSET UNITYSDK_OFFSET(0x154F78F0)
#define EJONAJLENKI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x154F7540)
#define EJONAJLENKI_CTOR_OFFSET UNITYSDK_OFFSET(0x154F7C30)
#define EJONAJLENKI_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x154F7640)
#define EJONAJLENKI_IMIGNGADBHI_OFFSET UNITYSDK_OFFSET(0x154F7AC0)

	class EJONAJLENKI : public ::BLLEONBDOMJ
	{
	public:
		::RPG::GameCore::CakeRaceProperty NOIGFGJJDLB; // 0x28
		::System::Int32 AIKAPJELHNK; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJONAJLENKI_CTOR_OFFSET))(this);
		}

		static ::EJONAJLENKI* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::System::UInt64 a2, ::RPG::GameCore::CakeRaceProperty a3, ::System::Int32 a4)
		{
			return ((::EJONAJLENKI*(*)(::AGCPAMNLCGN*, ::System::UInt64, ::RPG::GameCore::CakeRaceProperty, ::System::Int32))((::PBYTE)hIl2Cpp + EJONAJLENKI_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void GAILDDCMCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJONAJLENKI_GAILDDCMCHP_OFFSET))(this);
		}

		::System::Void APINEOJPFFG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EJONAJLENKI_APINEOJPFFG_OFFSET))(this, a1);
		}

		::System::Void IMIGNGADBHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJONAJLENKI_IMIGNGADBHI_OFFSET))(this);
		}

	};
