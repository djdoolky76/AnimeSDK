#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LevelShootGameConfig_WaveGroupStartCondition.h"
#include "unitysdk/OAELENKFJDC_GDHBPOBLFFB.h"
#include "unitysdk/System/Object.h"

class KDDJALBGMBL;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class LevelShootGameConfig_MonsterWaveGroup; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OAELENKFJDC_ABCEDFCKHKF_OFFSET UNITYSDK_OFFSET(0x10054470)
#define OAELENKFJDC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x10055710)
#define OAELENKFJDC_DAJBGENFGAA_OFFSET UNITYSDK_OFFSET(0x10053570)
#define OAELENKFJDC_EGIPKBAMLKC_OFFSET UNITYSDK_OFFSET(0x100522A0)
#define OAELENKFJDC_GGILDCAPMJC_OFFSET UNITYSDK_OFFSET(0x100549A0)
#define OAELENKFJDC_HGBFLAHNLII_OFFSET UNITYSDK_OFFSET(0x10053960)
#define OAELENKFJDC_HKACAMJMKGA_OFFSET UNITYSDK_OFFSET(0x10052230)
#define OAELENKFJDC_IAOEPPBDCLK_OFFSET UNITYSDK_OFFSET(0x10053050)
#define OAELENKFJDC_ICAKIIBBOBI_OFFSET UNITYSDK_OFFSET(0x10053220)
#define OAELENKFJDC_JAKHPJNJDCF_OFFSET UNITYSDK_OFFSET(0x10053920)
#define OAELENKFJDC_JPHDGIHABAJ_OFFSET UNITYSDK_OFFSET(0x10054EE0)
#define OAELENKFJDC_LFNAMFKAPBN_OFFSET UNITYSDK_OFFSET(0x10053000)
#define OAELENKFJDC_MCJCCJOEKGN_OFFSET UNITYSDK_OFFSET(0x10054F40)
#define OAELENKFJDC_MHKOKGFLLKO_OFFSET UNITYSDK_OFFSET(0x10052650)
#define OAELENKFJDC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x100530F0)
#define OAELENKFJDC_OEAIDFEIBBA_OFFSET UNITYSDK_OFFSET(0x10053090)
#define OAELENKFJDC_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x10054F80)
#define OAELENKFJDC_ONIOLCDJMNO_OFFSET UNITYSDK_OFFSET(0x10052B10)
#define OAELENKFJDC__CTOR_OFFSET UNITYSDK_OFFSET(0x10052080)

inline static constexpr unsigned int OAELENKFJDC_TypeDefinitionIndex = 56199;

class OAELENKFJDC : public ::System::Object
{
public:
	// static const ::System::String* JDNACEDILKG; // 0x0
	// static const ::System::String* BHBNJAFLDEB; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KDDJALBGMBL*>* FJNLAHEJONF; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* CLPCFLLPCIP; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* KPHMEHNFCJJ; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* FLAALBMGLFE; // 0x28
	::System::Collections::Generic::List_1<::OAELENKFJDC*>* GHBBIPADHDP; // 0x30
	::MoleMole::Config::LevelShootGameConfig_MonsterWaveGroup* IBDADOPEBFC; // 0x38
	::MoleMole::Config::LevelShootGameConfig_WaveGroupStartCondition KANJODNFFOI; // 0x40
	::System::Single HACJFKBLODH; // 0x44
	::System::Single KFHLBFHOBDE; // 0x48
	::System::Boolean OLEOPNHALGB; // 0x4C
	::System::Boolean DBOOIOLEPOJ; // 0x4D
	::System::Boolean HCGMJFAENPF; // 0x4E
	::System::Boolean AJFFIBBGBCG; // 0x4F
	::System::Single DLBFEAOALML; // 0x50
	::System::Boolean CAGKGAPOOOM; // 0x54
	::System::Boolean PLGBOGHKOIP; // 0x55
	::System::Byte _padding0[0x2];
	::OAELENKFJDC_GDHBPOBLFFB ANKELKLNAKF; // 0x58
	::System::Int32 LFAEBNBAGLK; // 0x5C
	::System::Single FBDJOGJIOGJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAELENKFJDC__CTOR_OFFSET))(this);
	}

	::System::Boolean HKACAMJMKGA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAELENKFJDC_HKACAMJMKGA_OFFSET))(this);
	}

	::System::Void MHKOKGFLLKO(::MoleMole::Battle::Entity* FINEANOLAPH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OAELENKFJDC_MHKOKGFLLKO_OFFSET))(this, FINEANOLAPH);
	}

	::System::Void ONIOLCDJMNO(::MoleMole::Battle::Entity* FINEANOLAPH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OAELENKFJDC_ONIOLCDJMNO_OFFSET))(this, FINEANOLAPH);
	}

	::System::Void LFNAMFKAPBN(::MoleMole::Battle::Entity* FINEANOLAPH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OAELENKFJDC_LFNAMFKAPBN_OFFSET))(this, FINEANOLAPH);
	}

	::System::Int32 IAOEPPBDCLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAELENKFJDC_IAOEPPBDCLK_OFFSET))(this);
	}

	::System::Void OEAIDFEIBBA(::System::Boolean FCNIJNCBAAD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OAELENKFJDC_OEAIDFEIBBA_OFFSET))(this, FCNIJNCBAAD);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAELENKFJDC_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Int32 EGIPKBAMLKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAELENKFJDC_EGIPKBAMLKC_OFFSET))(this);
	}

	::System::Void ICAKIIBBOBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAELENKFJDC_ICAKIIBBOBI_OFFSET))(this);
	}

	::System::Void DAJBGENFGAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAELENKFJDC_DAJBGENFGAA_OFFSET))(this);
	}

	::System::Void HGBFLAHNLII(::System::Int32 GIAOKGFENJD, ::System::Int32 GKIDOAOBALH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OAELENKFJDC_HGBFLAHNLII_OFFSET))(this, GIAOKGFENJD, GKIDOAOBALH);
	}

	::System::Void ABCEDFCKHKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAELENKFJDC_ABCEDFCKHKF_OFFSET))(this);
	}

	::System::Void GGILDCAPMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAELENKFJDC_GGILDCAPMJC_OFFSET))(this);
	}

	::System::Void JPHDGIHABAJ(::System::Single DLBFEAOALML)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OAELENKFJDC_JPHDGIHABAJ_OFFSET))(this, DLBFEAOALML);
	}

	::System::Boolean MCJCCJOEKGN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAELENKFJDC_MCJCCJOEKGN_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OAELENKFJDC_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean JAKHPJNJDCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAELENKFJDC_JAKHPJNJDCF_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 KMMGKJPAOMF, ::MoleMole::Config::LevelShootGameConfig_WaveGroupStartCondition KANJODNFFOI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::LevelShootGameConfig_WaveGroupStartCondition))((::PBYTE)hIl2Cpp + OAELENKFJDC_BBOMJDBNHIC_OFFSET))(this, KMMGKJPAOMF, KANJODNFFOI);
	}
};
