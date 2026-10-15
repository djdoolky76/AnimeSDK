#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OCBJLBIEFJN_CTOR_OFFSET UNITYSDK_OFFSET(0xBD57BC0)
#define OCBJLBIEFJN_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xBD57BA0)
#define OCBJLBIEFJN_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xBD57BB0)

inline static constexpr unsigned int OCBJLBIEFJN_TypeDefinitionIndex = 79781;

	class OCBJLBIEFJN : public ::System::Object
	{
	public:
		::System::Boolean _IsActive_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBJLBIEFJN_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBJLBIEFJN_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OCBJLBIEFJN_SET_ISACTIVE_OFFSET))(this, a1);
		}

	};
