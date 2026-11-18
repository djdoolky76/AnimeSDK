#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
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
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LEPGNEEBJFP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x184E4C30)
#define LEPGNEEBJFP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x184E4530)
#define LEPGNEEBJFP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x184E4D40)
#define LEPGNEEBJFP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x184E5C10)
#define LEPGNEEBJFP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x184E4D30)
#define LEPGNEEBJFP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x184E5AB0)
#define LEPGNEEBJFP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x184E4590)
#define LEPGNEEBJFP_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x184E5DC0)
#define LEPGNEEBJFP_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x184E4430)
#define LEPGNEEBJFP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x184E4B60)
#define LEPGNEEBJFP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x184E4DC0)
#define LEPGNEEBJFP__CTOR_OFFSET UNITYSDK_OFFSET(0x184E5AA0)

inline static constexpr unsigned int LEPGNEEBJFP_TypeDefinitionIndex = 70694;

class LEPGNEEBJFP : public ::LNODBDPJGFL
{
public:
	::System::Collections::Generic::List_1<::System::String*>* MFIIAGHKGDP; // 0x50
	::System::String* ABBEPNCLJGN; // 0x58
	::System::String* EPKGJLDDLHJ; // 0x60
	::MoleMole::Config::DynamicFloat* EHDBFIMFPAC; // 0x68
	::MoleMole::Config::DynamicString* KDEFPBLCEHB; // 0x70
	::MoleMole::Config::DynamicString* EFDOKNEJGDL; // 0x78
	::System::Boolean HBGDFFLPOMD; // 0x80
	::System::Byte _padding0[0x3];
	::MoleMole::Config::AbilityTargetting FFEBGJAHAFD; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEPGNEEBJFP__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LEPGNEEBJFP_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LEPGNEEBJFP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LEPGNEEBJFP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEPGNEEBJFP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEPGNEEBJFP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LEPGNEEBJFP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LEPGNEEBJFP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LEPGNEEBJFP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LEPGNEEBJFP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LEPGNEEBJFP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LEPGNEEBJFP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LEPGNEEBJFP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LEPGNEEBJFP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LEPGNEEBJFP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LEPGNEEBJFP_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
