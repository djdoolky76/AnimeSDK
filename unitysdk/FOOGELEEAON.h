#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/TextureSheetInterruptType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOOGELEEAON_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15CB41C0)
#define FOOGELEEAON_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15CB3C70)
#define FOOGELEEAON_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15CB42D0)
#define FOOGELEEAON_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15CB4E10)
#define FOOGELEEAON_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15CB42C0)
#define FOOGELEEAON_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15CB4CB0)
#define FOOGELEEAON_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15CB3CD0)
#define FOOGELEEAON_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15CB4BD0)
#define FOOGELEEAON_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15CB3B80)
#define FOOGELEEAON_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15CB4140)
#define FOOGELEEAON_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15CB4350)
#define FOOGELEEAON__CTOR_OFFSET UNITYSDK_OFFSET(0x15CB4BC0)

inline static constexpr unsigned int FOOGELEEAON_TypeDefinitionIndex = 57615;

class FOOGELEEAON : public ::LNODBDPJGFL
{
public:
	::System::String* EIIGBMGDDKC; // 0x50
	::System::String* GPJIMPBGNOE; // 0x58
	::System::Collections::Generic::List_1<::System::String*>* LNJGHPCADLO; // 0x60
	::System::Boolean IJAKKJIFAKF; // 0x68
	::System::Byte _padding0[0x3];
	::MoleMole::Config::TextureSheetInterruptType KEGGOPELHDB; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOGELEEAON__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FOOGELEEAON_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FOOGELEEAON_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FOOGELEEAON_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOGELEEAON_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOGELEEAON_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FOOGELEEAON_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FOOGELEEAON_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FOOGELEEAON_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FOOGELEEAON_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FOOGELEEAON* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FOOGELEEAON*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FOOGELEEAON_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::FOOGELEEAON* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FOOGELEEAON*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FOOGELEEAON_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
