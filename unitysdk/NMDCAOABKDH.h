#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKCJJLPNAAC;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NMDCAOABKDH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16B88060)
#define NMDCAOABKDH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B87B20)
#define NMDCAOABKDH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16B88170)
#define NMDCAOABKDH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16B88CC0)
#define NMDCAOABKDH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16B88160)
#define NMDCAOABKDH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16B88E70)
#define NMDCAOABKDH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16B87B80)
#define NMDCAOABKDH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16B88BE0)
#define NMDCAOABKDH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16B87A20)
#define NMDCAOABKDH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16B87F90)
#define NMDCAOABKDH_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x16B87B10)
#define NMDCAOABKDH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16B881F0)
#define NMDCAOABKDH__CTOR_OFFSET UNITYSDK_OFFSET(0x16B88BD0)

inline static constexpr unsigned int NMDCAOABKDH_TypeDefinitionIndex = 85324;

class NMDCAOABKDH : public ::LNODBDPJGFL
{
public:
	::System::String* KIHGNGKBADE; // 0x50
	::MoleMole::Config::DynamicInt* EOCEMDAEJOG; // 0x58
	::MoleMole::Config::DynamicFloat* NJHHEPBFJMN; // 0x60
	::System::Collections::Generic::List_1<::FKCJJLPNAAC*>* ICNONDJLPON; // 0x68
	::MoleMole::Config::DynamicInt* AHACNENGDEI; // 0x70
	::MoleMole::Config::DynamicFloat* BKAIKGOBEBO; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDCAOABKDH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NMDCAOABKDH_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDCAOABKDH_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NMDCAOABKDH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NMDCAOABKDH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDCAOABKDH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDCAOABKDH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NMDCAOABKDH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NMDCAOABKDH_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NMDCAOABKDH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NMDCAOABKDH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NMDCAOABKDH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NMDCAOABKDH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NMDCAOABKDH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NMDCAOABKDH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NMDCAOABKDH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NMDCAOABKDH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
