#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LKMBKLHPKFD;
class LKMLFIAKFOO;
namespace System { class Action; }

#define LKMLFIAKFOO_DAPGBDMFNFJ_NPKKLDOJKIH_OFFSET UNITYSDK_OFFSET(0x1258E590)
#define LKMLFIAKFOO_DAPGBDMFNFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1258E580)

inline static constexpr unsigned int LKMLFIAKFOO_DAPGBDMFNFJ_TypeDefinitionIndex = 43610;

class LKMLFIAKFOO_DAPGBDMFNFJ : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::LKMLFIAKFOO* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_DAPGBDMFNFJ__CTOR_OFFSET))(this);
	}

	::System::Void NPKKLDOJKIH(::LKMBKLHPKFD* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::LKMBKLHPKFD*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_DAPGBDMFNFJ_NPKKLDOJKIH_OFFSET))(this, GLAOEHCGCFO);
	}
};
