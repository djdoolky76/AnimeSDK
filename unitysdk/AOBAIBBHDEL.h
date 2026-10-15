#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOBAIBBHDEL;
class FCOEMCEDLNL;

#define AOBAIBBHDEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB9810)
#define AOBAIBBHDEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCB96F0)

inline static constexpr unsigned int AOBAIBBHDEL_TypeDefinitionIndex = 13644;

	class AOBAIBBHDEL : public ::System::Object
	{
	public:
		::System::UInt32 IMDPJFEGIDF; // 0x10
		::System::UInt32 EEBLMLAEFHO; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOBAIBBHDEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AOBAIBBHDEL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AOBAIBBHDEL*))((::PBYTE)hIl2Cpp + AOBAIBBHDEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
