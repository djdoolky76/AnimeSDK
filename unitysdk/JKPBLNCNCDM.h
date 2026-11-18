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

#define JKPBLNCNCDM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A47A740)
#define JKPBLNCNCDM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A47AE00)
#define JKPBLNCNCDM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A47A850)
#define JKPBLNCNCDM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1A47B370)
#define JKPBLNCNCDM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A47A840)
#define JKPBLNCNCDM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1A47B210)
#define JKPBLNCNCDM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A47AE60)
#define JKPBLNCNCDM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1A47B180)
#define JKPBLNCNCDM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1A47A530)
#define JKPBLNCNCDM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A47A6B0)
#define JKPBLNCNCDM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A47A8D0)
#define JKPBLNCNCDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47B0F0)

inline static constexpr unsigned int JKPBLNCNCDM_TypeDefinitionIndex = 80799;

class JKPBLNCNCDM : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x30
	::FOBNALGHPPD_1<::System::Single> LMIBEHAAIIB; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> HFGOOECLHDD; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPBLNCNCDM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPBLNCNCDM_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JKPBLNCNCDM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPBLNCNCDM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPBLNCNCDM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JKPBLNCNCDM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JKPBLNCNCDM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPBLNCNCDM_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JKPBLNCNCDM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JKPBLNCNCDM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::JKPBLNCNCDM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JKPBLNCNCDM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JKPBLNCNCDM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::JKPBLNCNCDM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JKPBLNCNCDM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JKPBLNCNCDM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
