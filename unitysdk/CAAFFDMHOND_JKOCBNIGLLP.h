#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAAFFDMHOND;
namespace System { class String; }

#define CAAFFDMHOND_JKOCBNIGLLP_GOCBENADPNA_OFFSET UNITYSDK_OFFSET(0x159A63F0)
#define CAAFFDMHOND_JKOCBNIGLLP__CTOR_OFFSET UNITYSDK_OFFSET(0x159A63E0)

inline static constexpr unsigned int CAAFFDMHOND_JKOCBNIGLLP_TypeDefinitionIndex = 45290;

class CAAFFDMHOND_JKOCBNIGLLP : public ::System::Object
{
public:
	::CAAFFDMHOND* KLHPEBKNIFB; // 0x10
	::System::Boolean CNNNAJDJMEC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAFFDMHOND_JKOCBNIGLLP__CTOR_OFFSET))(this);
	}

	::System::String* GOCBENADPNA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAFFDMHOND_JKOCBNIGLLP_GOCBENADPNA_OFFSET))(this);
	}
};
