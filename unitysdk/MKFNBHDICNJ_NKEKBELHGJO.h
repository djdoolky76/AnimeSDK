#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HJOHAIPEJDD;
class JGBMOOJHMBF;
class MKFNBHDICNJ;
namespace System { template <typename T> class Action_1; }

#define MKFNBHDICNJ_NKEKBELHGJO_NFCGMENMCOE_OFFSET UNITYSDK_OFFSET(0x11F57000)
#define MKFNBHDICNJ_NKEKBELHGJO_OLFJMALKKHL_OFFSET UNITYSDK_OFFSET(0x11F57360)
#define MKFNBHDICNJ_NKEKBELHGJO__CTOR_OFFSET UNITYSDK_OFFSET(0x11F56FF0)

inline static constexpr unsigned int MKFNBHDICNJ_NKEKBELHGJO_TypeDefinitionIndex = 61371;

class MKFNBHDICNJ_NKEKBELHGJO : public ::System::Object
{
public:
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x10
	::System::Action_1<::JGBMOOJHMBF*>* EJGDHCIBCJH; // 0x18
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_NKEKBELHGJO__CTOR_OFFSET))(this);
	}

	::System::Void NFCGMENMCOE(::HJOHAIPEJDD* DOMAGGIKGIM)
	{
		return ((::System::Void(*)(::PVOID, ::HJOHAIPEJDD*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_NKEKBELHGJO_NFCGMENMCOE_OFFSET))(this, DOMAGGIKGIM);
	}

	::System::Void OLFJMALKKHL(::System::Int32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_NKEKBELHGJO_OLFJMALKKHL_OFFSET))(this, PIIPCLCCOIG);
	}
};
