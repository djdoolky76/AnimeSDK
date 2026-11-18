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
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKJGKNCHNLE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16C60A20)
#define LKJGKNCHNLE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C605C0)
#define LKJGKNCHNLE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16C60B30)
#define LKJGKNCHNLE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16C61220)
#define LKJGKNCHNLE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16C60B20)
#define LKJGKNCHNLE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16C610C0)
#define LKJGKNCHNLE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16C60620)
#define LKJGKNCHNLE_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16C613D0)
#define LKJGKNCHNLE_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16C604A0)
#define LKJGKNCHNLE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16C609A0)
#define LKJGKNCHNLE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16C60BB0)
#define LKJGKNCHNLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C610B0)

inline static constexpr unsigned int LKJGKNCHNLE_TypeDefinitionIndex = 68621;

class LKJGKNCHNLE : public ::LNODBDPJGFL
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* NFOJNBPCNMN; // 0x50
	::MoleMole::Config::DynamicString* KIHGNGKBADE; // 0x58
	::MoleMole::Config::DynamicInt* HLBKHEFJAPH; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJGKNCHNLE__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LKJGKNCHNLE_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LKJGKNCHNLE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LKJGKNCHNLE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJGKNCHNLE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJGKNCHNLE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LKJGKNCHNLE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LKJGKNCHNLE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LKJGKNCHNLE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LKJGKNCHNLE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LKJGKNCHNLE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LKJGKNCHNLE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LKJGKNCHNLE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LKJGKNCHNLE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LKJGKNCHNLE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LKJGKNCHNLE_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
