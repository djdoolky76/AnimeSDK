#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKPDKBNFDGM;

#define GNHJPLODAMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1878C700)
#define GNHJPLODAMB_MJEGFOMAOFH_OFFSET UNITYSDK_OFFSET(0x1878C6A0)

inline static constexpr unsigned int GNHJPLODAMB_TypeDefinitionIndex = 63366;

	class GNHJPLODAMB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHJPLODAMB_CTOR_OFFSET))(this);
		}

		::System::Boolean MJEGFOMAOFH(::GKPDKBNFDGM* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKPDKBNFDGM*, ::System::UInt32))((::PBYTE)hIl2Cpp + GNHJPLODAMB_MJEGFOMAOFH_OFFSET))(this, a1, a2);
		}

	};
