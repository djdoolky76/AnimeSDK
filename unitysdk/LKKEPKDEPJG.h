#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define LKKEPKDEPJG_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF0BB0)
#define LKKEPKDEPJG_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xBFF0AF0)

inline static constexpr unsigned int LKKEPKDEPJG_TypeDefinitionIndex = 83278;

	class LKKEPKDEPJG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKEPKDEPJG_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + LKKEPKDEPJG_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
