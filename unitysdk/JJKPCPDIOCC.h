#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JJKPCPDIOCC_ANIKAJGNCJF_OFFSET UNITYSDK_OFFSET(0x1C6D1C80)
#define JJKPCPDIOCC_BMEGLEGIDFA_OFFSET UNITYSDK_OFFSET(0x1C6D1CD0)
#define JJKPCPDIOCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D1CE0)
#define JJKPCPDIOCC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C6D1BC0)

inline static constexpr unsigned int JJKPCPDIOCC_TypeDefinitionIndex = 37321;

	class JJKPCPDIOCC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* ENEIPCFDOOG; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Int32>* OMOHFCCGLFJ; // 0x18
		::System::UInt64 HHOJFEJJMLK; // 0x20
		::System::Boolean PLMEKBJKEOC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJKPCPDIOCC_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJKPCPDIOCC_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean ANIKAJGNCJF(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + JJKPCPDIOCC_ANIKAJGNCJF_OFFSET))(this, a1);
		}

		::System::Boolean BMEGLEGIDFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJKPCPDIOCC_BMEGLEGIDFA_OFFSET))(this);
		}

	};
