#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHIGECGCOPG.h"
#include "unitysdk/GBAPOEMJBNM.h"
#include "unitysdk/IKOKJNJLOGG.h"
#include "unitysdk/IMBMPPCPHOD.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class HAOEADBJPDF;
class LJEEPGADBCD;
class MDCJKFCJOHO;
namespace MoleMole::Config { class HollowChessboardUvAnimConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define HENPFDDJKIM_DJACPFIONDE_OFFSET UNITYSDK_OFFSET(0x16F2E840)
#define HENPFDDJKIM_JDAHNHLAAGJ_OFFSET UNITYSDK_OFFSET(0x16F2F830)
#define HENPFDDJKIM_JHKGDEOMIAC_OFFSET UNITYSDK_OFFSET(0x16F2F2E0)
#define HENPFDDJKIM_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x16F2E7F0)
#define HENPFDDJKIM_MDMHCKNLDBB_OFFSET UNITYSDK_OFFSET(0x16F2E9A0)
#define HENPFDDJKIM_NDPMGDBCICG_1_OFFSET UNITYSDK_OFFSET(0x16F2F4D0)
#define HENPFDDJKIM_NDPMGDBCICG_2_OFFSET UNITYSDK_OFFSET(0x16F2F750)
#define HENPFDDJKIM_NDPMGDBCICG_OFFSET UNITYSDK_OFFSET(0x16F2F330)
#define HENPFDDJKIM__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2E650)

inline static constexpr unsigned int HENPFDDJKIM_TypeDefinitionIndex = 90945;

class HENPFDDJKIM : public ::GBAPOEMJBNM
{
public:
	::LJEEPGADBCD* JBFDADGOJNK; // 0x28
	::System::Collections::Generic::List_1<::MDCJKFCJOHO*>* AJEELCLJICI; // 0x30
	::BHIGECGCOPG PNACFNLHOEB; // 0x38

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell LFEONIKJIAA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + HENPFDDJKIM__CTOR_OFFSET))(this, LFEONIKJIAA);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENPFDDJKIM_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void MDMHCKNLDBB(::IMBMPPCPHOD& FFDHBBHAANK, ::System::Single PBCAAADNEPK, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Void(*)(::PVOID, ::IMBMPPCPHOD&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + HENPFDDJKIM_MDMHCKNLDBB_OFFSET))(this, FFDHBBHAANK, PBCAAADNEPK, EKPEBNCLJPM);
	}

	::System::Void DJACPFIONDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENPFDDJKIM_DJACPFIONDE_OFFSET))(this);
	}

	::System::Boolean JHKGDEOMIAC(::System::Int32 AKGGKGEPJLP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HENPFDDJKIM_JHKGDEOMIAC_OFFSET))(this, AKGGKGEPJLP);
	}

	::HAOEADBJPDF* NDPMGDBCICG(::IKOKJNJLOGG ACBBDMFMFNE)
	{
		return ((::HAOEADBJPDF*(*)(::PVOID, ::IKOKJNJLOGG))((::PBYTE)hIl2Cpp + HENPFDDJKIM_NDPMGDBCICG_OFFSET))(this, ACBBDMFMFNE);
	}

	::HAOEADBJPDF* NDPMGDBCICG_1(::System::String* MCOHLHMKLIP, ::System::Int32 AKGGKGEPJLP, ::UnityEngine::Events::UnityAction_1<::System::Boolean>* PABLEDCGDGM)
	{
		return ((::HAOEADBJPDF*(*)(::PVOID, ::System::String*, ::System::Int32, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + HENPFDDJKIM_NDPMGDBCICG_1_OFFSET))(this, MCOHLHMKLIP, AKGGKGEPJLP, PABLEDCGDGM);
	}

	::System::Boolean JDAHNHLAAGJ(::HAOEADBJPDF* PHHDHIBOCKA, ::System::Int32 AKGGKGEPJLP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HAOEADBJPDF*, ::System::Int32))((::PBYTE)hIl2Cpp + HENPFDDJKIM_JDAHNHLAAGJ_OFFSET))(this, PHHDHIBOCKA, AKGGKGEPJLP);
	}

	::HAOEADBJPDF* NDPMGDBCICG_2(::MoleMole::Config::HollowChessboardUvAnimConfig* GHIFBFMJCMN, ::System::Int32 AKGGKGEPJLP, ::UnityEngine::Events::UnityAction_1<::System::Boolean>* PABLEDCGDGM)
	{
		return ((::HAOEADBJPDF*(*)(::PVOID, ::MoleMole::Config::HollowChessboardUvAnimConfig*, ::System::Int32, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + HENPFDDJKIM_NDPMGDBCICG_2_OFFSET))(this, GHIFBFMJCMN, AKGGKGEPJLP, PABLEDCGDGM);
	}
};
