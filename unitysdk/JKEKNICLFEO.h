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

#define JKEKNICLFEO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17B2C560)
#define JKEKNICLFEO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17B2CA90)
#define JKEKNICLFEO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17B2C670)
#define JKEKNICLFEO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17B2CDE0)
#define JKEKNICLFEO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17B2C660)
#define JKEKNICLFEO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17B2CF90)
#define JKEKNICLFEO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17B2CAF0)
#define JKEKNICLFEO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x17B2D0F0)
#define JKEKNICLFEO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x17B2C150)
#define JKEKNICLFEO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17B2C4C0)
#define JKEKNICLFEO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17B2C6F0)
#define JKEKNICLFEO__CTOR_OFFSET UNITYSDK_OFFSET(0x17B2CD50)

inline static constexpr unsigned int JKEKNICLFEO_TypeDefinitionIndex = 60922;

class JKEKNICLFEO : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* MFKJLJJGHJF; // 0x30
	::GPIOLGMOBLJ* JOFGIJDODCD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEKNICLFEO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEKNICLFEO_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JKEKNICLFEO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEKNICLFEO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEKNICLFEO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JKEKNICLFEO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JKEKNICLFEO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::JKEKNICLFEO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JKEKNICLFEO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JKEKNICLFEO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::JKEKNICLFEO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JKEKNICLFEO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JKEKNICLFEO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JKEKNICLFEO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JKEKNICLFEO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEKNICLFEO_JFLMLBMNFFK_OFFSET))(this);
	}
};
