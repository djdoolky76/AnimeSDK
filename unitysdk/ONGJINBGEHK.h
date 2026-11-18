#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define ONGJINBGEHK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x136BF5D0)
#define ONGJINBGEHK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x136BFB00)
#define ONGJINBGEHK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x136BF6E0)
#define ONGJINBGEHK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x136C0040)
#define ONGJINBGEHK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x136BF6D0)
#define ONGJINBGEHK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x136BFEE0)
#define ONGJINBGEHK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x136BFB60)
#define ONGJINBGEHK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x136BFE50)
#define ONGJINBGEHK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x136BF0A0)
#define ONGJINBGEHK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x136BF530)
#define ONGJINBGEHK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x136BF760)
#define ONGJINBGEHK__CTOR_OFFSET UNITYSDK_OFFSET(0x136BFDC0)

inline static constexpr unsigned int ONGJINBGEHK_TypeDefinitionIndex = 87808;

class ONGJINBGEHK : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x30
	::GPIOLGMOBLJ* CMDCIADBCCN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJINBGEHK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJINBGEHK_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ONGJINBGEHK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJINBGEHK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJINBGEHK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ONGJINBGEHK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ONGJINBGEHK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJINBGEHK_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ONGJINBGEHK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ONGJINBGEHK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ONGJINBGEHK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ONGJINBGEHK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ONGJINBGEHK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::ONGJINBGEHK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ONGJINBGEHK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ONGJINBGEHK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
