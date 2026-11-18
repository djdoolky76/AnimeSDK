#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define HOIEKAPFFDM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19E38900)
#define HOIEKAPFFDM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19E38CF0)
#define HOIEKAPFFDM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19E38A10)
#define HOIEKAPFFDM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19E39080)
#define HOIEKAPFFDM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19E38A00)
#define HOIEKAPFFDM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19E39230)
#define HOIEKAPFFDM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19E38D50)
#define HOIEKAPFFDM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x19E38FF0)
#define HOIEKAPFFDM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x19E386C0)
#define HOIEKAPFFDM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19E38870)
#define HOIEKAPFFDM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19E38A90)
#define HOIEKAPFFDM__CTOR_OFFSET UNITYSDK_OFFSET(0x19E38F60)

inline static constexpr unsigned int HOIEKAPFFDM_TypeDefinitionIndex = 78502;

class HOIEKAPFFDM : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOIEKAPFFDM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOIEKAPFFDM_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HOIEKAPFFDM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOIEKAPFFDM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOIEKAPFFDM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HOIEKAPFFDM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HOIEKAPFFDM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOIEKAPFFDM_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::HOIEKAPFFDM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HOIEKAPFFDM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HOIEKAPFFDM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HOIEKAPFFDM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HOIEKAPFFDM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HOIEKAPFFDM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HOIEKAPFFDM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HOIEKAPFFDM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
