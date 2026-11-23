#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A44D28D8D6D89FE2.h"
#include "unitysdk/FA0CDF1978A6B206.h"
#include "unitysdk/System/ValueType.h"

class B3687AB065DF94CB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A61B0849719CF168__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F56060)

inline static constexpr unsigned int A61B0849719CF168_TypeDefinitionIndex = 7773;

struct alignas(8) A61B0849719CF168
{
	static ::A61B0849719CF168* StaticGet_BDC1E8E781853683()
	{
		return (::A61B0849719CF168*)Il2CppClass::FromTypeDefinitionIndex(A61B0849719CF168_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Boolean AD68EDA4DF57F5D8; // 0x10
	::System::Byte _padding0[0x7];
	::B3687AB065DF94CB* F3243A43F36B6DD9; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FA0CDF1978A6B206>* E06EFC24AAE9F5DA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A44D28D8D6D89FE2>* F7E5E5AA79D88D29; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* A2520EE9064D5D60; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A61B0849719CF168__CCTOR_OFFSET))();
	}
};
