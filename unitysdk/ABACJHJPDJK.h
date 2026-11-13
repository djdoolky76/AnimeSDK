#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class MKFBEMBLFKO;

#define ABACJHJPDJK_CTOR_OFFSET UNITYSDK_OFFSET(0x18C93AA0)
#define ABACJHJPDJK_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x18C93A40)
#define ABACJHJPDJK__ONBIND_OFFSET UNITYSDK_OFFSET(0x18C939E0)

inline static constexpr unsigned int ABACJHJPDJK_TypeDefinitionIndex = 73856;

	class ABACJHJPDJK : public ::FMPCODLIOLG
	{
	public:
		::MKFBEMBLFKO* IAAEBPABFFB; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABACJHJPDJK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABACJHJPDJK__ONBIND_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABACJHJPDJK_NJBDJBHEBAN_OFFSET))(this, a1);
		}

	};
