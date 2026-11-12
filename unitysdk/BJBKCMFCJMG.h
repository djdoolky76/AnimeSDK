#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;

#define BJBKCMFCJMG_CTOR_OFFSET UNITYSDK_OFFSET(0xBE59C20)
#define BJBKCMFCJMG_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xBE59B20)

inline static constexpr unsigned int BJBKCMFCJMG_TypeDefinitionIndex = 81974;

	class BJBKCMFCJMG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBKCMFCJMG_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + BJBKCMFCJMG_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
