#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B12A457D15D51D59_EB07AD878A43DD7D_F82F723A6296FF4D_OFFSET UNITYSDK_OFFSET(0x1F665B0)
#define B12A457D15D51D59_EB07AD878A43DD7D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B12A457D15D51D59_EB07AD878A43DD7D_TypeDefinitionIndex = 7810;

class B12A457D15D51D59_EB07AD878A43DD7D : public ::System::Object
{
public:
	::System::String* EDAC0312C65D146E; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B12A457D15D51D59_EB07AD878A43DD7D__CTOR_OFFSET))(this);
	}

	::System::Void F82F723A6296FF4D(::System::Boolean BF61D9845E0CFCF8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + B12A457D15D51D59_EB07AD878A43DD7D_F82F723A6296FF4D_OFFSET))(this, BF61D9845E0CFCF8);
	}
};
