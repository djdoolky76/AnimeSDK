#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BF03F987745C4B56_E78FB045728D9384_OFFSET UNITYSDK_OFFSET(0x4424F60)
#define BF03F987745C4B56_FD24326A554ACB53_OFFSET UNITYSDK_OFFSET(0x44253E0)
#define BF03F987745C4B56__CCTOR_OFFSET UNITYSDK_OFFSET(0x4424B60)

inline static constexpr unsigned int BF03F987745C4B56_TypeDefinitionIndex = 18939;

class BF03F987745C4B56 : public ::System::Object
{
public:
	static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_ABE47F9B5DB13654()
	{
		return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(BF03F987745C4B56_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Int32 FD24326A554ACB53(::System::Int32 A359D9372130E831)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + BF03F987745C4B56_FD24326A554ACB53_OFFSET))(A359D9372130E831);
	}

	static ::System::String* E78FB045728D9384(::System::String* B824398FED0D345B, ::System::Int32 A359D9372130E831)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BF03F987745C4B56_E78FB045728D9384_OFFSET))(B824398FED0D345B, A359D9372130E831);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BF03F987745C4B56__CCTOR_OFFSET))();
	}
};
