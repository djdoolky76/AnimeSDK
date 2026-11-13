#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HDLGHDBLMKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA96AA0)

inline static constexpr unsigned int HDLGHDBLMKK_TypeDefinitionIndex = 44693;

	class HDLGHDBLMKK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLGHDBLMKK_CTOR_OFFSET))(this);
		}

	};
