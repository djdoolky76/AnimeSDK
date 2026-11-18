#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGFOHAINHEJ;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_GCFEKFEABFO_CKDJOBGBFNL_OFFSET UNITYSDK_OFFSET(0x1153C480)
#define CFGNMICCBEK_GCFEKFEABFO_KNELLHLKIGH_OFFSET UNITYSDK_OFFSET(0x1153C390)
#define CFGNMICCBEK_GCFEKFEABFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1153C380)

inline static constexpr unsigned int CFGNMICCBEK_GCFEKFEABFO_TypeDefinitionIndex = 91444;

class CFGNMICCBEK_GCFEKFEABFO : public ::System::Object
{
public:
	::System::Action_1<::DGFOHAINHEJ*>* EDNJGMKPFHG; // 0x10
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_GCFEKFEABFO__CTOR_OFFSET))(this);
	}

	::System::Void KNELLHLKIGH(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_GCFEKFEABFO_KNELLHLKIGH_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void CKDJOBGBFNL(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_GCFEKFEABFO_CKDJOBGBFNL_OFFSET))(this, NAPFALLANDL);
	}
};
