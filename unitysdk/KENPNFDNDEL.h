#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOABGMGNKGA;

#define KENPNFDNDEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB37FEE0)
#define KENPNFDNDEL_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0xB37FEF0)

inline static constexpr unsigned int KENPNFDNDEL_TypeDefinitionIndex = 59267;

	class KENPNFDNDEL : public ::System::Object
	{
	public:
		::EOABGMGNKGA* CGJNMCLDIGO; // 0x10
		::System::Void _ctor(::EOABGMGNKGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOABGMGNKGA*))((::PBYTE)hIl2Cpp + KENPNFDNDEL_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KENPNFDNDEL_KEOKEELBKHI_OFFSET))(this);
		}

	};
