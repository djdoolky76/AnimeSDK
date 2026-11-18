#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define APNCODNOFLH_OKAMKLFDJMD_HGDLLNNLLKP_OFFSET UNITYSDK_OFFSET(0x12674CF0)
#define APNCODNOFLH_OKAMKLFDJMD_IIIOBIELADH_OFFSET UNITYSDK_OFFSET(0x12674B40)
#define APNCODNOFLH_OKAMKLFDJMD_PPEBEPCPEIA_OFFSET UNITYSDK_OFFSET(0x12674EA0)
#define APNCODNOFLH_OKAMKLFDJMD__CTOR_OFFSET UNITYSDK_OFFSET(0x12674B30)

inline static constexpr unsigned int APNCODNOFLH_OKAMKLFDJMD_TypeDefinitionIndex = 80727;

class APNCODNOFLH_OKAMKLFDJMD : public ::System::Object
{
public:
	::System::Action* MGAKJHJAGJI; // 0x10
	::System::Action* KAOPKANJNNJ; // 0x18
	::System::String* BJHEGEJPPCJ; // 0x20
	::System::String* ECHEJBHLNGI; // 0x28
	::System::Action_1<::UnityEngine::Transform*>* EEMGAKNBADM; // 0x30
	::System::Boolean NHKBHCMJPGA; // 0x38
	::System::Boolean BIICDBLNHND; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNCODNOFLH_OKAMKLFDJMD__CTOR_OFFSET))(this);
	}

	::System::Void IIIOBIELADH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNCODNOFLH_OKAMKLFDJMD_IIIOBIELADH_OFFSET))(this);
	}

	::System::Void HGDLLNNLLKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNCODNOFLH_OKAMKLFDJMD_HGDLLNNLLKP_OFFSET))(this);
	}

	::System::Void PPEBEPCPEIA(::UnityEngine::Transform* IBMHNNJOMMG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + APNCODNOFLH_OKAMKLFDJMD_PPEBEPCPEIA_OFFSET))(this, IBMHNNJOMMG);
	}
};
