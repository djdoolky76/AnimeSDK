#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
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
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define DDPFEBFGBOA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18333260)
#define DDPFEBFGBOA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18332DF0)
#define DDPFEBFGBOA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18333370)
#define DDPFEBFGBOA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x18333D50)
#define DDPFEBFGBOA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x18333360)
#define DDPFEBFGBOA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x18333BF0)
#define DDPFEBFGBOA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18332E50)
#define DDPFEBFGBOA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x18333B10)
#define DDPFEBFGBOA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x18332CE0)
#define DDPFEBFGBOA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x183331F0)
#define DDPFEBFGBOA_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x18332DE0)
#define DDPFEBFGBOA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x183333F0)
#define DDPFEBFGBOA__CTOR_OFFSET UNITYSDK_OFFSET(0x18333B00)

inline static constexpr unsigned int DDPFEBFGBOA_TypeDefinitionIndex = 56991;

class DDPFEBFGBOA : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x50
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x58
	::MoleMole::Config::EVariantElement KNCJBOIAAPF; // 0x60
	::MoleMole::Config::DamageElementType PGDKBJFNLOG; // 0x64
	::System::Boolean IDDACADHPKN; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDPFEBFGBOA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DDPFEBFGBOA_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + DDPFEBFGBOA_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDPFEBFGBOA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DDPFEBFGBOA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDPFEBFGBOA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDPFEBFGBOA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DDPFEBFGBOA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDPFEBFGBOA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DDPFEBFGBOA_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::DDPFEBFGBOA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DDPFEBFGBOA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DDPFEBFGBOA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DDPFEBFGBOA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DDPFEBFGBOA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DDPFEBFGBOA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDPFEBFGBOA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
