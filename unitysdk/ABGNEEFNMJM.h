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
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define ABGNEEFNMJM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x181E4C70)
#define ABGNEEFNMJM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x181E4690)
#define ABGNEEFNMJM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x181E4D80)
#define ABGNEEFNMJM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x181E59F0)
#define ABGNEEFNMJM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x181E4D70)
#define ABGNEEFNMJM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x181E57B0)
#define ABGNEEFNMJM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x181E46F0)
#define ABGNEEFNMJM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x181E5910)
#define ABGNEEFNMJM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x181E44B0)
#define ABGNEEFNMJM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x181E4BE0)
#define ABGNEEFNMJM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x181E4E00)
#define ABGNEEFNMJM__CTOR_OFFSET UNITYSDK_OFFSET(0x181E57A0)

inline static constexpr unsigned int ABGNEEFNMJM_TypeDefinitionIndex = 71434;

class ABGNEEFNMJM : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* MPLPDPMCKEJ; // 0x50
	::MoleMole::Config::DynamicInt* IKMCEIAFPFA; // 0x58
	::System::String* AKCPEGPCOEA; // 0x60
	::System::String* KDEFPBLCEHB; // 0x68
	::System::Boolean BOGFFFBPKHC; // 0x70
	::System::Byte _padding0[0x3];
	::System::Int32 JEJABEHHBIJ; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNEEFNMJM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ABGNEEFNMJM_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABGNEEFNMJM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ABGNEEFNMJM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNEEFNMJM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNEEFNMJM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ABGNEEFNMJM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ABGNEEFNMJM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ABGNEEFNMJM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ABGNEEFNMJM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ABGNEEFNMJM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ABGNEEFNMJM_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::ABGNEEFNMJM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ABGNEEFNMJM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABGNEEFNMJM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABGNEEFNMJM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
