#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
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

#define DDOOGBHHPNN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A1D2770)
#define DDOOGBHHPNN_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1A1D2F70)
#define DDOOGBHHPNN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A1D23A0)
#define DDOOGBHHPNN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A1D2880)
#define DDOOGBHHPNN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1A1D3040)
#define DDOOGBHHPNN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A1D2870)
#define DDOOGBHHPNN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1A1D2E10)
#define DDOOGBHHPNN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A1D2400)
#define DDOOGBHHPNN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A1D26B0)
#define DDOOGBHHPNN_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1A1D2290)
#define DDOOGBHHPNN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A1D2900)
#define DDOOGBHHPNN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1D2E00)

inline static constexpr unsigned int DDOOGBHHPNN_TypeDefinitionIndex = 43046;

class DDOOGBHHPNN : public ::LHHNKBDEMGO
{
public:
	::System::String* OKOGMKOOOPL; // 0x40
	::MoleMole::Config::DynamicFloat* CFGEEIELGJI; // 0x48
	::MoleMole::Config::DynamicInt* EAHEOHODAOE; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOGBHHPNN__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DDOOGBHHPNN_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDOOGBHHPNN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DDOOGBHHPNN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOGBHHPNN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOGBHHPNN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DDOOGBHHPNN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DDOOGBHHPNN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DDOOGBHHPNN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DDOOGBHHPNN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DDOOGBHHPNN_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDOOGBHHPNN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DDOOGBHHPNN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DDOOGBHHPNN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DDOOGBHHPNN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDOOGBHHPNN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
