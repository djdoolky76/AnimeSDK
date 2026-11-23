#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BB454B58A0E2FAB5;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F88B82A458EA2191_B238E87DC8A552A5_1_OFFSET UNITYSDK_OFFSET(0x26B64D0)
#define F88B82A458EA2191_B238E87DC8A552A5_OFFSET UNITYSDK_OFFSET(0x26B62B0)
#define F88B82A458EA2191__CCTOR_OFFSET UNITYSDK_OFFSET(0x26B6780)
#define F88B82A458EA2191__CTOR_OFFSET UNITYSDK_OFFSET(0x26B6840)

inline static constexpr unsigned int F88B82A458EA2191_TypeDefinitionIndex = 2607;

class F88B82A458EA2191 : public ::System::Object
{
public:
	static ::System::String** StaticGet_BC619216ADB1FA37()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(F88B82A458EA2191_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Int32 A61806D1B8904679; // 0x10
	::System::Int32 BB46744281D33C50; // 0x14
	::System::Int32 E070C1D5D117D305; // 0x18
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::Int32>* BC2AADF41C662138; // 0x20
	::System::String* BD40B43873410AEB; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* B1B06A78BFE61A1A; // 0x30

	static ::F88B82A458EA2191* B238E87DC8A552A5(::Il2CppArray<::System::Byte>* E83E519C5C42896F)
	{
		return ((::F88B82A458EA2191*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + F88B82A458EA2191_B238E87DC8A552A5_OFFSET))(E83E519C5C42896F);
	}

	::System::Void B238E87DC8A552A5_1(::BB454B58A0E2FAB5* E1A091262C10AC9B)
	{
		return ((::System::Void(*)(::PVOID, ::BB454B58A0E2FAB5*))((::PBYTE)hIl2Cpp + F88B82A458EA2191_B238E87DC8A552A5_1_OFFSET))(this, E1A091262C10AC9B);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F88B82A458EA2191__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F88B82A458EA2191__CTOR_OFFSET))(this);
	}
};
