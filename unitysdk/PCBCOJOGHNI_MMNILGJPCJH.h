#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFBGJJPIDLA;
namespace System { template <typename T> class Action_1; }

#define PCBCOJOGHNI_MMNILGJPCJH_DEPLDLJOOKO_OFFSET UNITYSDK_OFFSET(0x11B55A40)
#define PCBCOJOGHNI_MMNILGJPCJH__CTOR_OFFSET UNITYSDK_OFFSET(0x11B55A30)

inline static constexpr unsigned int PCBCOJOGHNI_MMNILGJPCJH_TypeDefinitionIndex = 48403;

class PCBCOJOGHNI_MMNILGJPCJH : public ::System::Object
{
public:
	::System::Action_1<::IFBGJJPIDLA*>* HJECDMDLKON; // 0x10
	::IFBGJJPIDLA* LOMKCAMNCAC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBCOJOGHNI_MMNILGJPCJH__CTOR_OFFSET))(this);
	}

	::System::Void DEPLDLJOOKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBCOJOGHNI_MMNILGJPCJH_DEPLDLJOOKO_OFFSET))(this);
	}
};
