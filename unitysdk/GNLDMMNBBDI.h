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

#define GNLDMMNBBDI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x125EBD60)
#define GNLDMMNBBDI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x125EC640)
#define GNLDMMNBBDI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x125EBE70)
#define GNLDMMNBBDI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x125ECA70)
#define GNLDMMNBBDI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x125EBE60)
#define GNLDMMNBBDI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x125ECCB0)
#define GNLDMMNBBDI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x125EC6A0)
#define GNLDMMNBBDI_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x125ECC20)
#define GNLDMMNBBDI_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x125EB810)
#define GNLDMMNBBDI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x125EBCC0)
#define GNLDMMNBBDI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x125EBEF0)
#define GNLDMMNBBDI__CTOR_OFFSET UNITYSDK_OFFSET(0x125EC9E0)

inline static constexpr unsigned int GNLDMMNBBDI_TypeDefinitionIndex = 56163;

class GNLDMMNBBDI : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x30
	::HBIBNDIOKPG* KMCBOJPDBBF; // 0x38
	::FOBNALGHPPD_1<::UnityEngine::Vector3> PCIAMMBFIHB; // 0x40
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> KBDLHCIMEHD; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLDMMNBBDI__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLDMMNBBDI_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GNLDMMNBBDI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLDMMNBBDI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLDMMNBBDI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GNLDMMNBBDI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GNLDMMNBBDI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GNLDMMNBBDI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GNLDMMNBBDI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GNLDMMNBBDI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GNLDMMNBBDI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLDMMNBBDI_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GNLDMMNBBDI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GNLDMMNBBDI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GNLDMMNBBDI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GNLDMMNBBDI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
