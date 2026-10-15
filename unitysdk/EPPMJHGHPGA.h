#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPPMJHGHPGA;
class FCOEMCEDLNL;

#define EPPMJHGHPGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD93D70)
#define EPPMJHGHPGA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD93C00)

inline static constexpr unsigned int EPPMJHGHPGA_TypeDefinitionIndex = 14339;

	class EPPMJHGHPGA : public ::System::Object
	{
	public:
		::System::UInt32 GACEMBBAGMP; // 0x10
		::System::UInt32 LLDCHLHNADA; // 0x14
		::System::UInt32 EGONNGOPKDK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPMJHGHPGA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EPPMJHGHPGA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EPPMJHGHPGA*))((::PBYTE)hIl2Cpp + EPPMJHGHPGA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
