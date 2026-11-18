#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NFOCJEDMEIP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xE7396F0)
#define NFOCJEDMEIP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE739E20)
#define NFOCJEDMEIP_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE739800)
#define NFOCJEDMEIP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xE73A420)
#define NFOCJEDMEIP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xE7397F0)
#define NFOCJEDMEIP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xE73A230)
#define NFOCJEDMEIP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xE739E80)
#define NFOCJEDMEIP_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xE73A390)
#define NFOCJEDMEIP_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xE7392F0)
#define NFOCJEDMEIP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xE739630)
#define NFOCJEDMEIP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xE739880)
#define NFOCJEDMEIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE73A1A0)

inline static constexpr unsigned int NFOCJEDMEIP_TypeDefinitionIndex = 75312;

class NFOCJEDMEIP : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* IFNKDKKMOCI; // 0x30
	::System::String* BGPMDIKJFPJ; // 0x38
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOCJEDMEIP__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOCJEDMEIP_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NFOCJEDMEIP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOCJEDMEIP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOCJEDMEIP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NFOCJEDMEIP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NFOCJEDMEIP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NFOCJEDMEIP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NFOCJEDMEIP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NFOCJEDMEIP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NFOCJEDMEIP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NFOCJEDMEIP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOCJEDMEIP_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::NFOCJEDMEIP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NFOCJEDMEIP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NFOCJEDMEIP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
