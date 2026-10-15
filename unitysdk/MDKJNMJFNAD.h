#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace UnityEngine { class Object; }

#define MDKJNMJFNAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC593D0)
#define MDKJNMJFNAD_IEGNMOODDAK_OFFSET UNITYSDK_OFFSET(0x1EC4BE10)
#define MDKJNMJFNAD_PDKLDMNAJBO_OFFSET UNITYSDK_OFFSET(0x1EC4B660)

inline static constexpr unsigned int MDKJNMJFNAD_TypeDefinitionIndex = 44243;

	class MDKJNMJFNAD : public ::System::Object
	{
	public:
		::System::Runtime::CompilerServices::ConditionalWeakTable_2<::UnityEngine::Object*, ::System::Object*>* MIEOBFHPMIA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKJNMJFNAD_CTOR_OFFSET))(this);
		}

		::System::Void PDKLDMNAJBO(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MDKJNMJFNAD_PDKLDMNAJBO_OFFSET))(this, a1);
		}

		::System::Void IEGNMOODDAK(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MDKJNMJFNAD_IEGNMOODDAK_OFFSET))(this, a1);
		}

	};
