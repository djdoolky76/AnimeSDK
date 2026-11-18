#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BDGGEAENIII_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x113DAF00)
#define BDGGEAENIII_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x113DB6D0)
#define BDGGEAENIII_FROMFLX_OFFSET UNITYSDK_OFFSET(0x113DB010)
#define BDGGEAENIII_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x113DBB30)
#define BDGGEAENIII_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x113DB000)
#define BDGGEAENIII_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x113DBD70)
#define BDGGEAENIII_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x113DB730)
#define BDGGEAENIII_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x113DBCE0)
#define BDGGEAENIII_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x113DA190)
#define BDGGEAENIII_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x113DAE70)
#define BDGGEAENIII_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x113DB090)
#define BDGGEAENIII__CTOR_OFFSET UNITYSDK_OFFSET(0x113DBAA0)

inline static constexpr unsigned int BDGGEAENIII_TypeDefinitionIndex = 87541;

class BDGGEAENIII : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x30
	::FOBNALGHPPD_1<::System::String*> DCJCHGOGLMF; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Boolean> OHMOCIHDDKN; // 0x58
	::System::Byte _padding1[0x18];
	::System::Boolean BLGMBKMILMH; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGGEAENIII__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGGEAENIII_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BDGGEAENIII_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGGEAENIII_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGGEAENIII_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BDGGEAENIII_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BDGGEAENIII_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BDGGEAENIII_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BDGGEAENIII_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BDGGEAENIII* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BDGGEAENIII*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BDGGEAENIII_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGGEAENIII_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::BDGGEAENIII* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BDGGEAENIII*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BDGGEAENIII_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
