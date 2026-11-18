#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/ANIM_CTRLER_PARAMS_TYPE.h"
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
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CEIDHJELAFB_CGMLDFHCNIO_OFFSET UNITYSDK_OFFSET(0x145B0CF0)
#define CEIDHJELAFB_COONEBJAPPI_OFFSET UNITYSDK_OFFSET(0x145B2010)
#define CEIDHJELAFB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x145B12C0)
#define CEIDHJELAFB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x145B0D50)
#define CEIDHJELAFB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x145B13D0)
#define CEIDHJELAFB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x145B1E60)
#define CEIDHJELAFB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x145B13C0)
#define CEIDHJELAFB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x145B1D00)
#define CEIDHJELAFB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x145B0DB0)
#define CEIDHJELAFB_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x145B1C20)
#define CEIDHJELAFB_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x145B0BF0)
#define CEIDHJELAFB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x145B1240)
#define CEIDHJELAFB_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x145B0CE0)
#define CEIDHJELAFB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x145B1450)
#define CEIDHJELAFB__CTOR_OFFSET UNITYSDK_OFFSET(0x145B1C10)

inline static constexpr unsigned int CEIDHJELAFB_TypeDefinitionIndex = 45372;

class CEIDHJELAFB : public ::LNODBDPJGFL
{
public:
	::System::String* KDEFPBLCEHB; // 0x50
	::MoleMole::Config::DynamicInt* IKMCEIAFPFA; // 0x58
	::MoleMole::Config::DynamicFloat* MPLPDPMCKEJ; // 0x60
	::MoleMole::Config::ANIM_CTRLER_PARAMS_TYPE OAAIOHFNCHB; // 0x68
	::System::Boolean BOGFFFBPKHC; // 0x6C
	::System::Byte _padding0[0x3];
	::System::Int32 JEJABEHHBIJ; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIDHJELAFB__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + CEIDHJELAFB_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIDHJELAFB_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean CGMLDFHCNIO(::MoleMole::Battle::Entity* HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CEIDHJELAFB_CGMLDFHCNIO_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CEIDHJELAFB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CEIDHJELAFB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIDHJELAFB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIDHJELAFB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CEIDHJELAFB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + CEIDHJELAFB_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CEIDHJELAFB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::CEIDHJELAFB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CEIDHJELAFB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CEIDHJELAFB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CEIDHJELAFB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::CEIDHJELAFB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CEIDHJELAFB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CEIDHJELAFB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean COONEBJAPPI(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CEIDHJELAFB_COONEBJAPPI_OFFSET))(this, MIALFKCCCPI);
	}
};
