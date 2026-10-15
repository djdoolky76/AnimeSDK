#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFALFIPEHJH;
namespace RPG::Client::ParkourGame { class ParkourGameLevelConfigAsset; }

#define LEJFDHMDDKO_CTOR_OFFSET UNITYSDK_OFFSET(0xB658430)
#define LEJFDHMDDKO_DFHKOFOABHE_OFFSET UNITYSDK_OFFSET(0xB6583B0)
#define LEJFDHMDDKO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB657D70)
#define LEJFDHMDDKO_FCJEIPFNIHO_OFFSET UNITYSDK_OFFSET(0xB658250)
#define LEJFDHMDDKO_FGCNAECLBHG_OFFSET UNITYSDK_OFFSET(0xB658040)
#define LEJFDHMDDKO_GCIPNPIHBHO_OFFSET UNITYSDK_OFFSET(0xB6583D0)
#define LEJFDHMDDKO_GEFHMCEFLDJ_OFFSET UNITYSDK_OFFSET(0xB658110)
#define LEJFDHMDDKO_GET_MAXSPEEDUPPOINT_OFFSET UNITYSDK_OFFSET(0xB6583C0)
#define LEJFDHMDDKO_GIJHHNIKBKE_OFFSET UNITYSDK_OFFSET(0xB6580C0)
#define LEJFDHMDDKO_HGDIFJANLFP_OFFSET UNITYSDK_OFFSET(0xB657DC0)
#define LEJFDHMDDKO_HGOLALIEDHH_OFFSET UNITYSDK_OFFSET(0xB657E00)
#define LEJFDHMDDKO_HHODMOCNFOA_OFFSET UNITYSDK_OFFSET(0xB658200)
#define LEJFDHMDDKO_KAJOGMGAAHO_OFFSET UNITYSDK_OFFSET(0xB657F70)
#define LEJFDHMDDKO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB657CD0)
#define LEJFDHMDDKO_MKIIAFAGEMC_OFFSET UNITYSDK_OFFSET(0xB657F10)
#define LEJFDHMDDKO_NEHNOLFGDEE_OFFSET UNITYSDK_OFFSET(0xB658360)

	class LEJFDHMDDKO : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* KFLHMMBABOI; // 0x10
		::CFALFIPEHJH* PFECGMGNMEN; // 0x18
		::System::Single JLGNNGFOMOC; // 0x20
		::System::Int32 FGALMBGIMLH; // 0x24
		::System::Int32 FFAFCOJLKAL; // 0x28
		::System::Single KCOPOICCOFE; // 0x2C
		::System::Int32 EMMBDOPPIMM; // 0x30
		::System::Single PJDBGDBGBCA; // 0x34
		::System::Int32 _MaxSpeedUpPoint_k__BackingField; // 0x38
		::System::Int32 LNEKDNBJPHB; // 0x3C
		::System::Int32 CCLGEPADMJN; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFDHMDDKO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::CFALFIPEHJH* a1, ::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CFALFIPEHJH*, ::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset*))((::PBYTE)hIl2Cpp + LEJFDHMDDKO_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFDHMDDKO_DISPOSE_OFFSET))(this);
		}

		::System::Void HGDIFJANLFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFDHMDDKO_HGDIFJANLFP_OFFSET))(this);
		}

		::System::Boolean HGOLALIEDHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFDHMDDKO_HGOLALIEDHH_OFFSET))(this);
		}

		::System::Boolean KAJOGMGAAHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFDHMDDKO_KAJOGMGAAHO_OFFSET))(this);
		}

		::System::Boolean FGCNAECLBHG(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LEJFDHMDDKO_FGCNAECLBHG_OFFSET))(this, a1);
		}

		::System::Void GIJHHNIKBKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFDHMDDKO_GIJHHNIKBKE_OFFSET))(this);
		}

		::System::Void GEFHMCEFLDJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LEJFDHMDDKO_GEFHMCEFLDJ_OFFSET))(this, a1);
		}

		::System::Void HHODMOCNFOA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LEJFDHMDDKO_HHODMOCNFOA_OFFSET))(this, a1);
		}

		::System::Void FCJEIPFNIHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFDHMDDKO_FCJEIPFNIHO_OFFSET))(this);
		}

		::System::Boolean MKIIAFAGEMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFDHMDDKO_MKIIAFAGEMC_OFFSET))(this);
		}

		::System::Single NEHNOLFGDEE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFDHMDDKO_NEHNOLFGDEE_OFFSET))(this);
		}

		::System::Int32 DFHKOFOABHE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFDHMDDKO_DFHKOFOABHE_OFFSET))(this);
		}

		::System::Int32 get_MaxSpeedUpPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFDHMDDKO_GET_MAXSPEEDUPPOINT_OFFSET))(this);
		}

		::System::Single GCIPNPIHBHO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFDHMDDKO_GCIPNPIHBHO_OFFSET))(this);
		}

	};
