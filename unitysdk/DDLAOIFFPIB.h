#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDCDAABGNNO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/JPAGJONBFID_OHLJJOCHIGO.h"

class FKNIEPCILLG;
class OCBJEIHKMBE;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DDLAOIFFPIB_CEHIJOHBMKA_OFFSET UNITYSDK_OFFSET(0x19A39700)
#define DDLAOIFFPIB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19A370E0)
#define DDLAOIFFPIB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A38C50)
#define DDLAOIFFPIB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19A371F0)
#define DDLAOIFFPIB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19A398F0)
#define DDLAOIFFPIB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19A371E0)
#define DDLAOIFFPIB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19A39790)
#define DDLAOIFFPIB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19A38CB0)
#define DDLAOIFFPIB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19A36FA0)
#define DDLAOIFFPIB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19A37270)
#define DDLAOIFFPIB_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x19A39690)
#define DDLAOIFFPIB__CTOR_OFFSET UNITYSDK_OFFSET(0x19A396F0)

inline static constexpr unsigned int DDLAOIFFPIB_TypeDefinitionIndex = 64332;

class DDLAOIFFPIB : public ::IDCDAABGNNO
{
public:
	::System::String* JKJFPHBBGKD; // 0x10
	::System::String* JLACMMKIELL; // 0x18
	::OCBJEIHKMBE* HCKPPGEALFC; // 0x20
	::System::String* BOOIDBEAFIK; // 0x28
	::System::String* FNAJPPAELFH; // 0x30
	::System::String* GOMMFOAPBLF; // 0x38
	::System::String* LMALIHFKFFH; // 0x40
	::System::String* LOOLGKMJNGF; // 0x48
	::System::String* AFLPDFHJPHA; // 0x50
	::OCBJEIHKMBE* JMLCPADPPNM; // 0x58
	::System::String* ELLGADEFBBO; // 0x60
	::System::String* JFGFBIPNMHG; // 0x68
	::System::String* CIAFFLIDFMG; // 0x70
	::System::Int32 GMDGNLJDBBN; // 0x78
	::System::Int32 EBEGCFLODMI; // 0x7C
	::System::Int32 FIOPMNMJBCG; // 0x80
	::System::Int32 AKDPINBAKII; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLAOIFFPIB__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DDLAOIFFPIB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::IDCDAABGNNO* DGNAAPGKIPL()
	{
		return ((::IDCDAABGNNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLAOIFFPIB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLAOIFFPIB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DDLAOIFFPIB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDLAOIFFPIB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void PKOGNPKCHHE(::JPAGJONBFID_OHLJJOCHIGO& HGDMBHDKFPK)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_OHLJJOCHIGO&))((::PBYTE)hIl2Cpp + DDLAOIFFPIB_PKOGNPKCHHE_OFFSET))(this, HGDMBHDKFPK);
	}

	::System::Void CEHIJOHBMKA(::JPAGJONBFID_OHLJJOCHIGO& MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_OHLJJOCHIGO&))((::PBYTE)hIl2Cpp + DDLAOIFFPIB_CEHIJOHBMKA_OFFSET))(this, MIALFKCCCPI);
	}

	static ::DDLAOIFFPIB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DDLAOIFFPIB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DDLAOIFFPIB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DDLAOIFFPIB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DDLAOIFFPIB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DDLAOIFFPIB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDLAOIFFPIB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDLAOIFFPIB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
