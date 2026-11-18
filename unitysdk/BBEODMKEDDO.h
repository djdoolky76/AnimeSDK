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
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BBEODMKEDDO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x169DAF20)
#define BBEODMKEDDO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x169DA9B0)
#define BBEODMKEDDO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x169DB030)
#define BBEODMKEDDO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x169DB9B0)
#define BBEODMKEDDO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x169DB020)
#define BBEODMKEDDO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x169DB850)
#define BBEODMKEDDO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x169DAA10)
#define BBEODMKEDDO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x169DB770)
#define BBEODMKEDDO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x169DA8C0)
#define BBEODMKEDDO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x169DAE90)
#define BBEODMKEDDO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x169DB0B0)
#define BBEODMKEDDO__CTOR_OFFSET UNITYSDK_OFFSET(0x169DB760)

inline static constexpr unsigned int BBEODMKEDDO_TypeDefinitionIndex = 89071;

class BBEODMKEDDO : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* PFPNPKNBNFI; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* FPEHIONLDAB; // 0x58
	::MoleMole::Config::DynamicFloat* AEIGDCAONIA; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* FFPFGNHPAFC; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEODMKEDDO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BBEODMKEDDO_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BBEODMKEDDO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BBEODMKEDDO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEODMKEDDO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEODMKEDDO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BBEODMKEDDO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BBEODMKEDDO_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::BBEODMKEDDO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BBEODMKEDDO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BBEODMKEDDO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BBEODMKEDDO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BBEODMKEDDO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BBEODMKEDDO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BBEODMKEDDO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BBEODMKEDDO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
