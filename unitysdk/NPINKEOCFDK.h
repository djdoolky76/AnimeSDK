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

#define NPINKEOCFDK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15F4B150)
#define NPINKEOCFDK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15F4AB30)
#define NPINKEOCFDK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15F4B260)
#define NPINKEOCFDK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15F4C3C0)
#define NPINKEOCFDK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15F4B250)
#define NPINKEOCFDK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15F4C260)
#define NPINKEOCFDK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15F4AB90)
#define NPINKEOCFDK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15F4C180)
#define NPINKEOCFDK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15F4A9C0)
#define NPINKEOCFDK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15F4B0A0)
#define NPINKEOCFDK_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x15F4AB20)
#define NPINKEOCFDK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15F4B2E0)
#define NPINKEOCFDK__CTOR_OFFSET UNITYSDK_OFFSET(0x15F4C170)

inline static constexpr unsigned int NPINKEOCFDK_TypeDefinitionIndex = 66175;

class NPINKEOCFDK : public ::LNODBDPJGFL
{
public:
	::System::String* KIHGNGKBADE; // 0x50
	::MoleMole::Config::DynamicFloat* GBGOMNMLBNO; // 0x58
	::System::String* LLBKANFNAAK; // 0x60
	::MoleMole::Config::DynamicInt* BEIMJIPKNGA; // 0x68
	::MoleMole::Config::DynamicFloat* OKDPFOKIGIK; // 0x70
	::System::Boolean CJGKDAIMJHL; // 0x78
	::System::Boolean HACPFCCDFHD; // 0x79
	::System::Boolean JJMHNJCJCOO; // 0x7A
	::System::Boolean BPDFPHLBLFN; // 0x7B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPINKEOCFDK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NPINKEOCFDK_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + NPINKEOCFDK_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NPINKEOCFDK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NPINKEOCFDK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPINKEOCFDK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPINKEOCFDK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NPINKEOCFDK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NPINKEOCFDK_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NPINKEOCFDK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NPINKEOCFDK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NPINKEOCFDK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NPINKEOCFDK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NPINKEOCFDK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::NPINKEOCFDK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NPINKEOCFDK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NPINKEOCFDK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
