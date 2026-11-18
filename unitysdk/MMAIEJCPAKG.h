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
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMAIEJCPAKG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17D511F0)
#define MMAIEJCPAKG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D50E10)
#define MMAIEJCPAKG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D51300)
#define MMAIEJCPAKG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17D51870)
#define MMAIEJCPAKG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17D512F0)
#define MMAIEJCPAKG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17D51710)
#define MMAIEJCPAKG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17D50E70)
#define MMAIEJCPAKG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x17D51A20)
#define MMAIEJCPAKG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x17D50D10)
#define MMAIEJCPAKG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17D51180)
#define MMAIEJCPAKG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17D51380)
#define MMAIEJCPAKG__CTOR_OFFSET UNITYSDK_OFFSET(0x17D51700)

inline static constexpr unsigned int MMAIEJCPAKG_TypeDefinitionIndex = 85602;

class MMAIEJCPAKG : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicString* HMPAPJDBIFJ; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* PALGDBMIOPM; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMAIEJCPAKG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MMAIEJCPAKG_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MMAIEJCPAKG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MMAIEJCPAKG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMAIEJCPAKG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMAIEJCPAKG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MMAIEJCPAKG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MMAIEJCPAKG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MMAIEJCPAKG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MMAIEJCPAKG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MMAIEJCPAKG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MMAIEJCPAKG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::MMAIEJCPAKG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MMAIEJCPAKG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MMAIEJCPAKG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MMAIEJCPAKG_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
