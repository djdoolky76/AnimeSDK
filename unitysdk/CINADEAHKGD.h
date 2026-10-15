#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define CINADEAHKGD_CTOR_OFFSET UNITYSDK_OFFSET(0xCF8ECE0)
#define CINADEAHKGD_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xCF8E780)

inline static constexpr unsigned int CINADEAHKGD_TypeDefinitionIndex = 81439;

	class CINADEAHKGD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINADEAHKGD_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + CINADEAHKGD_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
