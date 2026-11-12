#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMIBMDCJFEG;
class KPNHHBEDJHF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BBHCJNLNIFL_CTOR_OFFSET UNITYSDK_OFFSET(0x16D0FC70)
#define BBHCJNLNIFL_DHMCBCJOJFO_OFFSET UNITYSDK_OFFSET(0x16D0F9F0)
#define BBHCJNLNIFL_GAGPEAHNCJD_OFFSET UNITYSDK_OFFSET(0x16D0F810)
#define BBHCJNLNIFL_IMKJLKDLEMG_OFFSET UNITYSDK_OFFSET(0x16D0FAE0)
#define BBHCJNLNIFL_NHKNGNICJNK_OFFSET UNITYSDK_OFFSET(0x16D0FAA0)

inline static constexpr unsigned int BBHCJNLNIFL_TypeDefinitionIndex = 74051;

	class BBHCJNLNIFL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::CMIBMDCJFEG*>* JENBLIPHHMO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHCJNLNIFL_CTOR_OFFSET))(this);
		}

		::System::Void GAGPEAHNCJD(::CMIBMDCJFEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMIBMDCJFEG*))((::PBYTE)hIl2Cpp + BBHCJNLNIFL_GAGPEAHNCJD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::CMIBMDCJFEG*>* NHKNGNICJNK()
		{
			return ((::System::Collections::Generic::List_1<::CMIBMDCJFEG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHCJNLNIFL_NHKNGNICJNK_OFFSET))(this);
		}

		static ::System::Boolean DHMCBCJOJFO(::CMIBMDCJFEG* a1, ::CMIBMDCJFEG* a2)
		{
			return ((::System::Boolean(*)(::CMIBMDCJFEG*, ::CMIBMDCJFEG*))((::PBYTE)hIl2Cpp + BBHCJNLNIFL_DHMCBCJOJFO_OFFSET))(a1, a2);
		}

		static ::System::Boolean IMKJLKDLEMG(::System::Collections::Generic::List_1<::KPNHHBEDJHF*>* a1, ::System::Collections::Generic::List_1<::KPNHHBEDJHF*>* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::KPNHHBEDJHF*>*, ::System::Collections::Generic::List_1<::KPNHHBEDJHF*>*))((::PBYTE)hIl2Cpp + BBHCJNLNIFL_IMKJLKDLEMG_OFFSET))(a1, a2);
		}

	};
