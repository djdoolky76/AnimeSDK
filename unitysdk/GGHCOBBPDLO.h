#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGHCOBBPDLO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x10EF0FE0)
#define GGHCOBBPDLO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10EF0BD0)
#define GGHCOBBPDLO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10EF10F0)
#define GGHCOBBPDLO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x10EF1690)
#define GGHCOBBPDLO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x10EF10E0)
#define GGHCOBBPDLO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x10EF1840)
#define GGHCOBBPDLO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10EF0C30)
#define GGHCOBBPDLO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x10EF19A0)
#define GGHCOBBPDLO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x10EF0AE0)
#define GGHCOBBPDLO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x10EF0F60)
#define GGHCOBBPDLO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10EF1170)
#define GGHCOBBPDLO__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF1680)

inline static constexpr unsigned int GGHCOBBPDLO_TypeDefinitionIndex = 54903;

class GGHCOBBPDLO : public ::LNODBDPJGFL
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* IEGJEMNOHGN; // 0x50
	::MoleMole::Config::DynamicFloat* FKAIAHLECAG; // 0x58
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* NFBJHHPKEKH; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHCOBBPDLO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GGHCOBBPDLO_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GGHCOBBPDLO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GGHCOBBPDLO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHCOBBPDLO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHCOBBPDLO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GGHCOBBPDLO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GGHCOBBPDLO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GGHCOBBPDLO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GGHCOBBPDLO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GGHCOBBPDLO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GGHCOBBPDLO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GGHCOBBPDLO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GGHCOBBPDLO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GGHCOBBPDLO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GGHCOBBPDLO_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
