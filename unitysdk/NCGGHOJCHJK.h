#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKMOOLIDNKF.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/BIJKNADJCGJ.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
class JCADHFOKIHK;
class LPBPPDMJPNM;
class NFCIDHJGOIB;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define NCGGHOJCHJK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13133920)
#define NCGGHOJCHJK_ECGGDHEDJIG_OFFSET UNITYSDK_OFFSET(0x131337A0)
#define NCGGHOJCHJK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13134A80)
#define NCGGHOJCHJK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13133A30)
#define NCGGHOJCHJK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x131352B0)
#define NCGGHOJCHJK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13133A20)
#define NCGGHOJCHJK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x131350F0)
#define NCGGHOJCHJK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13134AE0)
#define NCGGHOJCHJK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13134FD0)
#define NCGGHOJCHJK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x13132BB0)
#define NCGGHOJCHJK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13133880)
#define NCGGHOJCHJK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13133AB0)
#define NCGGHOJCHJK__CTOR_OFFSET UNITYSDK_OFFSET(0x13134F30)

inline static constexpr unsigned int NCGGHOJCHJK_TypeDefinitionIndex = 40925;

class NCGGHOJCHJK : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x30
	::FOBNALGHPPD_1<::LPBPPDMJPNM*> INKMMKADDPI; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::LPBPPDMJPNM*> AOAHPPJADBP; // 0x58
	::System::Byte _padding1[0x18];
	::FOBNALGHPPD_1<::LPBPPDMJPNM*> CIEIGKLIHKO; // 0x78
	::System::Byte _padding2[0x18];
	::FOBNALGHPPD_1<::LPBPPDMJPNM*> JOFFOENJBIF; // 0x98
	::System::Byte _padding3[0x18];
	::NFCIDHJGOIB* OMMFLIHBBIH; // 0xB8
	::DKMOOLIDNKF OGFDEOPLJAH; // 0xC0
	::System::Boolean NDMDHNOFHKO; // 0xC4
	::System::Boolean OMJHJPPKCPF; // 0xC5
	::System::Boolean IFAHILIPLDB; // 0xC6

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGHOJCHJK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGHOJCHJK_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NCGGHOJCHJK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGHOJCHJK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGHOJCHJK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NCGGHOJCHJK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NCGGHOJCHJK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGHOJCHJK_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NCGGHOJCHJK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::BIJKNADJCGJ ECGGDHEDJIG(::LPBPPDMJPNM* CNEKKPNKCDC, ::MoleMole::EntityHandle PHHDHIBOCKA, ::JCADHFOKIHK* NBHJHFCMBLM)
	{
		return ((::BIJKNADJCGJ(*)(::PVOID, ::LPBPPDMJPNM*, ::MoleMole::EntityHandle, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + NCGGHOJCHJK_ECGGDHEDJIG_OFFSET))(this, CNEKKPNKCDC, PHHDHIBOCKA, NBHJHFCMBLM);
	}

	static ::NCGGHOJCHJK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NCGGHOJCHJK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NCGGHOJCHJK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NCGGHOJCHJK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NCGGHOJCHJK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NCGGHOJCHJK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NCGGHOJCHJK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
