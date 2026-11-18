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

#define IKANCNEEBEA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x197D0480)
#define IKANCNEEBEA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197D0130)
#define IKANCNEEBEA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x197D0590)
#define IKANCNEEBEA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x197D0D00)
#define IKANCNEEBEA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x197D0580)
#define IKANCNEEBEA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x197D0AC0)
#define IKANCNEEBEA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x197D0190)
#define IKANCNEEBEA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x197D0C20)
#define IKANCNEEBEA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x197CFED0)
#define IKANCNEEBEA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x197D0410)
#define IKANCNEEBEA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x197D0610)
#define IKANCNEEBEA__CTOR_OFFSET UNITYSDK_OFFSET(0x197D0AB0)

inline static constexpr unsigned int IKANCNEEBEA_TypeDefinitionIndex = 52730;

class IKANCNEEBEA : public ::LNODBDPJGFL
{
public:
	::System::String* BODGHKHEOJF; // 0x50
	::MoleMole::Config::DynamicFloat* CJLKFOGFONE; // 0x58
	::UnityEngine::Vector3 MKCOINJLFJJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKANCNEEBEA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IKANCNEEBEA_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IKANCNEEBEA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IKANCNEEBEA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKANCNEEBEA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKANCNEEBEA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IKANCNEEBEA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::IKANCNEEBEA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IKANCNEEBEA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IKANCNEEBEA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IKANCNEEBEA_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::IKANCNEEBEA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IKANCNEEBEA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IKANCNEEBEA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IKANCNEEBEA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IKANCNEEBEA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
