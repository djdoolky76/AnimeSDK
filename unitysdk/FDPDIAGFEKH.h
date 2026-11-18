#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAJPPFMEHFD.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LAKPBOIHPFL;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FDPDIAGFEKH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11D6ED10)
#define FDPDIAGFEKH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11D6E700)
#define FDPDIAGFEKH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11D6EE20)
#define FDPDIAGFEKH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11D6FFF0)
#define FDPDIAGFEKH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11D6EE10)
#define FDPDIAGFEKH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11D6FE90)
#define FDPDIAGFEKH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11D6E760)
#define FDPDIAGFEKH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x11D6FDB0)
#define FDPDIAGFEKH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x11ACD690)
#define FDPDIAGFEKH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11D6EC60)
#define FDPDIAGFEKH_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x11ACD790)
#define FDPDIAGFEKH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11D6EEA0)
#define FDPDIAGFEKH__CTOR_OFFSET UNITYSDK_OFFSET(0x11D6FDA0)

inline static constexpr unsigned int FDPDIAGFEKH_TypeDefinitionIndex = 48469;

class FDPDIAGFEKH : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicString* BHHMJHDNGKN; // 0x50
	::MoleMole::Config::DynamicString* AOLGDHDOCLP; // 0x58
	::MoleMole::Config::DynamicString* OIBHABHJLGF; // 0x60
	::System::Collections::Generic::List_1<::LAKPBOIHPFL*>* LPPHHGCMCCA; // 0x68
	::MoleMole::Config::ConfigPosRot* COMELHFEGHC; // 0x70
	::System::Boolean AFLMFKGOMHM; // 0x78
	::System::Boolean KHHGFLDHIKF; // 0x79
	::System::Byte _padding0[0x2];
	::MoleMole::Config::AbilityTargetting JHMONLHFMFN; // 0x7C
	::HAJPPFMEHFD CFDJPEOKHNK; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPDIAGFEKH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FDPDIAGFEKH_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPDIAGFEKH_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FDPDIAGFEKH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FDPDIAGFEKH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPDIAGFEKH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPDIAGFEKH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FDPDIAGFEKH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FDPDIAGFEKH_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::FDPDIAGFEKH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FDPDIAGFEKH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FDPDIAGFEKH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::FDPDIAGFEKH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FDPDIAGFEKH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FDPDIAGFEKH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FDPDIAGFEKH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FDPDIAGFEKH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
