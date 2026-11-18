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

#define FJNAKGNGOKM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14AD76E0)
#define FJNAKGNGOKM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14AD7BF0)
#define FJNAKGNGOKM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14AD77F0)
#define FJNAKGNGOKM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14AD7F20)
#define FJNAKGNGOKM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14AD77E0)
#define FJNAKGNGOKM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14AD8160)
#define FJNAKGNGOKM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14AD7C50)
#define FJNAKGNGOKM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x14AD80D0)
#define FJNAKGNGOKM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14AD7520)
#define FJNAKGNGOKM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14AD7650)
#define FJNAKGNGOKM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14AD7870)
#define FJNAKGNGOKM__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD7E90)

inline static constexpr unsigned int FJNAKGNGOKM_TypeDefinitionIndex = 48724;

class FJNAKGNGOKM : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x30
	::FOBNALGHPPD_1<::System::Single> KLBGAHPJAJO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAKGNGOKM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAKGNGOKM_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FJNAKGNGOKM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAKGNGOKM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAKGNGOKM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FJNAKGNGOKM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FJNAKGNGOKM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FJNAKGNGOKM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FJNAKGNGOKM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FJNAKGNGOKM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FJNAKGNGOKM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FJNAKGNGOKM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAKGNGOKM_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::FJNAKGNGOKM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FJNAKGNGOKM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FJNAKGNGOKM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
