#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define IALDFMDFGOD_CTOR_OFFSET UNITYSDK_OFFSET(0x16DC3240)
#define IALDFMDFGOD_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x16DC30E0)

inline static constexpr unsigned int IALDFMDFGOD_TypeDefinitionIndex = 83277;

	class IALDFMDFGOD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALDFMDFGOD_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + IALDFMDFGOD_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
