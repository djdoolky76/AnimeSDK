#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBPMACLHLOP;

#define PMHPPMJAECI_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9C8670)
#define PMHPPMJAECI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C86D0)

inline static constexpr unsigned int PMHPPMJAECI_TypeDefinitionIndex = 43327;

	class PMHPPMJAECI : public ::System::Object
	{
	public:
		::EBPMACLHLOP* IECLHGKEMFL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHPPMJAECI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHPPMJAECI_CLEAR_OFFSET))(this);
		}

	};
