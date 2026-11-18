#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class MIGBBGDBLOC;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PLHPEDEBGOB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A7F9520)
#define PLHPEDEBGOB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A7F8FD0)
#define PLHPEDEBGOB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A7F9630)
#define PLHPEDEBGOB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1A7FA220)
#define PLHPEDEBGOB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A7F9620)
#define PLHPEDEBGOB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1A7FA0C0)
#define PLHPEDEBGOB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A7F9030)
#define PLHPEDEBGOB_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1A7F9FE0)
#define PLHPEDEBGOB_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1A7F8EE0)
#define PLHPEDEBGOB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A7F94A0)
#define PLHPEDEBGOB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A7F96B0)
#define PLHPEDEBGOB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F9FD0)

inline static constexpr unsigned int PLHPEDEBGOB_TypeDefinitionIndex = 58595;

class PLHPEDEBGOB : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* KKEHMGIIHIL; // 0x50
	::MoleMole::Config::DynamicFloat* PACNHCNKOBM; // 0x58
	::MIGBBGDBLOC* DDFADAMBAML; // 0x60
	::MoleMole::Config::EVariantElement KNCJBOIAAPF; // 0x68
	::MoleMole::Config::DamageElementType JLEKIOBFKMP; // 0x6C
	::System::Int32 LLGILPBMKLD; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPEDEBGOB__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PLHPEDEBGOB_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PLHPEDEBGOB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PLHPEDEBGOB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPEDEBGOB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPEDEBGOB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PLHPEDEBGOB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PLHPEDEBGOB_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::PLHPEDEBGOB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PLHPEDEBGOB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PLHPEDEBGOB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PLHPEDEBGOB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PLHPEDEBGOB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PLHPEDEBGOB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PLHPEDEBGOB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PLHPEDEBGOB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
