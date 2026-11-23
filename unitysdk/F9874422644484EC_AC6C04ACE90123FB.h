#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F9874422644484EC_AC6C04ACE90123FB_F713D5CBFD0AAE2A_OFFSET UNITYSDK_OFFSET(0x292D090)
#define F9874422644484EC_AC6C04ACE90123FB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F9874422644484EC_AC6C04ACE90123FB_TypeDefinitionIndex = 15355;

class F9874422644484EC_AC6C04ACE90123FB : public ::System::Object
{
public:
	static ::System::String* F713D5CBFD0AAE2A(::Il2CppArray<::System::Byte>* E83E519C5C42896F)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + F9874422644484EC_AC6C04ACE90123FB_F713D5CBFD0AAE2A_OFFSET))(E83E519C5C42896F);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9874422644484EC_AC6C04ACE90123FB__CTOR_OFFSET))(this);
	}
};
