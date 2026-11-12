#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define BJMIMMOHLPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC0F9470)
#define BJMIMMOHLPJ_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xC0F9300)

inline static constexpr unsigned int BJMIMMOHLPJ_TypeDefinitionIndex = 63808;

	class BJMIMMOHLPJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMIMMOHLPJ_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + BJMIMMOHLPJ_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
