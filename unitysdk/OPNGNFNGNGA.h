#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define OPNGNFNGNGA_CTOR_OFFSET UNITYSDK_OFFSET(0x18AC4060)
#define OPNGNFNGNGA_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x18AC3FA0)

inline static constexpr unsigned int OPNGNFNGNGA_TypeDefinitionIndex = 66435;

	class OPNGNFNGNGA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNGNFNGNGA_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + OPNGNFNGNGA_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
