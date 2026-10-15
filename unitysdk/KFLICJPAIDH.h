#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KFLICJPAIDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC208D0)
#define KFLICJPAIDH_GET_REASON_OFFSET UNITYSDK_OFFSET(0x1EC208E0)
#define KFLICJPAIDH_SET_REASON_OFFSET UNITYSDK_OFFSET(0x1EC208F0)

inline static constexpr unsigned int KFLICJPAIDH_TypeDefinitionIndex = 44041;

	class KFLICJPAIDH : public ::System::Object
	{
	public:
		::System::String* _Reason_k__BackingField; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KFLICJPAIDH_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Reason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLICJPAIDH_GET_REASON_OFFSET))(this);
		}

		::System::Void set_Reason(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KFLICJPAIDH_SET_REASON_OFFSET))(this, a1);
		}

	};
