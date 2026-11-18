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

#define DABDCCGHHIP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19D4D270)
#define DABDCCGHHIP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19D4D910)
#define DABDCCGHHIP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19D4D380)
#define DABDCCGHHIP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19D4DD10)
#define DABDCCGHHIP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19D4D370)
#define DABDCCGHHIP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19D4DEC0)
#define DABDCCGHHIP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19D4D970)
#define DABDCCGHHIP_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x19D4E020)
#define DABDCCGHHIP_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x19D4CE60)
#define DABDCCGHHIP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19D4D1E0)
#define DABDCCGHHIP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19D4D400)
#define DABDCCGHHIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4DC10)

inline static constexpr unsigned int DABDCCGHHIP_TypeDefinitionIndex = 42765;

class DABDCCGHHIP : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::Boolean> HCLBPGEHEHJ; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::String*> AOLGDHDOCLP; // 0x50
	::System::Byte _padding1[0x18];
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABDCCGHHIP__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABDCCGHHIP_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DABDCCGHHIP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DABDCCGHHIP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DABDCCGHHIP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DABDCCGHHIP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DABDCCGHHIP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DABDCCGHHIP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DABDCCGHHIP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DABDCCGHHIP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DABDCCGHHIP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DABDCCGHHIP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DABDCCGHHIP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DABDCCGHHIP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DABDCCGHHIP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABDCCGHHIP_JFLMLBMNFFK_OFFSET))(this);
	}
};
