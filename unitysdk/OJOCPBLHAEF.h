#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
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

#define OJOCPBLHAEF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFD8C080)
#define OJOCPBLHAEF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFD8BDA0)
#define OJOCPBLHAEF_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFD8C190)
#define OJOCPBLHAEF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xFD8C780)
#define OJOCPBLHAEF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xFD8C180)
#define OJOCPBLHAEF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xFD8C620)
#define OJOCPBLHAEF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFD8BE00)
#define OJOCPBLHAEF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xFD8C540)
#define OJOCPBLHAEF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xFD8BC50)
#define OJOCPBLHAEF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xFD8C020)
#define OJOCPBLHAEF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFD8C210)
#define OJOCPBLHAEF__CTOR_OFFSET UNITYSDK_OFFSET(0xFD8C530)

inline static constexpr unsigned int OJOCPBLHAEF_TypeDefinitionIndex = 48731;

class OJOCPBLHAEF : public ::LNODBDPJGFL
{
public:
	::System::String* KDEFPBLCEHB; // 0x50
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOCPBLHAEF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OJOCPBLHAEF_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OJOCPBLHAEF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OJOCPBLHAEF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOCPBLHAEF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOCPBLHAEF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OJOCPBLHAEF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OJOCPBLHAEF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OJOCPBLHAEF_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::OJOCPBLHAEF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OJOCPBLHAEF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OJOCPBLHAEF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::OJOCPBLHAEF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OJOCPBLHAEF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OJOCPBLHAEF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OJOCPBLHAEF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
