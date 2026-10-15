#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JKFAMDHMLBC;

#define JKFAMDHMLBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D03F850)
#define JKFAMDHMLBC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D03F730)

inline static constexpr unsigned int JKFAMDHMLBC_TypeDefinitionIndex = 13643;

	class JKFAMDHMLBC : public ::System::Object
	{
	public:
		::System::UInt32 BDCOFIOCJFO; // 0x10
		::System::UInt32 GAJICDKPHPA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFAMDHMLBC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JKFAMDHMLBC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JKFAMDHMLBC*))((::PBYTE)hIl2Cpp + JKFAMDHMLBC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
