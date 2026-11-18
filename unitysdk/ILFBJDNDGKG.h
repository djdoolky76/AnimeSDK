#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGLMNHDOILB.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define ILFBJDNDGKG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15C18640)
#define ILFBJDNDGKG_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x15C184E0)
#define ILFBJDNDGKG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15C18B30)
#define ILFBJDNDGKG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15C18750)
#define ILFBJDNDGKG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15C19020)
#define ILFBJDNDGKG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15C18740)
#define ILFBJDNDGKG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15C191D0)
#define ILFBJDNDGKG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15C18B90)
#define ILFBJDNDGKG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15C19330)
#define ILFBJDNDGKG_LAEPBDHOJJF_OFFSET UNITYSDK_OFFSET(0x15C18E70)
#define ILFBJDNDGKG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15C17FF0)
#define ILFBJDNDGKG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15C185B0)
#define ILFBJDNDGKG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15C187D0)
#define ILFBJDNDGKG__CTOR_OFFSET UNITYSDK_OFFSET(0x15C18DE0)

inline static constexpr unsigned int ILFBJDNDGKG_TypeDefinitionIndex = 48886;

class ILFBJDNDGKG : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x30
	::DGLMNHDOILB GOLFDBJDPFJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFBJDNDGKG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFBJDNDGKG_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ILFBJDNDGKG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFBJDNDGKG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFBJDNDGKG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ILFBJDNDGKG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ILFBJDNDGKG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ILFBJDNDGKG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::MoleMole::Config::CampType FCFOEJGPDNO(::DGLMNHDOILB LJEPPLANHIL)
	{
		return ((::MoleMole::Config::CampType(*)(::PVOID, ::DGLMNHDOILB))((::PBYTE)hIl2Cpp + ILFBJDNDGKG_FCFOEJGPDNO_OFFSET))(this, LJEPPLANHIL);
	}

	static ::ILFBJDNDGKG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ILFBJDNDGKG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ILFBJDNDGKG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ILFBJDNDGKG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ILFBJDNDGKG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ILFBJDNDGKG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::MoleMole::Config::CampType LAEPBDHOJJF()
	{
		return ((::MoleMole::Config::CampType(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFBJDNDGKG_LAEPBDHOJJF_OFFSET))(this);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFBJDNDGKG_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ILFBJDNDGKG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
