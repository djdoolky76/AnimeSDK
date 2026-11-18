#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"

class AGJFDPBLDDF;
class MLFADFNMJFO;
class OABFNMFOABA;
namespace MoleMole { class CharacterScriptConfig; }
namespace System { class Action; }

#define LPKKPJLEOLN_BFCBJBBBAIN_OFFSET UNITYSDK_OFFSET(0x15E152B0)
#define LPKKPJLEOLN_EBDKFPJEMHO_OFFSET UNITYSDK_OFFSET(0x15E14200)
#define LPKKPJLEOLN_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x15E15020)
#define LPKKPJLEOLN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15E13FB0)
#define LPKKPJLEOLN_HGENKNFLMPH_OFFSET UNITYSDK_OFFSET(0x15E14120)
#define LPKKPJLEOLN_JEEGALAIAJJ_OFFSET UNITYSDK_OFFSET(0x15E14FD0)
#define LPKKPJLEOLN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15E15310)
#define LPKKPJLEOLN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15E14090)
#define LPKKPJLEOLN_ODADFHDCLFK_OFFSET UNITYSDK_OFFSET(0x15E141F0)
#define LPKKPJLEOLN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15E13D50)
#define LPKKPJLEOLN__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E14000)
#define LPKKPJLEOLN__CTOR_OFFSET UNITYSDK_OFFSET(0x15E14080)

inline static constexpr unsigned int LPKKPJLEOLN_TypeDefinitionIndex = 41587;

class LPKKPJLEOLN : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x16; // 0x0
	::System::Action* CGGLMEEHLKB; // 0x48
	::MLFADFNMJFO* CGLOHJAMFJF; // 0x50
	::AGJFDPBLDDF* OHKOHPDDEKJ; // 0x58
	::AGJFDPBLDDF* FPLFFMMBBMI; // 0x60
	::AGJFDPBLDDF* OOPMMNLGNLJ; // 0x68
	::OABFNMFOABA* IPHMGBODMFO; // 0x70
	::System::Action* ILPGLDGAONI; // 0x78
	::AGJFDPBLDDF* CGLGOAADIME; // 0x80
	::System::Single DFPJBAAHOBN; // 0x88
	::MoleMole::Config::CharacterAliveState FIKBFEADJHP; // 0x8C
	::System::Boolean KGIECPFHJBO; // 0x90
	::System::Boolean CJEKCIICJPE; // 0x91
	::System::Boolean GALDBOOCHNE; // 0x92
	::System::Boolean BFHENKLEAMO; // 0x93
	::System::Int32 OHCLCKPODML; // 0x94
	::System::Single EPKIEEGFEBK; // 0x98
	::System::Int32 KKOHPPEPLFJ; // 0x9C
	::System::Single LLDGCMJBMPA; // 0xA0
	::System::Boolean DBIKCHNAKEI; // 0xA4
	::System::Boolean LDCDPHAICDE; // 0xA5
	::System::Byte _padding0[0x2];
	::System::UInt32 PHPEADCIGEH; // 0xA8

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPKKPJLEOLN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKKPJLEOLN__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKKPJLEOLN_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKKPJLEOLN_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKKPJLEOLN_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Single HGENKNFLMPH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKKPJLEOLN_HGENKNFLMPH_OFFSET))(this);
	}

	::MoleMole::Config::CharacterAliveState ODADFHDCLFK()
	{
		return ((::MoleMole::Config::CharacterAliveState(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKKPJLEOLN_ODADFHDCLFK_OFFSET))(this);
	}

	::System::Void EBDKFPJEMHO(::MoleMole::Config::CharacterAliveState EGEGIMGMJHN, ::System::Boolean CBEMIBDPPNA, ::System::Boolean DEHMJBAMPFN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CharacterAliveState, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LPKKPJLEOLN_EBDKFPJEMHO_OFFSET))(this, EGEGIMGMJHN, CBEMIBDPPNA, DEHMJBAMPFN);
	}

	::System::Void JEEGALAIAJJ(::MoleMole::Config::CharacterAliveState EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CharacterAliveState))((::PBYTE)hIl2Cpp + LPKKPJLEOLN_JEEGALAIAJJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GALGFCPKMGC(::MoleMole::CharacterScriptConfig* COKJFBMINAC, ::System::Boolean IGFFAPAFDOJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterScriptConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + LPKKPJLEOLN_GALGFCPKMGC_OFFSET))(this, COKJFBMINAC, IGFFAPAFDOJ);
	}

	::System::Void BFCBJBBBAIN(::MoleMole::Config::CharacterAliveState EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CharacterAliveState))((::PBYTE)hIl2Cpp + LPKKPJLEOLN_BFCBJBBBAIN_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::LPKKPJLEOLN* JFDOOELFAOA()
	{
		return ((::LPKKPJLEOLN*(*)())((::PBYTE)hIl2Cpp + LPKKPJLEOLN_JFDOOELFAOA_OFFSET))();
	}
};
