#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFBNPCINOGG_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x6F1E90)
#define AFBNPCINOGG_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x12CEEDE0)

inline static constexpr unsigned int AFBNPCINOGG_TypeDefinitionIndex = 63869;

struct alignas(8) AFBNPCINOGG
{
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* ICACOHMDLCA; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::HashSet_1<::System::String*>*>* DBKAJEGOHPC; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::String*>*>* IAOPMPEOLPC; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* IDMFIHIALLM; // 0x28

	/*
	static ::AFBNPCINOGG COKNIICCODC()
	{
		return ((::AFBNPCINOGG(*)())((::PBYTE)hIl2Cpp + AFBNPCINOGG_COKNIICCODC_OFFSET))();
	}
	*/

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBNPCINOGG_BJANDJKKNCD_OFFSET))(this);
	}
};
