#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAANKGHDHCB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define AFBFELJNPBO_CTOR_OFFSET UNITYSDK_OFFSET(0xCEFEA00)
#define AFBFELJNPBO_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xCEFDF10)
#define AFBFELJNPBO_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xCEFDEF0)
#define AFBFELJNPBO_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xCEFDFE0)
#define AFBFELJNPBO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xCEFE030)
#define AFBFELJNPBO_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xCEFDF00)
#define AFBFELJNPBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCEFE990)

inline static constexpr unsigned int AFBFELJNPBO_TypeDefinitionIndex = 82266;

	class AFBFELJNPBO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::KAANKGHDHCB*>* OJFECHILFHG; // 0x10
		::System::Int32 HLLMPHJOKFC; // 0x18
		::System::Boolean _IsRunning_k__BackingField; // 0x1C
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
