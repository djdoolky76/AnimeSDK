#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBBHMJFLBGC;

#define DNIHJEFNKKO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA01650)
#define DNIHJEFNKKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA016D0)

inline static constexpr unsigned int DNIHJEFNKKO_TypeDefinitionIndex = 43658;

	class DNIHJEFNKKO : public ::System::Object
	{
	public:
		::PBBHMJFLBGC* LCPEEHIMCNO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIHJEFNKKO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIHJEFNKKO_CLEAR_OFFSET))(this);
		}

	};
