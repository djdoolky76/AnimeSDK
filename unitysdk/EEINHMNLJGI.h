#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EEINHMNLJGI_PFIMEIAAPEH_1_OFFSET UNITYSDK_OFFSET(0x1DD3A080)
#define EEINHMNLJGI_PFIMEIAAPEH_OFFSET UNITYSDK_OFFSET(0x1DD3A070)

inline static constexpr unsigned int EEINHMNLJGI_TypeDefinitionIndex = 6410;

	class EEINHMNLJGI : public ::System::Object
	{
	public:
		static ::System::UInt32 PFIMEIAAPEH(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + EEINHMNLJGI_PFIMEIAAPEH_OFFSET))(a1, a2);
		}

		static ::System::UInt64 PFIMEIAAPEH_1(::System::UInt64 a1, ::System::Int32 a2)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + EEINHMNLJGI_PFIMEIAAPEH_1_OFFSET))(a1, a2);
		}

	};
