#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define NIOFJNPDHPI_CTOR_OFFSET UNITYSDK_OFFSET(0xBBFF5A0)
#define NIOFJNPDHPI_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xBBFF4F0)

inline static constexpr unsigned int NIOFJNPDHPI_TypeDefinitionIndex = 80250;

	class NIOFJNPDHPI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOFJNPDHPI_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + NIOFJNPDHPI_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
