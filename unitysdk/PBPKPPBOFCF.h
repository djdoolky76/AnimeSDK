#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BDEFDJLPBHM;
class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBPKPPBOFCF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17313360)
#define PBPKPPBOFCF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17313010)
#define PBPKPPBOFCF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17313470)
#define PBPKPPBOFCF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17313A20)
#define PBPKPPBOFCF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17313460)
#define PBPKPPBOFCF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x173138C0)
#define PBPKPPBOFCF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17313070)
#define PBPKPPBOFCF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x17313BE0)
#define PBPKPPBOFCF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x17312D80)
#define PBPKPPBOFCF_LMNBAMEMKMD_OFFSET UNITYSDK_OFFSET(0x17313BD0)
#define PBPKPPBOFCF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x173132F0)
#define PBPKPPBOFCF_OPNFLKOCBDM_OFFSET UNITYSDK_OFFSET(0x17312E80)
#define PBPKPPBOFCF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x173134F0)
#define PBPKPPBOFCF__CTOR_OFFSET UNITYSDK_OFFSET(0x173138B0)

inline static constexpr unsigned int PBPKPPBOFCF_TypeDefinitionIndex = 48421;

class PBPKPPBOFCF : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicString* DCJCHGOGLMF; // 0x50
	::BDEFDJLPBHM* LGFFMNDEEBM; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPKPPBOFCF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PBPKPPBOFCF_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>* OPNFLKOCBDM()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPKPPBOFCF_OPNFLKOCBDM_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PBPKPPBOFCF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PBPKPPBOFCF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPKPPBOFCF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPKPPBOFCF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PBPKPPBOFCF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PBPKPPBOFCF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PBPKPPBOFCF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PBPKPPBOFCF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::PBPKPPBOFCF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PBPKPPBOFCF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PBPKPPBOFCF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PBPKPPBOFCF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>* LMNBAMEMKMD()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPKPPBOFCF_LMNBAMEMKMD_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PBPKPPBOFCF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PBPKPPBOFCF_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
