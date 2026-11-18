#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDNKAJNIJBC.h"
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
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFAAHONKPDI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15EAFFC0)
#define IFAAHONKPDI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15EAF9D0)
#define IFAAHONKPDI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15EB00D0)
#define IFAAHONKPDI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15EB1020)
#define IFAAHONKPDI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15EB00C0)
#define IFAAHONKPDI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15EB11D0)
#define IFAAHONKPDI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15EAFA30)
#define IFAAHONKPDI_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15EB0F40)
#define IFAAHONKPDI_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15EAF8D0)
#define IFAAHONKPDI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15EAFEF0)
#define IFAAHONKPDI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15EB0150)
#define IFAAHONKPDI__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB0E90)

inline static constexpr unsigned int IFAAHONKPDI_TypeDefinitionIndex = 65803;

class IFAAHONKPDI : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* HAJNBAIENOA; // 0x50
	::MoleMole::Config::DynamicInt* HLBKHEFJAPH; // 0x58
	::System::Collections::Generic::List_1<::System::String*>* JFPNILCHFGO; // 0x60
	::MoleMole::Config::DynamicFloat* JCDDGJPGHCM; // 0x68
	::System::String* KIHGNGKBADE; // 0x70
	::MoleMole::Config::DynamicFloat* DFCCJLMCABI; // 0x78
	::UnityEngine::Vector3 GCMBLHOGCEN; // 0x80
	::System::Boolean BAIAHFLFOPM; // 0x8C
	::System::Byte _padding0[0x3];
	::CDNKAJNIJBC GALHMINJEKJ; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAAHONKPDI__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IFAAHONKPDI_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IFAAHONKPDI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IFAAHONKPDI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAAHONKPDI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAAHONKPDI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IFAAHONKPDI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IFAAHONKPDI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IFAAHONKPDI_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::IFAAHONKPDI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IFAAHONKPDI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IFAAHONKPDI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IFAAHONKPDI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::IFAAHONKPDI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IFAAHONKPDI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IFAAHONKPDI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
