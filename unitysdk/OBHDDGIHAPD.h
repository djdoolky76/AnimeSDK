#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
class HFCOGLIEHFB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define OBHDDGIHAPD_CTOR_OFFSET UNITYSDK_OFFSET(0xBD45E50)
#define OBHDDGIHAPD_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xBD458C0)
#define OBHDDGIHAPD_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xBD45E60)
#define OBHDDGIHAPD_MAMCKKAGJLD_OFFSET UNITYSDK_OFFSET(0xBD458D0)
#define OBHDDGIHAPD_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBD45EA0)
#define OBHDDGIHAPD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBD45EE0)

inline static constexpr unsigned int OBHDDGIHAPD_TypeDefinitionIndex = 82279;

	class OBHDDGIHAPD : public ::KAANKGHDHCB
	{
	public:
		::HFCOGLIEHFB* BGKEEIDDGOB; // 0x20
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + OBHDDGIHAPD_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHDDGIHAPD_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHDDGIHAPD_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHDDGIHAPD_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHDDGIHAPD_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Boolean MAMCKKAGJLD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHDDGIHAPD_MAMCKKAGJLD_OFFSET))(this);
		}

	};
