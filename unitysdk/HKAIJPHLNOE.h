#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFPFIPCGPAJ.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HKAIJPHLNOE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13DA7390)
#define HKAIJPHLNOE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13DA7710)
#define HKAIJPHLNOE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13DA74A0)
#define HKAIJPHLNOE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13DA7780)
#define HKAIJPHLNOE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13DA7490)
#define HKAIJPHLNOE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12E62400)
#define HKAIJPHLNOE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12E62220)
#define HKAIJPHLNOE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13DA7300)
#define HKAIJPHLNOE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13DA7520)
#define HKAIJPHLNOE__CTOR_OFFSET UNITYSDK_OFFSET(0x13DA7770)

inline static constexpr unsigned int HKAIJPHLNOE_TypeDefinitionIndex = 52759;

class HKAIJPHLNOE : public ::KFPFIPCGPAJ
{
public:
	::System::String* NDPMLBJOELL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAIJPHLNOE__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HKAIJPHLNOE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::KFPFIPCGPAJ* DGNAAPGKIPL()
	{
		return ((::KFPFIPCGPAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAIJPHLNOE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAIJPHLNOE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HKAIJPHLNOE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HKAIJPHLNOE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HKAIJPHLNOE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HKAIJPHLNOE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HKAIJPHLNOE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HKAIJPHLNOE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HKAIJPHLNOE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HKAIJPHLNOE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HKAIJPHLNOE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HKAIJPHLNOE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
