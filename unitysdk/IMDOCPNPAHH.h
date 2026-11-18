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
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define IMDOCPNPAHH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x197DBE70)
#define IMDOCPNPAHH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197DB9D0)
#define IMDOCPNPAHH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x197DBF80)
#define IMDOCPNPAHH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x197DC890)
#define IMDOCPNPAHH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x197DBF70)
#define IMDOCPNPAHH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x197DCA40)
#define IMDOCPNPAHH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x197DBA30)
#define IMDOCPNPAHH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x197DC7B0)
#define IMDOCPNPAHH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x197DB8D0)
#define IMDOCPNPAHH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x197DBDF0)
#define IMDOCPNPAHH_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x197DB9C0)
#define IMDOCPNPAHH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x197DC000)
#define IMDOCPNPAHH__CTOR_OFFSET UNITYSDK_OFFSET(0x197DC7A0)

inline static constexpr unsigned int IMDOCPNPAHH_TypeDefinitionIndex = 78385;

class IMDOCPNPAHH : public ::LNODBDPJGFL
{
public:
	::UnityEngine::AnimationCurve* OHEAKIJENEI; // 0x50
	::System::String* AECFCANHLBF; // 0x58
	::MoleMole::Config::DynamicInt* BACEDAKENPL; // 0x60
	::MoleMole::Config::DynamicFloat* HGLLPLIJCME; // 0x68
	::System::Boolean HPJBOBMFNMM; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDOCPNPAHH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IMDOCPNPAHH_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDOCPNPAHH_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IMDOCPNPAHH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IMDOCPNPAHH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDOCPNPAHH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDOCPNPAHH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IMDOCPNPAHH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IMDOCPNPAHH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IMDOCPNPAHH_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::IMDOCPNPAHH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IMDOCPNPAHH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IMDOCPNPAHH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IMDOCPNPAHH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IMDOCPNPAHH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IMDOCPNPAHH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IMDOCPNPAHH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
