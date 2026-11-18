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

#define BMEKHPHBNIP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18DA8580)
#define BMEKHPHBNIP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18DA8DE0)
#define BMEKHPHBNIP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18DA8690)
#define BMEKHPHBNIP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x18DA9390)
#define BMEKHPHBNIP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x18DA8680)
#define BMEKHPHBNIP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x18DA9230)
#define BMEKHPHBNIP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18DA8E40)
#define BMEKHPHBNIP_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x18DA91A0)
#define BMEKHPHBNIP_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x18DA8320)
#define BMEKHPHBNIP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x18DA84F0)
#define BMEKHPHBNIP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18DA8710)
#define BMEKHPHBNIP__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA9110)

inline static constexpr unsigned int BMEKHPHBNIP_TypeDefinitionIndex = 59539;

class BMEKHPHBNIP : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::Single> HFGOOECLHDD; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> CNCCEBPMCLG; // 0x50
	::System::Byte _padding1[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x70
	::FOBNALGHPPD_1<::System::Single> LMIBEHAAIIB; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEKHPHBNIP__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEKHPHBNIP_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BMEKHPHBNIP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEKHPHBNIP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEKHPHBNIP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BMEKHPHBNIP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMEKHPHBNIP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BMEKHPHBNIP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEKHPHBNIP_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMEKHPHBNIP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BMEKHPHBNIP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BMEKHPHBNIP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BMEKHPHBNIP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::BMEKHPHBNIP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BMEKHPHBNIP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMEKHPHBNIP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
