#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLELNJPEA.h"

#define HHGMLCNCHJE_CTOR_OFFSET UNITYSDK_OFFSET(0x15CBFB10)
#define HHGMLCNCHJE_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x15CBFB20)

inline static constexpr unsigned int HHGMLCNCHJE_TypeDefinitionIndex = 74846;

	class HHGMLCNCHJE : public ::IAJLELNJPEA
	{
	public:
		::System::UInt32 BLCKIMFOJEB; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HHGMLCNCHJE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGMLCNCHJE_KFGJEKJHIMB_OFFSET))(this);
		}

	};
