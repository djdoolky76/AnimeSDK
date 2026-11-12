#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPJFIPNGENE;

#define MPJFIPNGENE_EIIBCDJADFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF002D0)
#define MPJFIPNGENE_EIIBCDJADFJ_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0x1FF010A0)

inline static constexpr unsigned int MPJFIPNGENE_EIIBCDJADFJ_TypeDefinitionIndex = 45097;

	class MPJFIPNGENE_EIIBCDJADFJ : public ::System::Object
	{
	public:
		::MPJFIPNGENE* ALIOJNLDAEE; // 0x10
		::System::UInt32 LBAJCLLLMEA; // 0x18
		::System::Void _ctor(::MPJFIPNGENE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPJFIPNGENE*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_EIIBCDJADFJ_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_EIIBCDJADFJ_KEOKEELBKHI_OFFSET))(this);
		}

	};
