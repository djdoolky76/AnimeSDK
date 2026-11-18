#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LCDHCHIECKF;
class LNODBDPJGFL;
namespace System { template <typename T> class Action_1; }

#define LCDHCHIECKF_JDBIAGPLCJJ_ACJOAFINFKK_OFFSET UNITYSDK_OFFSET(0x16358970)
#define LCDHCHIECKF_JDBIAGPLCJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16358960)

inline static constexpr unsigned int LCDHCHIECKF_JDBIAGPLCJJ_TypeDefinitionIndex = 77309;

class LCDHCHIECKF_JDBIAGPLCJJ : public ::System::Object
{
public:
	::System::Action_1<::LNODBDPJGFL*>* EJGDHCIBCJH; // 0x10
	::LCDHCHIECKF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDHCHIECKF_JDBIAGPLCJJ__CTOR_OFFSET))(this);
	}

	::System::Void ACJOAFINFKK(::System::Object* KHILBNJIAKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCDHCHIECKF_JDBIAGPLCJJ_ACJOAFINFKK_OFFSET))(this, KHILBNJIAKA);
	}
};
