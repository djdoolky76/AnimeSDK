#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define HBKBCFKLPBA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15D948F0)
#define HBKBCFKLPBA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15D94FB0)
#define HBKBCFKLPBA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15D94A00)
#define HBKBCFKLPBA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15D95330)
#define HBKBCFKLPBA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15D949F0)
#define HBKBCFKLPBA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15D95570)
#define HBKBCFKLPBA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15D95010)
#define HBKBCFKLPBA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15D954E0)
#define HBKBCFKLPBA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15D946E0)
#define HBKBCFKLPBA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15D94860)
#define HBKBCFKLPBA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15D94A80)
#define HBKBCFKLPBA__CTOR_OFFSET UNITYSDK_OFFSET(0x15D952A0)

inline static constexpr unsigned int HBKBCFKLPBA_TypeDefinitionIndex = 83849;

class HBKBCFKLPBA : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::Single> HFGOOECLHDD; // 0x30
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x50
	::FOBNALGHPPD_1<::System::Single> LMIBEHAAIIB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKBCFKLPBA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKBCFKLPBA_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HBKBCFKLPBA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKBCFKLPBA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKBCFKLPBA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HBKBCFKLPBA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HBKBCFKLPBA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HBKBCFKLPBA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HBKBCFKLPBA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HBKBCFKLPBA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HBKBCFKLPBA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HBKBCFKLPBA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKBCFKLPBA_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::HBKBCFKLPBA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HBKBCFKLPBA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HBKBCFKLPBA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
