#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EEA535155A7697A9_AD0113F78EA929B6_OFFSET UNITYSDK_OFFSET(0x3C83080)
#define EEA535155A7697A9_E71F054515589EEF_OFFSET UNITYSDK_OFFSET(0x3C82FE0)
#define EEA535155A7697A9_EACD63ACE06C136B_OFFSET UNITYSDK_OFFSET(0x3C83060)
#define EEA535155A7697A9_F740B08F19BB8E29_OFFSET UNITYSDK_OFFSET(0x3C831C0)

inline static constexpr unsigned int EEA535155A7697A9_TypeDefinitionIndex = 10405;

class EEA535155A7697A9 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Char>* AD0113F78EA929B6(::Il2CppArray<::System::Byte>* E83E519C5C42896F)
	{
		return ((::Il2CppArray<::System::Char>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EEA535155A7697A9_AD0113F78EA929B6_OFFSET))(E83E519C5C42896F);
	}

	static ::Il2CppArray<::System::Byte>* E71F054515589EEF(::Il2CppArray<::System::Byte>* BADCD2C933ABE188)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EEA535155A7697A9_E71F054515589EEF_OFFSET))(BADCD2C933ABE188);
	}

	static ::System::String* F740B08F19BB8E29(::Il2CppArray<::System::Byte>* E83E519C5C42896F)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EEA535155A7697A9_F740B08F19BB8E29_OFFSET))(E83E519C5C42896F);
	}

	static ::System::Char EACD63ACE06C136B(::System::Byte AE40CAA6BBFEAD2C)
	{
		return ((::System::Char(*)(::System::Byte))((::PBYTE)hIl2Cpp + EEA535155A7697A9_EACD63ACE06C136B_OFFSET))(AE40CAA6BBFEAD2C);
	}
};
