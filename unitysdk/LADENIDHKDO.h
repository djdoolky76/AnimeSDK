#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LADENIDHKDO_CGMLDFHCNIO_OFFSET UNITYSDK_OFFSET(0x15DD6D20)
#define LADENIDHKDO_COONEBJAPPI_OFFSET UNITYSDK_OFFSET(0x15DD8280)
#define LADENIDHKDO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15DD7370)
#define LADENIDHKDO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15DD6D80)
#define LADENIDHKDO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15DD7480)
#define LADENIDHKDO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15DD7FF0)
#define LADENIDHKDO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15DD7470)
#define LADENIDHKDO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15DD7E90)
#define LADENIDHKDO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15DD6DE0)
#define LADENIDHKDO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15DD81A0)
#define LADENIDHKDO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15DD6C20)
#define LADENIDHKDO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15DD72E0)
#define LADENIDHKDO_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x15DD6D10)
#define LADENIDHKDO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15DD7500)
#define LADENIDHKDO__CTOR_OFFSET UNITYSDK_OFFSET(0x15DD7E80)

inline static constexpr unsigned int LADENIDHKDO_TypeDefinitionIndex = 92438;

class LADENIDHKDO : public ::LNODBDPJGFL
{
public:
	::System::String* KDEFPBLCEHB; // 0x50
	::MoleMole::Config::DynamicFloat* MPLPDPMCKEJ; // 0x58
	::MoleMole::Config::DynamicString* BODECKIDFGF; // 0x60
	::MoleMole::Config::DynamicInt* IKMCEIAFPFA; // 0x68
	::System::Boolean BOGFFFBPKHC; // 0x70
	::System::Byte _padding0[0x3];
	::System::Int32 JEJABEHHBIJ; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LADENIDHKDO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LADENIDHKDO_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + LADENIDHKDO_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean CGMLDFHCNIO(::MoleMole::Battle::Entity* HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LADENIDHKDO_CGMLDFHCNIO_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LADENIDHKDO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LADENIDHKDO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LADENIDHKDO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LADENIDHKDO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LADENIDHKDO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LADENIDHKDO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LADENIDHKDO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LADENIDHKDO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LADENIDHKDO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LADENIDHKDO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LADENIDHKDO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LADENIDHKDO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LADENIDHKDO_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean COONEBJAPPI(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LADENIDHKDO_COONEBJAPPI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LADENIDHKDO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
