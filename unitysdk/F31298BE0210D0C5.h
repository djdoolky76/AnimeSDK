#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class RSA; }

#define F31298BE0210D0C5_A0DDD98128894346_1_OFFSET UNITYSDK_OFFSET(0x3B23E90)
#define F31298BE0210D0C5_A0DDD98128894346_OFFSET UNITYSDK_OFFSET(0x3B23EA0)
#define F31298BE0210D0C5_B59079FDA370300B_OFFSET UNITYSDK_OFFSET(0x3B24180)
#define F31298BE0210D0C5_E08E3223BD4C00F9_OFFSET UNITYSDK_OFFSET(0x3B24630)
#define F31298BE0210D0C5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B247A0)
#define F31298BE0210D0C5__CTOR_OFFSET UNITYSDK_OFFSET(0x3B24780)

inline static constexpr unsigned int F31298BE0210D0C5_TypeDefinitionIndex = 19272;

class F31298BE0210D0C5 : public ::System::Object
{
public:
	::System::Boolean A5E7533B95BE3A5C; // 0x10
	::System::Byte _padding0[0x7];
	::System::Security::Cryptography::RSA* FC17E705F01EA4DC; // 0x18
	::System::Boolean B6C61CA362BF21E7; // 0x20
	::System::Byte _padding1[0x3];
	::System::Int32 E55695FF4F436498; // 0x24

	static ::F31298BE0210D0C5* A0DDD98128894346(::System::String* A12DB363D8AE7A23, ::System::String* E15BCD7E743D54ED)
	{
		return ((::F31298BE0210D0C5*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + F31298BE0210D0C5_A0DDD98128894346_OFFSET))(A12DB363D8AE7A23, E15BCD7E743D54ED);
	}

	static ::F31298BE0210D0C5* A0DDD98128894346_1(::System::String* A12DB363D8AE7A23)
	{
		return ((::F31298BE0210D0C5*(*)(::System::String*))((::PBYTE)hIl2Cpp + F31298BE0210D0C5_A0DDD98128894346_1_OFFSET))(A12DB363D8AE7A23);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F31298BE0210D0C5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C, ::System::String* E15BCD7E743D54ED)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + F31298BE0210D0C5__CTOR_1_OFFSET))(this, F220A2D27F7C6B6C, E15BCD7E743D54ED);
	}

	::Il2CppArray<::System::Byte>* E08E3223BD4C00F9(::Il2CppArray<::System::Byte>* B434C6CCFC084F2B, ::System::String* E15BCD7E743D54ED)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + F31298BE0210D0C5_E08E3223BD4C00F9_OFFSET))(this, B434C6CCFC084F2B, E15BCD7E743D54ED);
	}

	::System::Boolean B59079FDA370300B(::Il2CppArray<::System::Byte>* EA3841EF716A4AB5, ::System::String* E15BCD7E743D54ED)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + F31298BE0210D0C5_B59079FDA370300B_OFFSET))(this, EA3841EF716A4AB5, E15BCD7E743D54ED);
	}
};
