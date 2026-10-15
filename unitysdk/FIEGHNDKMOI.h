#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FIEGHNDKMOI;

#define FIEGHNDKMOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC7F20)
#define FIEGHNDKMOI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDC7D90)

inline static constexpr unsigned int FIEGHNDKMOI_TypeDefinitionIndex = 13955;

	class FIEGHNDKMOI : public ::System::Object
	{
	public:
		::System::UInt32 AEDOBNFDODI; // 0x10
		::System::UInt32 IFAGMAOMHCL; // 0x14
		::System::Boolean GNDCCBNILML; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEGHNDKMOI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FIEGHNDKMOI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FIEGHNDKMOI*))((::PBYTE)hIl2Cpp + FIEGHNDKMOI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
