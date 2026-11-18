#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define LBNCBACLBAH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x126CBA80)
#define LBNCBACLBAH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x126CBFB0)
#define LBNCBACLBAH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x126CBB90)
#define LBNCBACLBAH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x126CC4F0)
#define LBNCBACLBAH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x126CBB80)
#define LBNCBACLBAH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x126CC300)
#define LBNCBACLBAH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x126CC010)
#define LBNCBACLBAH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x126CC460)
#define LBNCBACLBAH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x126CB7C0)
#define LBNCBACLBAH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x126CB9E0)
#define LBNCBACLBAH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x126CBC10)
#define LBNCBACLBAH__CTOR_OFFSET UNITYSDK_OFFSET(0x126CC270)

inline static constexpr unsigned int LBNCBACLBAH_TypeDefinitionIndex = 79342;

class LBNCBACLBAH : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x30
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNCBACLBAH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNCBACLBAH_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LBNCBACLBAH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNCBACLBAH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNCBACLBAH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LBNCBACLBAH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LBNCBACLBAH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LBNCBACLBAH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LBNCBACLBAH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LBNCBACLBAH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LBNCBACLBAH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LBNCBACLBAH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNCBACLBAH_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::LBNCBACLBAH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LBNCBACLBAH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LBNCBACLBAH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
