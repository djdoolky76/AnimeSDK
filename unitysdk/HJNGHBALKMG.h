#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOLMJDKOBEP;

#define HJNGHBALKMG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16CF5AB0)
#define HJNGHBALKMG_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x16CF5B90)
#define HJNGHBALKMG__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF5B50)

inline static constexpr unsigned int HJNGHBALKMG_TypeDefinitionIndex = 74570;

class HJNGHBALKMG : public ::System::Object
{
public:
	::Il2CppArray<::KOLMJDKOBEP*>* MCLLJOADCAC; // 0x10
	::System::Boolean IFHPNDPONAL; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 EBHLMLGJIHA; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNGHBALKMG__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNGHBALKMG_DISPOSE_OFFSET))(this);
	}

	::KOLMJDKOBEP* OMPFLKCBFHF()
	{
		return ((::KOLMJDKOBEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNGHBALKMG_OMPFLKCBFHF_OFFSET))(this);
	}
};
