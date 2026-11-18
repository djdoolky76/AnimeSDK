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

#define FILDHIIDAFC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x10EB7110)
#define FILDHIIDAFC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10EB79C0)
#define FILDHIIDAFC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10EB7220)
#define FILDHIIDAFC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x10EB7F00)
#define FILDHIIDAFC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x10EB7210)
#define FILDHIIDAFC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x10EB7DA0)
#define FILDHIIDAFC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10EB7A20)
#define FILDHIIDAFC_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x10EB80B0)
#define FILDHIIDAFC_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x10EB6BD0)
#define FILDHIIDAFC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x10EB7080)
#define FILDHIIDAFC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10EB72A0)
#define FILDHIIDAFC__CTOR_OFFSET UNITYSDK_OFFSET(0x10EB7D10)

inline static constexpr unsigned int FILDHIIDAFC_TypeDefinitionIndex = 52318;

class FILDHIIDAFC : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::Single> GMAGAPPDICG; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> EBADLICMCOH; // 0x50
	::System::Byte _padding1[0x18];
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x70
	::FOBNALGHPPD_1<::UnityEngine::Vector3> IAGIPAIGJJC; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILDHIIDAFC__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILDHIIDAFC_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FILDHIIDAFC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FILDHIIDAFC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FILDHIIDAFC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FILDHIIDAFC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FILDHIIDAFC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FILDHIIDAFC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FILDHIIDAFC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FILDHIIDAFC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FILDHIIDAFC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FILDHIIDAFC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FILDHIIDAFC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FILDHIIDAFC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FILDHIIDAFC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILDHIIDAFC_JFLMLBMNFFK_OFFSET))(this);
	}
};
