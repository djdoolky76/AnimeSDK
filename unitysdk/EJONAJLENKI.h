#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLLEONBDOMJ.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
class AGCPAMNLCGN;
class EJONAJLENKI;

#define EJONAJLENKI_APINEOJPFFG_OFFSET UNITYSDK_OFFSET(0x154EBC20)
#define EJONAJLENKI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x154EB870)
#define EJONAJLENKI_CTOR_OFFSET UNITYSDK_OFFSET(0x154EBF60)
#define EJONAJLENKI_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x154EB970)
#define EJONAJLENKI_IMIGNGADBHI_OFFSET UNITYSDK_OFFSET(0x154EBDF0)

inline static constexpr unsigned int EJONAJLENKI_TypeDefinitionIndex = 77996;

	class EJONAJLENKI : public ::BLLEONBDOMJ
	{
	public:
		::System::Int32 AIKAPJELHNK; // 0x28
		::RPG::GameCore::CakeRaceProperty NOIGFGJJDLB; // 0x2C
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
