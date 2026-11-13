#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define GIJCEBNNMCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E3080)
#define GIJCEBNNMCB_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x1A3E2F20)

inline static constexpr unsigned int GIJCEBNNMCB_TypeDefinitionIndex = 81908;

	class GIJCEBNNMCB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJCEBNNMCB_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + GIJCEBNNMCB_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
