#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GOMOFGDEDBE_FIJLEDEKBJP_OFFSET UNITYSDK_OFFSET(0x16AC05A0)

inline static constexpr unsigned int GOMOFGDEDBE_TypeDefinitionIndex = 79850;

	class GOMOFGDEDBE : public ::System::Object
	{
	public:
		static ::System::Int32 FIJLEDEKBJP(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GOMOFGDEDBE_FIJLEDEKBJP_OFFSET))(a1, a2, a3);
		}

	};
