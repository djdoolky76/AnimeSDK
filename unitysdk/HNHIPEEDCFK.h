#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define HNHIPEEDCFK_CTOR_OFFSET UNITYSDK_OFFSET(0x15D88A70)
#define HNHIPEEDCFK_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x15D889E0)

inline static constexpr unsigned int HNHIPEEDCFK_TypeDefinitionIndex = 65605;

	class HNHIPEEDCFK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHIPEEDCFK_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + HNHIPEEDCFK_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
