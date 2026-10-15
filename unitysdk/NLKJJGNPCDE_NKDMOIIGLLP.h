#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLKJJGNPCDE;

#define NLKJJGNPCDE_NKDMOIIGLLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC5C4B0)
#define NLKJJGNPCDE_NKDMOIIGLLP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC5C680)

inline static constexpr unsigned int NLKJJGNPCDE_NKDMOIIGLLP_TypeDefinitionIndex = 44188;

	class NLKJJGNPCDE_NKDMOIIGLLP : public ::System::Object
	{
	public:
		::NLKJJGNPCDE* NPKHDOPHBEJ; // 0x10
		::System::Void _ctor(::NLKJJGNPCDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLKJJGNPCDE*))((::PBYTE)hIl2Cpp + NLKJJGNPCDE_NKDMOIIGLLP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLKJJGNPCDE_NKDMOIIGLLP_DISPOSE_OFFSET))(this);
		}

	};
