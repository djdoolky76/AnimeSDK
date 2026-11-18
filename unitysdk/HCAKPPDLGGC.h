#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace SimpleJSON { class JSONNode; }

#define HCAKPPDLGGC_BFDANFKFPDO_OFFSET UNITYSDK_OFFSET(0x18174160)
#define HCAKPPDLGGC_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x18173F10)
#define HCAKPPDLGGC_NFAOKJPILBO_OFFSET UNITYSDK_OFFSET(0x18174020)
#define HCAKPPDLGGC_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x18173FA0)
#define HCAKPPDLGGC__CTOR_OFFSET UNITYSDK_OFFSET(0x18173F00)

inline static constexpr unsigned int HCAKPPDLGGC_TypeDefinitionIndex = 76558;

class HCAKPPDLGGC : public ::System::Object
{
public:
	::System::Boolean EGEGIMGMJHN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAKPPDLGGC__CTOR_OFFSET))(this);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAKPPDLGGC_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + HCAKPPDLGGC_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean NFAOKJPILBO(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HCAKPPDLGGC_NFAOKJPILBO_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean BFDANFKFPDO(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HCAKPPDLGGC_BFDANFKFPDO_OFFSET))(this, HHIJHDFHPOI);
	}
};
