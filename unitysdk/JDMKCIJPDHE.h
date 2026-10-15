#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOABGMGNKGA;

#define JDMKCIJPDHE_CTOR_OFFSET UNITYSDK_OFFSET(0x165D8470)
#define JDMKCIJPDHE_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0x165D8480)

inline static constexpr unsigned int JDMKCIJPDHE_TypeDefinitionIndex = 60892;

	class JDMKCIJPDHE : public ::System::Object
	{
	public:
		::EOABGMGNKGA* CGJNMCLDIGO; // 0x10
		::System::Void _ctor(::EOABGMGNKGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOABGMGNKGA*))((::PBYTE)hIl2Cpp + JDMKCIJPDHE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMKCIJPDHE_KEOKEELBKHI_OFFSET))(this);
		}

	};
