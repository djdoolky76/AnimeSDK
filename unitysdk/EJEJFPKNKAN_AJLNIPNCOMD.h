#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EJEJFPKNKAN_AJLNIPNCOMD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x17116F80)
#define EJEJFPKNKAN_AJLNIPNCOMD__CTOR_OFFSET UNITYSDK_OFFSET(0x17116F70)

inline static constexpr unsigned int EJEJFPKNKAN_AJLNIPNCOMD_TypeDefinitionIndex = 44877;

class EJEJFPKNKAN_AJLNIPNCOMD : public ::System::Object
{
public:
	::System::Boolean CJGKDAIMJHL; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single OCBIKJLBCIA; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEJFPKNKAN_AJLNIPNCOMD__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEJFPKNKAN_AJLNIPNCOMD_NPOLNFDBOOD_OFFSET))(this);
	}
};
