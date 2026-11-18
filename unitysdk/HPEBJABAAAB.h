#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/LOEFNLADIDM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define HPEBJABAAAB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16F52300)
#define HPEBJABAAAB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F52AE0)
#define HPEBJABAAAB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16F52410)
#define HPEBJABAAAB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16F53080)
#define HPEBJABAAAB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16F52400)
#define HPEBJABAAAB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16F52E90)
#define HPEBJABAAAB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16F52B40)
#define HPEBJABAAAB_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16F52FF0)
#define HPEBJABAAAB_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16F52050)
#define HPEBJABAAAB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16F52270)
#define HPEBJABAAAB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16F52490)
#define HPEBJABAAAB__CTOR_OFFSET UNITYSDK_OFFSET(0x16F52E00)

inline static constexpr unsigned int HPEBJABAAAB_TypeDefinitionIndex = 86673;

class HPEBJABAAAB : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::Single> HFGOOECLHDD; // 0x30
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x50
	::FOBNALGHPPD_1<::System::Single> LMIBEHAAIIB; // 0x58
	::System::Byte _padding1[0x18];
	::LOEFNLADIDM LLDMOGGEDOD; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEBJABAAAB__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEBJABAAAB_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HPEBJABAAAB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEBJABAAAB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEBJABAAAB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HPEBJABAAAB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HPEBJABAAAB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HPEBJABAAAB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HPEBJABAAAB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HPEBJABAAAB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEBJABAAAB_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HPEBJABAAAB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HPEBJABAAAB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HPEBJABAAAB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HPEBJABAAAB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HPEBJABAAAB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
