#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define OEMPEILLFCM_CTOR_OFFSET UNITYSDK_OFFSET(0xC6EAB30)
#define OEMPEILLFCM_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xC6EAA80)

inline static constexpr unsigned int OEMPEILLFCM_TypeDefinitionIndex = 84040;

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
