#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"

#define AJHHFMBOCEN_CKMKPDAMPBD_OFFSET UNITYSDK_OFFSET(0x19D40000)
#define AJHHFMBOCEN_CTOR_OFFSET UNITYSDK_OFFSET(0x19D40050)

inline static constexpr unsigned int AJHHFMBOCEN_TypeDefinitionIndex = 80897;

	class AJHHFMBOCEN : public ::MLKDDLHNNHH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHHFMBOCEN_CTOR_OFFSET))(this);
		}

		::System::Void CKMKPDAMPBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHHFMBOCEN_CKMKPDAMPBD_OFFSET))(this);
		}

	};
