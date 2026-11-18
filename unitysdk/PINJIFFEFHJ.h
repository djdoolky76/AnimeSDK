#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PINJIFFEFHJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13718DA0)
#define PINJIFFEFHJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13719480)
#define PINJIFFEFHJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13718EB0)
#define PINJIFFEFHJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13719860)
#define PINJIFFEFHJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13718EA0)
#define PINJIFFEFHJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13719AA0)
#define PINJIFFEFHJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x137194E0)
#define PINJIFFEFHJ_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13719A10)
#define PINJIFFEFHJ_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x13718950)
#define PINJIFFEFHJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13718D00)
#define PINJIFFEFHJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13718F30)
#define PINJIFFEFHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x137197D0)

inline static constexpr unsigned int PINJIFFEFHJ_TypeDefinitionIndex = 74962;

class PINJIFFEFHJ : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x30
	::HBIBNDIOKPG* ALBCFGOBAEK; // 0x38
	::FOBNALGHPPD_1<::System::String*> DCJCHGOGLMF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PINJIFFEFHJ__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PINJIFFEFHJ_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PINJIFFEFHJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PINJIFFEFHJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PINJIFFEFHJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PINJIFFEFHJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PINJIFFEFHJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PINJIFFEFHJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PINJIFFEFHJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PINJIFFEFHJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PINJIFFEFHJ_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PINJIFFEFHJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PINJIFFEFHJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PINJIFFEFHJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PINJIFFEFHJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PINJIFFEFHJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
