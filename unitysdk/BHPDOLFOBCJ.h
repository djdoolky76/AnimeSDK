#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDJOFODHIMD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHPDOLFOBCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB492DA0)
#define BHPDOLFOBCJ_GET_STEPS_OFFSET UNITYSDK_OFFSET(0xB492D80)
#define BHPDOLFOBCJ_SET_STEPS_OFFSET UNITYSDK_OFFSET(0xB492D90)

inline static constexpr unsigned int BHPDOLFOBCJ_TypeDefinitionIndex = 72402;

	class BHPDOLFOBCJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MDJOFODHIMD*>* _Steps_k__BackingField; // 0x10
		::System::Void _ctor(::System::Collections::Generic::List_1<::MDJOFODHIMD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MDJOFODHIMD*>*))((::PBYTE)hIl2Cpp + BHPDOLFOBCJ_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::MDJOFODHIMD*>* get_Steps()
		{
			return ((::System::Collections::Generic::List_1<::MDJOFODHIMD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDOLFOBCJ_GET_STEPS_OFFSET))(this);
		}

		::System::Void set_Steps(::System::Collections::Generic::List_1<::MDJOFODHIMD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MDJOFODHIMD*>*))((::PBYTE)hIl2Cpp + BHPDOLFOBCJ_SET_STEPS_OFFSET))(this, a1);
		}

	};
