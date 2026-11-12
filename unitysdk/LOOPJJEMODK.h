#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define LOOPJJEMODK_CTOR_OFFSET UNITYSDK_OFFSET(0xC073180)
#define LOOPJJEMODK_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xC072C10)

inline static constexpr unsigned int LOOPJJEMODK_TypeDefinitionIndex = 83313;

	class LOOPJJEMODK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOPJJEMODK_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + LOOPJJEMODK_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
