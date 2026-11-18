#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BMLDJBOKCBK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x169FEB30)
#define BMLDJBOKCBK_FIBKHJPDNKE_OFFSET UNITYSDK_OFFSET(0x169FDF90)
#define BMLDJBOKCBK_FNCAHMKPAGD_OFFSET UNITYSDK_OFFSET(0x169FE220)
#define BMLDJBOKCBK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x169FE450)
#define BMLDJBOKCBK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x169FEC40)
#define BMLDJBOKCBK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x169FFD30)
#define BMLDJBOKCBK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x169FEC30)
#define BMLDJBOKCBK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x169FFEE0)
#define BMLDJBOKCBK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x169FE4B0)
#define BMLDJBOKCBK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16A00040)
#define BMLDJBOKCBK_KHHCHDPGJBK_OFFSET UNITYSDK_OFFSET(0x169FE110)
#define BMLDJBOKCBK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x169FDA70)
#define BMLDJBOKCBK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x169FEA50)
#define BMLDJBOKCBK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x169FECC0)
#define BMLDJBOKCBK__CTOR_OFFSET UNITYSDK_OFFSET(0x169FFCB0)

inline static constexpr unsigned int BMLDJBOKCBK_TypeDefinitionIndex = 64237;

class BMLDJBOKCBK : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicInt* AMCDAOJKFNF; // 0x50
	::MoleMole::Config::DynamicInt* HHDMKFPFEJO; // 0x58
	::MoleMole::Config::DynamicFloat* JOGNBHMGHCG; // 0x60
	::System::String* BAHGNGGKHFP; // 0x68
	::MoleMole::Config::DynamicFloat* EAIBBGHABLB; // 0x70
	::MoleMole::Config::DynamicFloat* HLMEJOMCPIB; // 0x78
	::MoleMole::Config::ConfigPosRot* FNOBMEJODIB; // 0x80
	::System::Boolean EJHFFDBOPCD; // 0x88
	::System::Boolean IGGKDMMBIHB; // 0x89

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLDJBOKCBK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BMLDJBOKCBK_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMLDJBOKCBK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BMLDJBOKCBK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLDJBOKCBK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLDJBOKCBK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BMLDJBOKCBK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMLDJBOKCBK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FIBKHJPDNKE(::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::JCADHFOKIHK* KADBFNFHENH, ::UnityEngine::Vector3& OHOGDOMNHNK)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BMLDJBOKCBK_FIBKHJPDNKE_OFFSET))(this, HODAIDNDKHD, LIBPKNHDIGP, KADBFNFHENH, OHOGDOMNHNK);
	}

	static ::UnityEngine::Vector3 KHHCHDPGJBK(::MoleMole::Battle::Entity* HODAIDNDKHD)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BMLDJBOKCBK_KHHCHDPGJBK_OFFSET))(HODAIDNDKHD);
	}

	static ::UnityEngine::Vector3 FNCAHMKPAGD(::UnityEngine::Vector3 FMJGOHNLJNA, ::System::Single AHNEMNOIODI)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + BMLDJBOKCBK_FNCAHMKPAGD_OFFSET))(FMJGOHNLJNA, AHNEMNOIODI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BMLDJBOKCBK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BMLDJBOKCBK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BMLDJBOKCBK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMLDJBOKCBK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BMLDJBOKCBK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BMLDJBOKCBK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BMLDJBOKCBK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BMLDJBOKCBK_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
