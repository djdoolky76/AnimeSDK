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

#define NJDACDLDNND_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1AE24C80)
#define NJDACDLDNND_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AE25190)
#define NJDACDLDNND_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1AE24D90)
#define NJDACDLDNND_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1AE256D0)
#define NJDACDLDNND_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1AE24D80)
#define NJDACDLDNND_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1AE254E0)
#define NJDACDLDNND_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1AE251F0)
#define NJDACDLDNND_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1AE25640)
#define NJDACDLDNND_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1AE247D0)
#define NJDACDLDNND_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1AE24BF0)
#define NJDACDLDNND_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1AE24E10)
#define NJDACDLDNND__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE25450)

inline static constexpr unsigned int NJDACDLDNND_TypeDefinitionIndex = 84525;

class NJDACDLDNND : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x30
	::FOBNALGHPPD_1<::System::String*> DCJCHGOGLMF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDACDLDNND__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDACDLDNND_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NJDACDLDNND_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDACDLDNND_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDACDLDNND_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NJDACDLDNND_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NJDACDLDNND_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NJDACDLDNND_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NJDACDLDNND* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NJDACDLDNND*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NJDACDLDNND_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDACDLDNND_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NJDACDLDNND_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NJDACDLDNND* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NJDACDLDNND*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NJDACDLDNND_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
