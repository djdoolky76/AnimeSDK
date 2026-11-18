#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KJDAIKKIJCI;
namespace System { class Action; }

#define KJDAIKKIJCI_LENFCEGAONN_ACBLEFBJJAC_OFFSET UNITYSDK_OFFSET(0x16812CF0)
#define KJDAIKKIJCI_LENFCEGAONN_CCDFAJEHPJM_OFFSET UNITYSDK_OFFSET(0x16812D10)
#define KJDAIKKIJCI_LENFCEGAONN__CTOR_OFFSET UNITYSDK_OFFSET(0x16812CE0)

inline static constexpr unsigned int KJDAIKKIJCI_LENFCEGAONN_TypeDefinitionIndex = 85203;

class KJDAIKKIJCI_LENFCEGAONN : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::KJDAIKKIJCI* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDAIKKIJCI_LENFCEGAONN__CTOR_OFFSET))(this);
	}

	::System::Void ACBLEFBJJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDAIKKIJCI_LENFCEGAONN_ACBLEFBJJAC_OFFSET))(this);
	}

	::System::Void CCDFAJEHPJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDAIKKIJCI_LENFCEGAONN_CCDFAJEHPJM_OFFSET))(this);
	}
};
