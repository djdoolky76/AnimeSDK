#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define BIOEFLBLFID_CTOR_OFFSET UNITYSDK_OFFSET(0xBE586F0)
#define BIOEFLBLFID_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xBE58630)

inline static constexpr unsigned int BIOEFLBLFID_TypeDefinitionIndex = 68742;

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
