#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BECEGFPBFIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A92F000)

inline static constexpr unsigned int BECEGFPBFIN_TypeDefinitionIndex = 59780;

	class BECEGFPBFIN : public ::System::Object
	{
	public:
		::System::Int32 AHGLPBAJMOA; // 0x10
		::System::UInt32 ECPHKFMFMDF; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECEGFPBFIN_CTOR_OFFSET))(this);
		}

	};
