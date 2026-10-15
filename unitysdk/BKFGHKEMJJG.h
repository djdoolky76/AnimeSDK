#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define BKFGHKEMJJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BC310)
#define BKFGHKEMJJG_GET_ISANIMATORTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C8BC300)
#define BKFGHKEMJJG_GET_OUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1C8BC2F0)

	class BKFGHKEMJJG : public ::System::Attribute
	{
	public:
		::System::String* _OutPutType_k__BackingField; // 0x10
		::System::Boolean _IsAnimatorTrigger_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BKFGHKEMJJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_OutPutType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFGHKEMJJG_GET_OUTPUTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsAnimatorTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFGHKEMJJG_GET_ISANIMATORTRIGGER_OFFSET))(this);
		}

	};
