#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MCLDPNEJPBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B84D300)

inline static constexpr unsigned int MCLDPNEJPBG_TypeDefinitionIndex = 77968;

	class MCLDPNEJPBG : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* NPADNGNGOJK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCLDPNEJPBG_CTOR_OFFSET))(this);
		}

	};
