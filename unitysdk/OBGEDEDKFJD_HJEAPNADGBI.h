#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBGEDEDKFJD_JLOOMEDFMIN.h"
#include "unitysdk/System/Object.h"

class OBGEDEDKFJD;

#define OBGEDEDKFJD_HJEAPNADGBI_KHBJAHEADFA_OFFSET UNITYSDK_OFFSET(0xFD60B30)
#define OBGEDEDKFJD_HJEAPNADGBI__CTOR_OFFSET UNITYSDK_OFFSET(0xFD60B20)

inline static constexpr unsigned int OBGEDEDKFJD_HJEAPNADGBI_TypeDefinitionIndex = 56051;

class OBGEDEDKFJD_HJEAPNADGBI : public ::System::Object
{
public:
	::OBGEDEDKFJD_JLOOMEDFMIN HEFJDANFOKC; // 0x10
	::OBGEDEDKFJD* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGEDEDKFJD_HJEAPNADGBI__CTOR_OFFSET))(this);
	}

	::System::Void KHBJAHEADFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGEDEDKFJD_HJEAPNADGBI_KHBJAHEADFA_OFFSET))(this);
	}
};
