#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAANKGHDHCB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define AFBFELJNPBO_CTOR_OFFSET UNITYSDK_OFFSET(0xCF05D90)
#define AFBFELJNPBO_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xCF052A0)
#define AFBFELJNPBO_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xCF05280)
#define AFBFELJNPBO_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xCF05370)
#define AFBFELJNPBO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xCF053C0)
#define AFBFELJNPBO_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xCF05290)
#define AFBFELJNPBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCF05D20)

	class AFBFELJNPBO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::KAANKGHDHCB*>* OJFECHILFHG; // 0x10
		::System::Boolean _IsRunning_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 HLLMPHJOKFC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBFELJNPBO_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBFELJNPBO_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void set_IsRunning(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFBFELJNPBO_SET_ISRUNNING_OFFSET))(this, a1);
		}

		::System::Void EGFCFCBHJJP(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + AFBFELJNPBO_EGFCFCBHJJP_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBFELJNPBO_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBFELJNPBO_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBFELJNPBO_TOSTRING_OFFSET))(this);
		}

	};
