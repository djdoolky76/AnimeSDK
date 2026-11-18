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

#define JNEFPIGKHCD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17631150)
#define JNEFPIGKHCD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17631680)
#define JNEFPIGKHCD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17631260)
#define JNEFPIGKHCD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17631BC0)
#define JNEFPIGKHCD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17631250)
#define JNEFPIGKHCD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17631A60)
#define JNEFPIGKHCD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x176316E0)
#define JNEFPIGKHCD_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x176319D0)
#define JNEFPIGKHCD_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x17630B00)
#define JNEFPIGKHCD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x176310B0)
#define JNEFPIGKHCD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x176312E0)
#define JNEFPIGKHCD__CTOR_OFFSET UNITYSDK_OFFSET(0x17631940)

inline static constexpr unsigned int JNEFPIGKHCD_TypeDefinitionIndex = 77728;

class JNEFPIGKHCD : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* CMDCIADBCCN; // 0x30
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEFPIGKHCD__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEFPIGKHCD_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JNEFPIGKHCD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEFPIGKHCD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEFPIGKHCD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JNEFPIGKHCD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JNEFPIGKHCD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEFPIGKHCD_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JNEFPIGKHCD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::JNEFPIGKHCD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JNEFPIGKHCD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JNEFPIGKHCD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::JNEFPIGKHCD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JNEFPIGKHCD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JNEFPIGKHCD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JNEFPIGKHCD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
