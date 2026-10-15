#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

#define HKPODKLOLHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C667D60)
#define HKPODKLOLHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C6679A0)
#define HKPODKLOLHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C667BA0)

inline static constexpr unsigned int HKPODKLOLHK_TypeDefinitionIndex = 36869;

	class HKPODKLOLHK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPODKLOLHK_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::RuntimeTypeHandle a1, ::System::RuntimeTypeHandle a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + HKPODKLOLHK_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + HKPODKLOLHK_GETHASHCODE_OFFSET))(this, a1);
		}

	};
