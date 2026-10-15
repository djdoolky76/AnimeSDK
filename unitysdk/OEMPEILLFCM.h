#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define OEMPEILLFCM_CTOR_OFFSET UNITYSDK_OFFSET(0xBE2C230)
#define OEMPEILLFCM_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xBE2C180)

inline static constexpr unsigned int OEMPEILLFCM_TypeDefinitionIndex = 81259;

	class OEMPEILLFCM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMPEILLFCM_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + OEMPEILLFCM_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
