#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFNCGEHFDLK.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/NMJNJGAOAAA.h"
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

#define ODMOOAJANHB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1843A8F0)
#define ODMOOAJANHB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1843A4A0)
#define ODMOOAJANHB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1843AA00)
#define ODMOOAJANHB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1843B560)
#define ODMOOAJANHB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1843A9F0)
#define ODMOOAJANHB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1843B400)
#define ODMOOAJANHB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1843A500)
#define ODMOOAJANHB_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1843B320)
#define ODMOOAJANHB_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1843A390)
#define ODMOOAJANHB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1843A870)
#define ODMOOAJANHB_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x1843A490)
#define ODMOOAJANHB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1843AA80)
#define ODMOOAJANHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1843B310)

inline static constexpr unsigned int ODMOOAJANHB_TypeDefinitionIndex = 90887;

class ODMOOAJANHB : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicString* KIHGNGKBADE; // 0x50
	::MoleMole::Config::DynamicInt* FEAJEMFKLCD; // 0x58
	::MoleMole::Config::DynamicInt* GDMOJHEEIBM; // 0x60
	::IFNCGEHFDLK IIJGOBLOKBN; // 0x68
	::MoleMole::Config::AidAttackType DBNFFACAKGA; // 0x6C
	::NMJNJGAOAAA HIPDHDHJJGB; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMOOAJANHB__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ODMOOAJANHB_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMOOAJANHB_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ODMOOAJANHB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ODMOOAJANHB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMOOAJANHB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMOOAJANHB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ODMOOAJANHB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ODMOOAJANHB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ODMOOAJANHB_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::ODMOOAJANHB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ODMOOAJANHB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ODMOOAJANHB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ODMOOAJANHB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ODMOOAJANHB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ODMOOAJANHB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ODMOOAJANHB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
