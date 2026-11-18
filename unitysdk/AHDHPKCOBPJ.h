#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define AHDHPKCOBPJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11B96360)
#define AHDHPKCOBPJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11B95DF0)
#define AHDHPKCOBPJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11B96470)
#define AHDHPKCOBPJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11B96D50)
#define AHDHPKCOBPJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11B96460)
#define AHDHPKCOBPJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11B96F00)
#define AHDHPKCOBPJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11B95E50)
#define AHDHPKCOBPJ_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x11B96C70)
#define AHDHPKCOBPJ_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x11B95CF0)
#define AHDHPKCOBPJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11B96300)
#define AHDHPKCOBPJ_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x11B95DE0)
#define AHDHPKCOBPJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11B964F0)
#define AHDHPKCOBPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11B96C50)

inline static constexpr unsigned int AHDHPKCOBPJ_TypeDefinitionIndex = 83439;

class AHDHPKCOBPJ : public ::LNODBDPJGFL
{
public:
	::UnityEngine::AnimationCurve* OHEAKIJENEI; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* JKEAGHEHKNM; // 0x58
	::System::Boolean GNNHEPMBANH; // 0x60
	::System::Boolean BDMBABIEDBK; // 0x61
	::System::Byte _padding0[0x2];
	::System::Single HGLLPLIJCME; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDHPKCOBPJ__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AHDHPKCOBPJ_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDHPKCOBPJ_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AHDHPKCOBPJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AHDHPKCOBPJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDHPKCOBPJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDHPKCOBPJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AHDHPKCOBPJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AHDHPKCOBPJ_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::AHDHPKCOBPJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::AHDHPKCOBPJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AHDHPKCOBPJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AHDHPKCOBPJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AHDHPKCOBPJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::AHDHPKCOBPJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::AHDHPKCOBPJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AHDHPKCOBPJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
