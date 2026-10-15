#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define BIOEFLBLFID_CTOR_OFFSET UNITYSDK_OFFSET(0xB795620)
#define BIOEFLBLFID_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xB795560)

inline static constexpr unsigned int BIOEFLBLFID_TypeDefinitionIndex = 66806;

	class BIOEFLBLFID : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOEFLBLFID_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + BIOEFLBLFID_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
