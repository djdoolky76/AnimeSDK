#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFCHPMGNMOM;

#define FPIKMMDHEDE_GFIODGHGCHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1591AE90)
#define FPIKMMDHEDE_GFIODGHGCHK_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1591AEA0)
#define FPIKMMDHEDE_GFIODGHGCHK_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1591AEB0)

inline static constexpr unsigned int FPIKMMDHEDE_GFIODGHGCHK_TypeDefinitionIndex = 79489;

	class FPIKMMDHEDE_GFIODGHGCHK : public ::System::Object
	{
	public:
		::HFCHPMGNMOM* _Source_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_GFIODGHGCHK_CTOR_OFFSET))(this);
		}

		::HFCHPMGNMOM* get_Source()
		{
			return ((::HFCHPMGNMOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_GFIODGHGCHK_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::HFCHPMGNMOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCHPMGNMOM*))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_GFIODGHGCHK_SET_SOURCE_OFFSET))(this, a1);
		}

	};
