#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NJBFCIBKCAO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1375ADF0)
#define NJBFCIBKCAO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1375B8F0)
#define NJBFCIBKCAO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1375AF00)
#define NJBFCIBKCAO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1375BD80)
#define NJBFCIBKCAO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1375AEF0)
#define NJBFCIBKCAO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1375BF30)
#define NJBFCIBKCAO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1375B950)
#define NJBFCIBKCAO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1375C090)
#define NJBFCIBKCAO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1375A990)
#define NJBFCIBKCAO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1375AD50)
#define NJBFCIBKCAO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1375AF80)
#define NJBFCIBKCAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1375BCE0)

inline static constexpr unsigned int NJBFCIBKCAO_TypeDefinitionIndex = 88281;

class NJBFCIBKCAO : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x30
	::System::String* DCPBEKFADFB; // 0x38
	::FOBNALGHPPD_1<::System::Single> PMLOGFLOLNJ; // 0x40
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> HBOJLFKAOOH; // 0x60
	::System::Byte _padding1[0x18];
	::MoleMole::Config::PropertyModifyFunction HDCIHCKELCC; // 0x80
	::MoleMole::Config::BaseProperty EHAKJBAKGDL; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBFCIBKCAO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBFCIBKCAO_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NJBFCIBKCAO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBFCIBKCAO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBFCIBKCAO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NJBFCIBKCAO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NJBFCIBKCAO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NJBFCIBKCAO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NJBFCIBKCAO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NJBFCIBKCAO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NJBFCIBKCAO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NJBFCIBKCAO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NJBFCIBKCAO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NJBFCIBKCAO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NJBFCIBKCAO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBFCIBKCAO_JFLMLBMNFFK_OFFSET))(this);
	}
};
