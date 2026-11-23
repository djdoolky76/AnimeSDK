#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E2FADEFAA22B066C;
namespace System { class String; }

#define E2FADEFAA22B066C_FF7DEB7BA2E9658C_B8AC821E48E5F9B8_OFFSET UNITYSDK_OFFSET(0x38F55F0)
#define E2FADEFAA22B066C_FF7DEB7BA2E9658C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E2FADEFAA22B066C_FF7DEB7BA2E9658C_TypeDefinitionIndex = 11761;

class E2FADEFAA22B066C_FF7DEB7BA2E9658C : public ::System::Object
{
public:
	::E2FADEFAA22B066C* A544919C800E2923; // 0x10
	::System::String* B960AC235824C6C8; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2FADEFAA22B066C_FF7DEB7BA2E9658C__CTOR_OFFSET))(this);
	}

	::System::Void B8AC821E48E5F9B8(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C, ::System::Int32 E22BCD4736CD9DF9, ::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + E2FADEFAA22B066C_FF7DEB7BA2E9658C_B8AC821E48E5F9B8_OFFSET))(this, F220A2D27F7C6B6C, E22BCD4736CD9DF9, B083BE7841B347C4);
	}
};
