#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOKOEJKEFMN;

#define JOCGLOLCKBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB298510)

inline static constexpr unsigned int JOCGLOLCKBD_TypeDefinitionIndex = 81105;

	class JOCGLOLCKBD : public ::System::Object
	{
	public:
		::EOKOEJKEFMN* JJIMIBMNMOI; // 0x10
		::System::Void _ctor(::EOKOEJKEFMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOKOEJKEFMN*))((::PBYTE)hIl2Cpp + JOCGLOLCKBD_CTOR_OFFSET))(this, a1);
		}

	};
