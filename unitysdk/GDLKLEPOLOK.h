#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GDLKLEPOLOK;

#define GDLKLEPOLOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE024D0)
#define GDLKLEPOLOK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE02380)

inline static constexpr unsigned int GDLKLEPOLOK_TypeDefinitionIndex = 11992;

	class GDLKLEPOLOK : public ::System::Object
	{
	public:
		::System::Int32 HCDEOKNIGKG; // 0x10
		::System::UInt32 PFDHNIJBGKO; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLKLEPOLOK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GDLKLEPOLOK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GDLKLEPOLOK*))((::PBYTE)hIl2Cpp + GDLKLEPOLOK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
