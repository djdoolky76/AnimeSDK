#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define BJMIMMOHLPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A9410)
#define BJMIMMOHLPJ_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xB7A92A0)

inline static constexpr unsigned int BJMIMMOHLPJ_TypeDefinitionIndex = 62395;

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
