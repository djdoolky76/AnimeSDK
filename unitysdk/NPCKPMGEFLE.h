#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NPCKPMGEFLE;

#define NPCKPMGEFLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2446E0)
#define NPCKPMGEFLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2445F0)

inline static constexpr unsigned int NPCKPMGEFLE_TypeDefinitionIndex = 13738;

	class NPCKPMGEFLE : public ::System::Object
	{
	public:
		::System::UInt32 DOHOMJBJLLG; // 0x10
		::System::UInt32 GNIFLCBGAAA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCKPMGEFLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NPCKPMGEFLE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NPCKPMGEFLE*))((::PBYTE)hIl2Cpp + NPCKPMGEFLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
