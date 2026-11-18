#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBOPDFEMAFJ.h"
#include "unitysdk/System/Object.h"

class HCBFNKIPOPJ;
class MLJNEFKDCKN;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCBFNKIPOPJ_CPOKLDFBJOB_HECBIOPJIHA_OFFSET UNITYSDK_OFFSET(0x19DF0EC0)
#define HCBFNKIPOPJ_CPOKLDFBJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF0EB0)

inline static constexpr unsigned int HCBFNKIPOPJ_CPOKLDFBJOB_TypeDefinitionIndex = 60438;

class HCBFNKIPOPJ_CPOKLDFBJOB : public ::System::Object
{
public:
	::System::Action_1<::OBOPDFEMAFJ>* HGBOMLCCBEE; // 0x10
	::MLJNEFKDCKN* HENLHIGOHFL; // 0x18
	::HCBFNKIPOPJ* KLHPEBKNIFB; // 0x20
	::System::Action* CAAFEGLOALC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBFNKIPOPJ_CPOKLDFBJOB__CTOR_OFFSET))(this);
	}

	::System::Void HECBIOPJIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBFNKIPOPJ_CPOKLDFBJOB_HECBIOPJIHA_OFFSET))(this);
	}
};
