#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }

#define F7F686770E116D6D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C6A710)
#define F7F686770E116D6D__CTOR_OFFSET UNITYSDK_OFFSET(0x3C6A6A0)

inline static constexpr unsigned int F7F686770E116D6D_TypeDefinitionIndex = 11662;

class F7F686770E116D6D : public ::System::Object
{
public:
	::System::String* EA13ED3B97933823; // 0x10
	::System::String* F0332E54BE3EB603; // 0x18
	::System::Boolean BBBBA7ACC398147A; // 0x20
	::System::Byte _padding0[0x7];
	::Il2CppArray<::System::Reflection::MemberInfo*>* A1C67D516A26DFBF; // 0x28
	::Il2CppArray<::System::String*>* E413E9E54E44BAA8; // 0x30
	::Il2CppArray<::System::Type*>* E4ADF76D6D51CC1F; // 0x38

	::System::Void _ctor(::System::String* EC2038339CE86133, ::System::String* B84A4D8260C22648, ::System::Boolean BBBBA7ACC398147A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + F7F686770E116D6D__CTOR_OFFSET))(this, EC2038339CE86133, B84A4D8260C22648, BBBBA7ACC398147A);
	}

	::System::Void _ctor_1(::System::Type* A288CB28FC2A6DA3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + F7F686770E116D6D__CTOR_1_OFFSET))(this, A288CB28FC2A6DA3);
	}
};
