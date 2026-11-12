#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PHKOFFOLPPG_HFFPHANAHLP_OKBLIHNOBJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF41330)
#define PHKOFFOLPPG_HFFPHANAHLP_OKBLIHNOBJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FF41340)

inline static constexpr unsigned int PHKOFFOLPPG_HFFPHANAHLP_OKBLIHNOBJN_TypeDefinitionIndex = 45245;

	class PHKOFFOLPPG_HFFPHANAHLP_OKBLIHNOBJN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_HFFPHANAHLP_OKBLIHNOBJN_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_HFFPHANAHLP_OKBLIHNOBJN_DISPOSE_OFFSET))(this);
		}

	};
