#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KMBKDFCNHPJ;
namespace System { class Action; }

#define KMBKDFCNHPJ_LOAOFMILDDD_LKMKDFJAEMH_OFFSET UNITYSDK_OFFSET(0x13C85870)
#define KMBKDFCNHPJ_LOAOFMILDDD__CTOR_OFFSET UNITYSDK_OFFSET(0x13C85860)

inline static constexpr unsigned int KMBKDFCNHPJ_LOAOFMILDDD_TypeDefinitionIndex = 74310;

class KMBKDFCNHPJ_LOAOFMILDDD : public ::System::Object
{
public:
	::System::Action* JBGDMBDKHBA; // 0x10
	::KMBKDFCNHPJ* KLHPEBKNIFB; // 0x18
	::System::Int32 ABHBKFJKINO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBKDFCNHPJ_LOAOFMILDDD__CTOR_OFFSET))(this);
	}

	::System::Void LKMKDFJAEMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBKDFCNHPJ_LOAOFMILDDD_LKMKDFJAEMH_OFFSET))(this);
	}
};
