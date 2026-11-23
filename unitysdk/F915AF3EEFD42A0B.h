#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EF36EA1CA14EED77.h"

class A35E521B7672CA3E;
class BED9DB3A34D9A5A5;
namespace System { class String; }

#define F915AF3EEFD42A0B__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1FFE0)

inline static constexpr unsigned int F915AF3EEFD42A0B_TypeDefinitionIndex = 7540;

class F915AF3EEFD42A0B : public ::EF36EA1CA14EED77
{
public:
	::System::String* E1DE76B0F280BD45; // 0x30
	::System::String* F58B5819CB8F46BD; // 0x38
	::System::Boolean F8ED4EE469B115EC; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 EB57988CFFC144ED; // 0x44

	::System::Void _ctor(::BED9DB3A34D9A5A5* B83442F930EA3E85, ::A35E521B7672CA3E* B076D6911116907A)
	{
		return ((::System::Void(*)(::PVOID, ::BED9DB3A34D9A5A5*, ::A35E521B7672CA3E*))((::PBYTE)hIl2Cpp + F915AF3EEFD42A0B__CTOR_OFFSET))(this, B83442F930EA3E85, B076D6911116907A);
	}
};
