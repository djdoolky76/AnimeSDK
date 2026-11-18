#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/UnityEngine/Vector3.h"
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

#define CEFGPAJGIDC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16864F50)
#define CEFGPAJGIDC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16864C00)
#define CEFGPAJGIDC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16865060)
#define CEFGPAJGIDC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x168657D0)
#define CEFGPAJGIDC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16865050)
#define CEFGPAJGIDC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16865670)
#define CEFGPAJGIDC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16864C60)
#define CEFGPAJGIDC_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16865590)
#define CEFGPAJGIDC_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16864990)
#define CEFGPAJGIDC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16864EE0)
#define CEFGPAJGIDC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x168650E0)
#define CEFGPAJGIDC__CTOR_OFFSET UNITYSDK_OFFSET(0x16865580)

inline static constexpr unsigned int CEFGPAJGIDC_TypeDefinitionIndex = 69976;

class CEFGPAJGIDC : public ::LNODBDPJGFL
{
public:
	::System::String* BODGHKHEOJF; // 0x50
	::MoleMole::Config::DynamicFloat* CJLKFOGFONE; // 0x58
	::UnityEngine::Vector3 GPIOJBLKFAJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFGPAJGIDC__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + CEFGPAJGIDC_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CEFGPAJGIDC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CEFGPAJGIDC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFGPAJGIDC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFGPAJGIDC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CEFGPAJGIDC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CEFGPAJGIDC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CEFGPAJGIDC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + CEFGPAJGIDC_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::CEFGPAJGIDC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CEFGPAJGIDC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CEFGPAJGIDC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::CEFGPAJGIDC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CEFGPAJGIDC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CEFGPAJGIDC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
