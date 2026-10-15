#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IODILPDEMAF;

#define IODILPDEMAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF28E70)
#define IODILPDEMAF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF28D50)

inline static constexpr unsigned int IODILPDEMAF_TypeDefinitionIndex = 11570;

	class IODILPDEMAF : public ::System::Object
	{
	public:
		::System::Boolean NLCEDPNILIE; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 NDAIGIEMABD; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODILPDEMAF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IODILPDEMAF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IODILPDEMAF*))((::PBYTE)hIl2Cpp + IODILPDEMAF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
