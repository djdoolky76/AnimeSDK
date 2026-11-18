#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/NAIACLCOJMP.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LENOHJGFMNG;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIPCLJGGEAE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14252FE0)
#define BIPCLJGGEAE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14252AF0)
#define BIPCLJGGEAE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x142530F0)
#define BIPCLJGGEAE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14253AF0)
#define BIPCLJGGEAE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x142530E0)
#define BIPCLJGGEAE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14253D80)
#define BIPCLJGGEAE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14252B50)
#define BIPCLJGGEAE_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x14253CA0)
#define BIPCLJGGEAE_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14252A00)
#define BIPCLJGGEAE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14252F30)
#define BIPCLJGGEAE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14253170)
#define BIPCLJGGEAE__CTOR_OFFSET UNITYSDK_OFFSET(0x14253AE0)

inline static constexpr unsigned int BIPCLJGGEAE_TypeDefinitionIndex = 78558;

class BIPCLJGGEAE : public ::LNODBDPJGFL
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::LENOHJGFMNG*>* MHAEMHBMDPF; // 0x50
	::System::String* FEGGEKBEOFJ; // 0x58
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x60
	::System::String* LFBMJMODNKN; // 0x68
	::MoleMole::Config::DynamicInt* FHCLNHAINNO; // 0x70
	::NAIACLCOJMP EMPOKNJEJPC; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPCLJGGEAE__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BIPCLJGGEAE_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BIPCLJGGEAE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BIPCLJGGEAE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPCLJGGEAE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPCLJGGEAE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BIPCLJGGEAE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BIPCLJGGEAE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BIPCLJGGEAE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BIPCLJGGEAE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BIPCLJGGEAE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BIPCLJGGEAE_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::BIPCLJGGEAE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BIPCLJGGEAE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BIPCLJGGEAE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BIPCLJGGEAE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
