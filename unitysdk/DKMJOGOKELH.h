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

#define DKMJOGOKELH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1241D8E0)
#define DKMJOGOKELH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1241E050)
#define DKMJOGOKELH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1241D9F0)
#define DKMJOGOKELH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1241E630)
#define DKMJOGOKELH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1241D9E0)
#define DKMJOGOKELH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1241E440)
#define DKMJOGOKELH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1241E0B0)
#define DKMJOGOKELH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1241E5A0)
#define DKMJOGOKELH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1241D6A0)
#define DKMJOGOKELH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1241D840)
#define DKMJOGOKELH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1241DA70)
#define DKMJOGOKELH__CTOR_OFFSET UNITYSDK_OFFSET(0x1241E3B0)

inline static constexpr unsigned int DKMJOGOKELH_TypeDefinitionIndex = 59186;

class DKMJOGOKELH : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::Int32> BELNJJKMMJP; // 0x30
	::System::Byte _padding0[0x18];
	::HBIBNDIOKPG* MOOHFHCPOIE; // 0x50
	::HBIBNDIOKPG* ODBPLMMLIEO; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMJOGOKELH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMJOGOKELH_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DKMJOGOKELH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMJOGOKELH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMJOGOKELH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DKMJOGOKELH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DKMJOGOKELH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DKMJOGOKELH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DKMJOGOKELH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DKMJOGOKELH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DKMJOGOKELH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DKMJOGOKELH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMJOGOKELH_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::DKMJOGOKELH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DKMJOGOKELH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DKMJOGOKELH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
