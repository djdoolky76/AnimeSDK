#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIJGGGANLLD.h"
#include "unitysdk/System/Object.h"

#define DBPGIOEACCH_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x1205D2D0)
#define DBPGIOEACCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1205D2C0)

inline static constexpr unsigned int DBPGIOEACCH_TypeDefinitionIndex = 38783;

class DBPGIOEACCH : public ::System::Object
{
public:
	::AIJGGGANLLD HGIJHODLIBC; // 0x10
	::System::UInt32 GJICOHACOKA; // 0x30
	::System::Boolean AJFFIBBGBCG; // 0x34
	::System::Byte _padding0[0x3];
	::System::Int32 OJOAICDEHKP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPGIOEACCH__CTOR_OFFSET))(this);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPGIOEACCH_CHCGMACMJLD_OFFSET))(this);
	}
};
