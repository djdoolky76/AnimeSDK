#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define BHJEGBMIKEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB48D8F0)
#define BHJEGBMIKEJ_GET_AGGREGATEROOTTYPE_OFFSET UNITYSDK_OFFSET(0xB48D8E0)

	class BHJEGBMIKEJ : public ::System::Attribute
	{
	public:
		::System::Type* _AggregateRootType_k__BackingField; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + BHJEGBMIKEJ_CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_AggregateRootType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJEGBMIKEJ_GET_AGGREGATEROOTTYPE_OFFSET))(this);
		}

	};
