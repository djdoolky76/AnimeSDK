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

#define EJAJKKBEPAJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14A9E8B0)
#define EJAJKKBEPAJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14A9EFC0)
#define EJAJKKBEPAJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14A9E9C0)
#define EJAJKKBEPAJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14A9F4B0)
#define EJAJKKBEPAJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14A9E9B0)
#define EJAJKKBEPAJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14A9F350)
#define EJAJKKBEPAJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14A9F020)
#define EJAJKKBEPAJ_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x14A9F660)
#define EJAJKKBEPAJ_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14A9E3A0)
#define EJAJKKBEPAJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14A9E820)
#define EJAJKKBEPAJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14A9EA40)
#define EJAJKKBEPAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14A9F2C0)

inline static constexpr unsigned int EJAJKKBEPAJ_TypeDefinitionIndex = 52199;

class EJAJKKBEPAJ : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x30
	::FOBNALGHPPD_1<::System::Single> EBADLICMCOH; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> GFIAIFOGCFP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAJKKBEPAJ__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAJKKBEPAJ_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EJAJKKBEPAJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAJKKBEPAJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAJKKBEPAJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EJAJKKBEPAJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJAJKKBEPAJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJAJKKBEPAJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EJAJKKBEPAJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::EJAJKKBEPAJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EJAJKKBEPAJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EJAJKKBEPAJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::EJAJKKBEPAJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EJAJKKBEPAJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJAJKKBEPAJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAJKKBEPAJ_JFLMLBMNFFK_OFFSET))(this);
	}
};
