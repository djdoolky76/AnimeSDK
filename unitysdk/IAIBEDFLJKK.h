#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IAIBEDFLJKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCAC70)

inline static constexpr unsigned int IAIBEDFLJKK_TypeDefinitionIndex = 44771;

	class IAIBEDFLJKK : public ::System::Object
	{
	public:
		::System::Single FIJLEDEKBJP; // 0x10
		::System::Single IEHPFADHJFD; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIBEDFLJKK_CTOR_OFFSET))(this);
		}

	};
