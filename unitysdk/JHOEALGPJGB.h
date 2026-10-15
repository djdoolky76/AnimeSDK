#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDKJNMJFNAD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Object; }

#define JHOEALGPJGB_CMMLLEFOFFK_OFFSET UNITYSDK_OFFSET(0x1EC795C0)
#define JHOEALGPJGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC68DB0)
#define JHOEALGPJGB_IAOBNBCAAIB_OFFSET UNITYSDK_OFFSET(0x1EC78760)
#define JHOEALGPJGB_OIGBGHMDMLL_OFFSET UNITYSDK_OFFSET(0x1EC78EE0)

	class JHOEALGPJGB : public ::System::Object
	{
	public:
		::MDKJNMJFNAD* JLDPIPDHIOG; // 0x10
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::System::Int32>* ELNOBFNMJOB; // 0x18
		::System::Void _ctor(::MDKJNMJFNAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDKJNMJFNAD*))((::PBYTE)hIl2Cpp + JHOEALGPJGB_CTOR_OFFSET))(this, a1);
		}

		::System::Void IAOBNBCAAIB(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + JHOEALGPJGB_IAOBNBCAAIB_OFFSET))(this, a1);
		}

		::System::Void OIGBGHMDMLL(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + JHOEALGPJGB_OIGBGHMDMLL_OFFSET))(this, a1);
		}

		::System::Void CMMLLEFOFFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOEALGPJGB_CMMLLEFOFFK_OFFSET))(this);
		}

	};
