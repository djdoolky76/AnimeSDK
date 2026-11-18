#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MJDDNHEGHFO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16C8FFF0)
#define MJDDNHEGHFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C90760)
#define MJDDNHEGHFO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16C90100)
#define MJDDNHEGHFO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16C90B50)
#define MJDDNHEGHFO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16C900F0)
#define MJDDNHEGHFO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16C90D90)
#define MJDDNHEGHFO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16C907C0)
#define MJDDNHEGHFO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16C90D00)
#define MJDDNHEGHFO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16C8FD80)
#define MJDDNHEGHFO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16C8FF50)
#define MJDDNHEGHFO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16C90180)
#define MJDDNHEGHFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16C90AC0)

inline static constexpr unsigned int MJDDNHEGHFO_TypeDefinitionIndex = 57600;

class MJDDNHEGHFO : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* ODBPLMMLIEO; // 0x30
	::HBIBNDIOKPG* MOOHFHCPOIE; // 0x38
	::FOBNALGHPPD_1<::System::Int32> BELNJJKMMJP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDDNHEGHFO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDDNHEGHFO_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MJDDNHEGHFO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDDNHEGHFO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDDNHEGHFO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MJDDNHEGHFO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MJDDNHEGHFO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MJDDNHEGHFO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MJDDNHEGHFO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MJDDNHEGHFO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MJDDNHEGHFO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDDNHEGHFO_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::MJDDNHEGHFO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MJDDNHEGHFO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MJDDNHEGHFO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MJDDNHEGHFO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
