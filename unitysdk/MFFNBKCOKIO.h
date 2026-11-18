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
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MFFNBKCOKIO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13D256E0)
#define MFFNBKCOKIO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13D25EB0)
#define MFFNBKCOKIO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13D257F0)
#define MFFNBKCOKIO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13D263A0)
#define MFFNBKCOKIO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13D257E0)
#define MFFNBKCOKIO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13D26550)
#define MFFNBKCOKIO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13D25F10)
#define MFFNBKCOKIO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13D26310)
#define MFFNBKCOKIO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x13D24270)
#define MFFNBKCOKIO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13D25650)
#define MFFNBKCOKIO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13D25870)
#define MFFNBKCOKIO__CTOR_OFFSET UNITYSDK_OFFSET(0x13D26280)

inline static constexpr unsigned int MFFNBKCOKIO_TypeDefinitionIndex = 55621;

class MFFNBKCOKIO : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::String*> DCJCHGOGLMF; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> ILOJFPNKJII; // 0x50
	::System::Byte _padding1[0x18];
	::HBIBNDIOKPG* IFEFGIHOKOC; // 0x70
	::System::Boolean BLGMBKMILMH; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFNBKCOKIO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFNBKCOKIO_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MFFNBKCOKIO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFNBKCOKIO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFNBKCOKIO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MFFNBKCOKIO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFFNBKCOKIO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MFFNBKCOKIO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFNBKCOKIO_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::MFFNBKCOKIO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MFFNBKCOKIO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFFNBKCOKIO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MFFNBKCOKIO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MFFNBKCOKIO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MFFNBKCOKIO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFFNBKCOKIO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
