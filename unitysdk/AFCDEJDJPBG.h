#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLPJECICNDE.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BHEKACANAMA;
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

#define AFCDEJDJPBG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1434CF70)
#define AFCDEJDJPBG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1434C8F0)
#define AFCDEJDJPBG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1434D080)
#define AFCDEJDJPBG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1434DE60)
#define AFCDEJDJPBG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1434D070)
#define AFCDEJDJPBG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1434E010)
#define AFCDEJDJPBG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1434C950)
#define AFCDEJDJPBG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1434DD80)
#define AFCDEJDJPBG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1434C780)
#define AFCDEJDJPBG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1434CEC0)
#define AFCDEJDJPBG_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x1434C8E0)
#define AFCDEJDJPBG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1434D100)
#define AFCDEJDJPBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1434DD70)

inline static constexpr unsigned int AFCDEJDJPBG_TypeDefinitionIndex = 67256;

class AFCDEJDJPBG : public ::LNODBDPJGFL
{
public:
	::System::String* OAHLNFFKPGC; // 0x50
	::MoleMole::Config::DynamicFloat* MPLPDPMCKEJ; // 0x58
	::BHEKACANAMA* BOGFFFBPKHC; // 0x60
	::MoleMole::Config::DynamicInt* IKMCEIAFPFA; // 0x68
	::MoleMole::Config::DynamicString* HBPBBNAHLEF; // 0x70
	::System::Boolean LHCOKOCECLD; // 0x78
	::System::Boolean HPJBOBMFNMM; // 0x79
	::System::Byte _padding0[0x2];
	::BLPJECICNDE KGJGBAJEAPJ; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCDEJDJPBG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AFCDEJDJPBG_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCDEJDJPBG_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AFCDEJDJPBG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AFCDEJDJPBG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCDEJDJPBG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCDEJDJPBG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AFCDEJDJPBG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AFCDEJDJPBG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AFCDEJDJPBG_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::AFCDEJDJPBG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::AFCDEJDJPBG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AFCDEJDJPBG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AFCDEJDJPBG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::AFCDEJDJPBG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::AFCDEJDJPBG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AFCDEJDJPBG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
