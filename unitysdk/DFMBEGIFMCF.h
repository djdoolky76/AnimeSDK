#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define DFMBEGIFMCF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13292450)
#define DFMBEGIFMCF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13292B60)
#define DFMBEGIFMCF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13292560)
#define DFMBEGIFMCF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13293050)
#define DFMBEGIFMCF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13292550)
#define DFMBEGIFMCF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13292EF0)
#define DFMBEGIFMCF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13292BC0)
#define DFMBEGIFMCF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13293200)
#define DFMBEGIFMCF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x13291F80)
#define DFMBEGIFMCF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x132923C0)
#define DFMBEGIFMCF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x132925E0)
#define DFMBEGIFMCF__CTOR_OFFSET UNITYSDK_OFFSET(0x13292E60)

inline static constexpr unsigned int DFMBEGIFMCF_TypeDefinitionIndex = 91859;

class DFMBEGIFMCF : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::Single> GJLKCLKBNME; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> BDPOBPDKLHJ; // 0x50
	::System::Byte _padding1[0x18];
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMBEGIFMCF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMBEGIFMCF_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DFMBEGIFMCF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMBEGIFMCF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMBEGIFMCF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DFMBEGIFMCF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DFMBEGIFMCF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DFMBEGIFMCF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DFMBEGIFMCF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DFMBEGIFMCF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DFMBEGIFMCF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DFMBEGIFMCF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::DFMBEGIFMCF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DFMBEGIFMCF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DFMBEGIFMCF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMBEGIFMCF_JFLMLBMNFFK_OFFSET))(this);
	}
};
