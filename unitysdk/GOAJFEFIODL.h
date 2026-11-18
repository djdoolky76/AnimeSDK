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

#define GOAJFEFIODL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x10F0D3D0)
#define GOAJFEFIODL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10F0CC00)
#define GOAJFEFIODL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10F0D4E0)
#define GOAJFEFIODL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x10F0DF30)
#define GOAJFEFIODL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x10F0D4D0)
#define GOAJFEFIODL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x10F0E1C0)
#define GOAJFEFIODL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10F0CC60)
#define GOAJFEFIODL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x10F0E0E0)
#define GOAJFEFIODL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x10F0CB00)
#define GOAJFEFIODL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x10F0D340)
#define GOAJFEFIODL_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x10F0CBF0)
#define GOAJFEFIODL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10F0D560)
#define GOAJFEFIODL__CTOR_OFFSET UNITYSDK_OFFSET(0x10F0DF20)

inline static constexpr unsigned int GOAJFEFIODL_TypeDefinitionIndex = 54118;

class GOAJFEFIODL : public ::LNODBDPJGFL
{
public:
	::System::Collections::Generic::List_1<::System::String*>* JNJMCHGBMBE; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* OHGLMIOEFDM; // 0x58
	::System::String* NFBECJHADFC; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* PGOCFNEHDOK; // 0x68
	::System::Boolean GOICJLGKPOI; // 0x70
	::System::Byte _padding0[0x3];
	::System::Int32 HLBKHEFJAPH; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAJFEFIODL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GOAJFEFIODL_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAJFEFIODL_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GOAJFEFIODL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GOAJFEFIODL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAJFEFIODL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAJFEFIODL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GOAJFEFIODL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GOAJFEFIODL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GOAJFEFIODL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GOAJFEFIODL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GOAJFEFIODL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GOAJFEFIODL_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GOAJFEFIODL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GOAJFEFIODL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GOAJFEFIODL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GOAJFEFIODL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
