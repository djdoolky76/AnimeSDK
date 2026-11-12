#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AJMGEGAHJGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA117D0)

inline static constexpr unsigned int AJMGEGAHJGL_TypeDefinitionIndex = 44748;

	class AJMGEGAHJGL : public ::System::Object
	{
	public:
		::System::UInt32 HEOPMGABIAK; // 0x10
		::System::UInt32 JGBFGDAPBBL; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMGEGAHJGL_CTOR_OFFSET))(this);
		}

	};
