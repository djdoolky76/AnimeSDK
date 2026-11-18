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

#define PNKAIDBFKBB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13729720)
#define PNKAIDBFKBB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13729C30)
#define PNKAIDBFKBB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13729830)
#define PNKAIDBFKBB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13729F80)
#define PNKAIDBFKBB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13729820)
#define PNKAIDBFKBB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1372A1C0)
#define PNKAIDBFKBB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13729C90)
#define PNKAIDBFKBB_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1372A130)
#define PNKAIDBFKBB_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x137294A0)
#define PNKAIDBFKBB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13729690)
#define PNKAIDBFKBB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x137298B0)
#define PNKAIDBFKBB__CTOR_OFFSET UNITYSDK_OFFSET(0x13729EF0)

inline static constexpr unsigned int PNKAIDBFKBB_TypeDefinitionIndex = 93019;

class PNKAIDBFKBB : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::String*> PFGJCNHGNPO; // 0x30
	::System::Byte _padding0[0x18];
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKAIDBFKBB__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKAIDBFKBB_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PNKAIDBFKBB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKAIDBFKBB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKAIDBFKBB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PNKAIDBFKBB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PNKAIDBFKBB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PNKAIDBFKBB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PNKAIDBFKBB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PNKAIDBFKBB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PNKAIDBFKBB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PNKAIDBFKBB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKAIDBFKBB_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::PNKAIDBFKBB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PNKAIDBFKBB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PNKAIDBFKBB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
