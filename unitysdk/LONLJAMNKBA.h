#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
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

#define LONLJAMNKBA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15902CD0)
#define LONLJAMNKBA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15902930)
#define LONLJAMNKBA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15902DE0)
#define LONLJAMNKBA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x159033B0)
#define LONLJAMNKBA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15902DD0)
#define LONLJAMNKBA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15903560)
#define LONLJAMNKBA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15902990)
#define LONLJAMNKBA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x159032D0)
#define LONLJAMNKBA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15902840)
#define LONLJAMNKBA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15902C70)
#define LONLJAMNKBA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15902E60)
#define LONLJAMNKBA__CTOR_OFFSET UNITYSDK_OFFSET(0x159032C0)

inline static constexpr unsigned int LONLJAMNKBA_TypeDefinitionIndex = 59087;

class LONLJAMNKBA : public ::LNODBDPJGFL
{
public:
	::System::String* KDEFPBLCEHB; // 0x50
	::System::Boolean BJHJJDDIFMK; // 0x58
	::System::Byte _padding0[0x3];
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLJAMNKBA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LONLJAMNKBA_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LONLJAMNKBA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LONLJAMNKBA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLJAMNKBA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLJAMNKBA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LONLJAMNKBA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LONLJAMNKBA_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LONLJAMNKBA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LONLJAMNKBA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LONLJAMNKBA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LONLJAMNKBA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LONLJAMNKBA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LONLJAMNKBA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LONLJAMNKBA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LONLJAMNKBA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
