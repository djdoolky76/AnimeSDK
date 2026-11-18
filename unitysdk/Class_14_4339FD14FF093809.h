#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_14_4339FD14FF093809_METHOD_0_OFFSET UNITYSDK_OFFSET(0x16C4CBA0)
#define CLASS_14_4339FD14FF093809_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x16C4D020)

inline static constexpr unsigned int Class_14_4339FD14FF093809_TypeDefinitionIndex = 58365;

class Class_14_4339FD14FF093809 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>* Method_0(::System::String* LJBPECKCCEA)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_14_4339FD14FF093809_METHOD_0_OFFSET))(LJBPECKCCEA);
	}

	static ::System::String* Method_1_1(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_14_4339FD14FF093809_METHOD_1_1_OFFSET))(LJBPECKCCEA);
	}
};
