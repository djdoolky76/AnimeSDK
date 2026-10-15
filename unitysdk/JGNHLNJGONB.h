#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLELNJPEA.h"

#define JGNHLNJGONB_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A4F10)
#define JGNHLNJGONB_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB1A4F20)

inline static constexpr unsigned int JGNHLNJGONB_TypeDefinitionIndex = 74845;

	class JGNHLNJGONB : public ::IAJLELNJPEA
	{
	public:
		::System::UInt32 HBNIFGKGCBO; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGNHLNJGONB_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNHLNJGONB_KFGJEKJHIMB_OFFSET))(this);
		}

	};
