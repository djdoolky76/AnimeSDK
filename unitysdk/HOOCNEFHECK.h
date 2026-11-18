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

#define HOOCNEFHECK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x101271E0)
#define HOOCNEFHECK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10126DC0)
#define HOOCNEFHECK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x101272F0)
#define HOOCNEFHECK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x10127A30)
#define HOOCNEFHECK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x101272E0)
#define HOOCNEFHECK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x10127CC0)
#define HOOCNEFHECK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10126E20)
#define HOOCNEFHECK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x10127BE0)
#define HOOCNEFHECK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x10126C90)
#define HOOCNEFHECK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x10127170)
#define HOOCNEFHECK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10127370)
#define HOOCNEFHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x10127A20)

inline static constexpr unsigned int HOOCNEFHECK_TypeDefinitionIndex = 48035;

class HOOCNEFHECK : public ::LNODBDPJGFL
{
public:
	::System::String* GAGEOMIFCAP; // 0x50
	::System::String* EIIGBMGDDKC; // 0x58
	::MoleMole::Config::TextureSheetInterruptType KEGGOPELHDB; // 0x60
	::System::Boolean EOIKGIKKCDF; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOCNEFHECK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HOOCNEFHECK_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HOOCNEFHECK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HOOCNEFHECK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOCNEFHECK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOCNEFHECK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HOOCNEFHECK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HOOCNEFHECK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HOOCNEFHECK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HOOCNEFHECK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HOOCNEFHECK_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HOOCNEFHECK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HOOCNEFHECK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HOOCNEFHECK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HOOCNEFHECK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HOOCNEFHECK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
