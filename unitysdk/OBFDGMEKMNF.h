#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BHEKACANAMA;
class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define OBFDGMEKMNF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xF16EC00)
#define OBFDGMEKMNF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF16E5F0)
#define OBFDGMEKMNF_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF16ED10)
#define OBFDGMEKMNF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xF16FAF0)
#define OBFDGMEKMNF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xF16ED00)
#define OBFDGMEKMNF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xF16F8B0)
#define OBFDGMEKMNF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xF16E650)
#define OBFDGMEKMNF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xF16FA10)
#define OBFDGMEKMNF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xF16E4F0)
#define OBFDGMEKMNF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xF16EB30)
#define OBFDGMEKMNF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xF16ED90)
#define OBFDGMEKMNF__CTOR_OFFSET UNITYSDK_OFFSET(0xF16F8A0)

inline static constexpr unsigned int OBFDGMEKMNF_TypeDefinitionIndex = 56182;

class OBFDGMEKMNF : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicInt* NFJGDDPEGHG; // 0x50
	::BHEKACANAMA* KLOEAMHNPLO; // 0x58
	::MoleMole::Config::DynamicInt* JGJKHFMMBCP; // 0x60
	::MoleMole::Config::DynamicString* EBLKBABPBEB; // 0x68
	::MoleMole::Config::DynamicInt* BNKHCNKJKFO; // 0x70
	::MoleMole::Config::ConfigPosRot* KPAPPDGCNPE; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFDGMEKMNF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OBFDGMEKMNF_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OBFDGMEKMNF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OBFDGMEKMNF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFDGMEKMNF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFDGMEKMNF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OBFDGMEKMNF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::OBFDGMEKMNF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OBFDGMEKMNF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OBFDGMEKMNF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OBFDGMEKMNF_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OBFDGMEKMNF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OBFDGMEKMNF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::OBFDGMEKMNF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OBFDGMEKMNF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OBFDGMEKMNF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
