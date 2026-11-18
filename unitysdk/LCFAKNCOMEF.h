#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMGFCFDABLN.h"
#include "unitysdk/System/Object.h"

class GAMICCELBAG;
namespace SimpleJSON { class JSONNode; }

#define LCFAKNCOMEF_IDJLLCKBLPF_OFFSET UNITYSDK_OFFSET(0x15807BC0)
#define LCFAKNCOMEF_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x15807A70)
#define LCFAKNCOMEF_PKLFFIJCMHO_1_OFFSET UNITYSDK_OFFSET(0x15807CD0)
#define LCFAKNCOMEF_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x15807830)
#define LCFAKNCOMEF__CTOR_OFFSET UNITYSDK_OFFSET(0x15807BB0)

inline static constexpr unsigned int LCFAKNCOMEF_TypeDefinitionIndex = 70536;

class LCFAKNCOMEF : public ::System::Object
{
public:
	::GAMICCELBAG* GPIOJBLKFAJ; // 0x10
	::OMGFCFDABLN NOOLOILNGPL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAKNCOMEF__CTOR_OFFSET))(this);
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + LCFAKNCOMEF_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAKNCOMEF_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean IDJLLCKBLPF(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + LCFAKNCOMEF_IDJLLCKBLPF_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PKLFFIJCMHO_1(::OMGFCFDABLN LHMJGBDCPEP, ::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::OMGFCFDABLN, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + LCFAKNCOMEF_PKLFFIJCMHO_1_OFFSET))(this, LHMJGBDCPEP, HHIJHDFHPOI);
	}
};
