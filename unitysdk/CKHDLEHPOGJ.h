#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CKHDLEHPOGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3D9E0)

inline static constexpr unsigned int CKHDLEHPOGJ_TypeDefinitionIndex = 66956;

	class CKHDLEHPOGJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHDLEHPOGJ_CTOR_OFFSET))(this);
		}

	};
