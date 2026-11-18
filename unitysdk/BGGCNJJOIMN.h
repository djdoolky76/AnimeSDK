#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BHEKACANAMA;
class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define BGGCNJJOIMN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x128A6210)
#define BGGCNJJOIMN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x128A5C00)
#define BGGCNJJOIMN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x128A6320)
#define BGGCNJJOIMN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x128A6F90)
#define BGGCNJJOIMN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x128A6310)
#define BGGCNJJOIMN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x128A7140)
#define BGGCNJJOIMN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x128A5C60)
#define BGGCNJJOIMN_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x128A6EB0)
#define BGGCNJJOIMN_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x128A5AF0)
#define BGGCNJJOIMN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x128A6140)
#define BGGCNJJOIMN_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x128A5BF0)
#define BGGCNJJOIMN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x128A63A0)
#define BGGCNJJOIMN__CTOR_OFFSET UNITYSDK_OFFSET(0x128A6EA0)

inline static constexpr unsigned int BGGCNJJOIMN_TypeDefinitionIndex = 87534;

class BGGCNJJOIMN : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* GGPPBGBPPJB; // 0x50
	::MoleMole::Config::DynamicInt* BNKHCNKJKFO; // 0x58
	::MoleMole::Config::DynamicInt* DIELDJMJFIK; // 0x60
	::MoleMole::Config::DynamicString* EBLKBABPBEB; // 0x68
	::MoleMole::Config::ConfigPosRot* GKINLPJPGKO; // 0x70
	::BHEKACANAMA* KEHLMAJNFBC; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGCNJJOIMN__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BGGCNJJOIMN_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGCNJJOIMN_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BGGCNJJOIMN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BGGCNJJOIMN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGCNJJOIMN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGCNJJOIMN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BGGCNJJOIMN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BGGCNJJOIMN_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::BGGCNJJOIMN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BGGCNJJOIMN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BGGCNJJOIMN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BGGCNJJOIMN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BGGCNJJOIMN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BGGCNJJOIMN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BGGCNJJOIMN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BGGCNJJOIMN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
