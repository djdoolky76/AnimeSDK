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

#define JMMIEMMMIDL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13ADBF60)
#define JMMIEMMMIDL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13ADBBC0)
#define JMMIEMMMIDL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13ADC070)
#define JMMIEMMMIDL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13ADC840)
#define JMMIEMMMIDL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13ADC060)
#define JMMIEMMMIDL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13ADC6E0)
#define JMMIEMMMIDL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13ADBC20)
#define JMMIEMMMIDL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13ADC600)
#define JMMIEMMMIDL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x13ADB8D0)
#define JMMIEMMMIDL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13ADBEE0)
#define JMMIEMMMIDL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13ADC0F0)
#define JMMIEMMMIDL__CTOR_OFFSET UNITYSDK_OFFSET(0x13ADC5F0)

inline static constexpr unsigned int JMMIEMMMIDL_TypeDefinitionIndex = 80884;

class JMMIEMMMIDL : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicInt* AIGCHICFFCA; // 0x50
	::MoleMole::Config::DynamicString* PENGHONEGMF; // 0x58
	::MoleMole::Config::DynamicInt* EDAOEMNBJIJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMIEMMMIDL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JMMIEMMMIDL_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JMMIEMMMIDL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JMMIEMMMIDL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMIEMMMIDL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMIEMMMIDL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JMMIEMMMIDL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JMMIEMMMIDL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JMMIEMMMIDL_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JMMIEMMMIDL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::JMMIEMMMIDL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JMMIEMMMIDL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JMMIEMMMIDL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::JMMIEMMMIDL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JMMIEMMMIDL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JMMIEMMMIDL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
