#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"
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
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MBLIBLKNHGI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16C71980)
#define MBLIBLKNHGI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C715B0)
#define MBLIBLKNHGI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16C71A90)
#define MBLIBLKNHGI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16C72160)
#define MBLIBLKNHGI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16C71A80)
#define MBLIBLKNHGI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16C72310)
#define MBLIBLKNHGI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16C71610)
#define MBLIBLKNHGI_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16C72470)
#define MBLIBLKNHGI_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16C71470)
#define MBLIBLKNHGI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16C71900)
#define MBLIBLKNHGI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16C71B10)
#define MBLIBLKNHGI__CTOR_OFFSET UNITYSDK_OFFSET(0x16C72150)

inline static constexpr unsigned int MBLIBLKNHGI_TypeDefinitionIndex = 60447;

class MBLIBLKNHGI : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* GPIOJBLKFAJ; // 0x50
	::System::String* KIHGNGKBADE; // 0x58
	::System::String* KDADINNPFAK; // 0x60
	::MoleMole::Config::EntitySkillType BHJDNIPGFGN; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLIBLKNHGI__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MBLIBLKNHGI_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MBLIBLKNHGI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MBLIBLKNHGI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLIBLKNHGI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLIBLKNHGI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MBLIBLKNHGI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MBLIBLKNHGI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MBLIBLKNHGI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MBLIBLKNHGI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MBLIBLKNHGI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MBLIBLKNHGI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MBLIBLKNHGI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MBLIBLKNHGI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MBLIBLKNHGI_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MBLIBLKNHGI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
