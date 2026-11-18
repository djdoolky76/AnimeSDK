#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BHEKACANAMA;
class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define NFPFNJHBEOL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x10D745A0)
#define NFPFNJHBEOL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10D740C0)
#define NFPFNJHBEOL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10D746B0)
#define NFPFNJHBEOL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x10D75250)
#define NFPFNJHBEOL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x10D746A0)
#define NFPFNJHBEOL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x10D750F0)
#define NFPFNJHBEOL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10D74120)
#define NFPFNJHBEOL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x10D75400)
#define NFPFNJHBEOL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x10D73FC0)
#define NFPFNJHBEOL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x10D744F0)
#define NFPFNJHBEOL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10D74730)
#define NFPFNJHBEOL__CTOR_OFFSET UNITYSDK_OFFSET(0x10D750E0)

inline static constexpr unsigned int NFPFNJHBEOL_TypeDefinitionIndex = 65018;

class NFPFNJHBEOL : public ::LNODBDPJGFL
{
public:
	::BHEKACANAMA* EICEKNLHHAO; // 0x50
	::MoleMole::Config::DynamicFloat* IHHGEGIKNHM; // 0x58
	::MoleMole::Config::DynamicString* PLEPAELDGBN; // 0x60
	::MoleMole::Config::DynamicFloat* NHNEPJIDFBF; // 0x68
	::MoleMole::Config::DynamicString* KIHGNGKBADE; // 0x70
	::UnityEngine::Vector3 BHMFODBLJGH; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPFNJHBEOL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NFPFNJHBEOL_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NFPFNJHBEOL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NFPFNJHBEOL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPFNJHBEOL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPFNJHBEOL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NFPFNJHBEOL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NFPFNJHBEOL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NFPFNJHBEOL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NFPFNJHBEOL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NFPFNJHBEOL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NFPFNJHBEOL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::NFPFNJHBEOL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NFPFNJHBEOL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NFPFNJHBEOL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NFPFNJHBEOL_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
