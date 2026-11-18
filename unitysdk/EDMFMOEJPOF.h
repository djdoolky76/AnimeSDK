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
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define EDMFMOEJPOF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16133D20)
#define EDMFMOEJPOF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16133540)
#define EDMFMOEJPOF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16133E30)
#define EDMFMOEJPOF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x161352A0)
#define EDMFMOEJPOF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16133E20)
#define EDMFMOEJPOF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16135450)
#define EDMFMOEJPOF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x161335A0)
#define EDMFMOEJPOF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x161355B0)
#define EDMFMOEJPOF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16133440)
#define EDMFMOEJPOF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16133C00)
#define EDMFMOEJPOF_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x16133530)
#define EDMFMOEJPOF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16133EB0)
#define EDMFMOEJPOF__CTOR_OFFSET UNITYSDK_OFFSET(0x16135230)

inline static constexpr unsigned int EDMFMOEJPOF_TypeDefinitionIndex = 52967;

class EDMFMOEJPOF : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicString* JIIPHDCDHHA; // 0x50
	::MoleMole::Config::DynamicFloat* LDMNEFIMLJN; // 0x58
	::MoleMole::Config::DynamicFloat* ILLPBDLILGM; // 0x60
	::MoleMole::Config::DynamicFloat* EFJALOPNOCB; // 0x68
	::MoleMole::Config::DynamicFloat* JDCPHBDOGGD; // 0x70
	::MoleMole::Config::DynamicFloat* KEBPEGOHMOO; // 0x78
	::MoleMole::Config::DynamicFloat* NAHHFNFJCJN; // 0x80
	::MoleMole::Config::DynamicFloat* JGNCDFNAIMI; // 0x88
	::MoleMole::Config::DynamicString* JJOMPILPFMF; // 0x90
	::MoleMole::Config::DynamicFloat* NFDDBFKAOOJ; // 0x98
	::System::Int32 HLBKHEFJAPH; // 0xA0
	::System::Boolean HPJBOBMFNMM; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMFMOEJPOF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EDMFMOEJPOF_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMFMOEJPOF_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EDMFMOEJPOF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EDMFMOEJPOF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMFMOEJPOF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMFMOEJPOF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EDMFMOEJPOF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::EDMFMOEJPOF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EDMFMOEJPOF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EDMFMOEJPOF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EDMFMOEJPOF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EDMFMOEJPOF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EDMFMOEJPOF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EDMFMOEJPOF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EDMFMOEJPOF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EDMFMOEJPOF_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
