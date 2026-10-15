#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMDPOFBLBIE;

#define HEGNPINAPOG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C51C50)
#define HEGNPINAPOG_GET_NEEDRELOADOPERATIONS_OFFSET UNITYSDK_OFFSET(0x15C51AC0)
#define HEGNPINAPOG_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0x15C51AE0)
#define HEGNPINAPOG_SET_NEEDRELOADOPERATIONS_OFFSET UNITYSDK_OFFSET(0x15C51AD0)

	class HEGNPINAPOG : public ::System::Object
	{
	public:
		::System::Boolean _NeedReloadOperations_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGNPINAPOG_CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedReloadOperations()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGNPINAPOG_GET_NEEDRELOADOPERATIONS_OFFSET))(this);
		}

		::System::Void set_NeedReloadOperations(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEGNPINAPOG_SET_NEEDRELOADOPERATIONS_OFFSET))(this, a1);
		}

		::System::Void LNGKNPJIOML(::DMDPOFBLBIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMDPOFBLBIE*))((::PBYTE)hIl2Cpp + HEGNPINAPOG_LNGKNPJIOML_OFFSET))(this, a1);
		}

	};
