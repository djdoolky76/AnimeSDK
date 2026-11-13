#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GKODJGAGKEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E37A0)
#define GKODJGAGKEB_GET_ASYNCLATENCYWINDOWSIZE_OFFSET UNITYSDK_OFFSET(0x1A8E3760)
#define GKODJGAGKEB_GET_DEFAULTTOPN_OFFSET UNITYSDK_OFFSET(0x1A8E3780)
#define GKODJGAGKEB_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A8E3740)
#define GKODJGAGKEB_SET_ASYNCLATENCYWINDOWSIZE_OFFSET UNITYSDK_OFFSET(0x1A8E3770)
#define GKODJGAGKEB_SET_DEFAULTTOPN_OFFSET UNITYSDK_OFFSET(0x1A8E3790)
#define GKODJGAGKEB_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A8E3750)

inline static constexpr unsigned int GKODJGAGKEB_TypeDefinitionIndex = 80575;

	class GKODJGAGKEB : public ::System::Object
	{
	public:
		::System::Boolean _Enabled_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 _DefaultTopN_k__BackingField; // 0x14
		::System::Int32 _AsyncLatencyWindowSize_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKODJGAGKEB_CTOR_OFFSET))(this);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKODJGAGKEB_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKODJGAGKEB_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Int32 get_AsyncLatencyWindowSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKODJGAGKEB_GET_ASYNCLATENCYWINDOWSIZE_OFFSET))(this);
		}

		::System::Void set_AsyncLatencyWindowSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GKODJGAGKEB_SET_ASYNCLATENCYWINDOWSIZE_OFFSET))(this, a1);
		}

		::System::Int32 get_DefaultTopN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKODJGAGKEB_GET_DEFAULTTOPN_OFFSET))(this);
		}

		::System::Void set_DefaultTopN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GKODJGAGKEB_SET_DEFAULTTOPN_OFFSET))(this, a1);
		}

	};
