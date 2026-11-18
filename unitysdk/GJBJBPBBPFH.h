#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/ConfigDataClearPriority.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GJBJBPBBPFH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18143FF0)
#define GJBJBPBBPFH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18143CD0)
#define GJBJBPBBPFH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18144100)
#define GJBJBPBBPFH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x18144740)
#define GJBJBPBBPFH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x181440F0)
#define GJBJBPBBPFH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x181445E0)
#define GJBJBPBBPFH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18143D30)
#define GJBJBPBBPFH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x181448F0)
#define GJBJBPBBPFH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x18143BE0)
#define GJBJBPBBPFH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x18143F90)
#define GJBJBPBBPFH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18144180)
#define GJBJBPBBPFH__CTOR_OFFSET UNITYSDK_OFFSET(0x181445D0)

inline static constexpr unsigned int GJBJBPBBPFH_TypeDefinitionIndex = 39867;

class GJBJBPBBPFH : public ::LNODBDPJGFL
{
public:
	::System::String* KPOJKIDJKHJ; // 0x50
	::MoleMole::Config::ConfigDataClearPriority GKMOPEEJKBO; // 0x58
	::MoleMole::Config::ConfigDataPriority MPGMDODIFOP; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBJBPBBPFH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GJBJBPBBPFH_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GJBJBPBBPFH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GJBJBPBBPFH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBJBPBBPFH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBJBPBBPFH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GJBJBPBBPFH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GJBJBPBBPFH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GJBJBPBBPFH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GJBJBPBBPFH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GJBJBPBBPFH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::GJBJBPBBPFH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GJBJBPBBPFH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GJBJBPBBPFH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GJBJBPBBPFH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GJBJBPBBPFH_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
