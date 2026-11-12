#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OAOJJOCIOOA;

#define OAOJJOCIOOA_OHNBLPCHAMG_CTOR_OFFSET UNITYSDK_OFFSET(0xC62FD50)
#define OAOJJOCIOOA_OHNBLPCHAMG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC632B50)

inline static constexpr unsigned int OAOJJOCIOOA_OHNBLPCHAMG_TypeDefinitionIndex = 61934;

	class OAOJJOCIOOA_OHNBLPCHAMG : public ::System::Object
	{
	public:
		::OAOJJOCIOOA* KFPAHLICBEI; // 0x10
		::System::Void _ctor(::OAOJJOCIOOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAOJJOCIOOA*))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_OHNBLPCHAMG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_OHNBLPCHAMG_DISPOSE_OFFSET))(this);
		}

	};
