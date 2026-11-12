#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"

#define JKHCLOAJILN_CTOR_OFFSET UNITYSDK_OFFSET(0xBA444D0)

inline static constexpr unsigned int JKHCLOAJILN_TypeDefinitionIndex = 62582;

	class JKHCLOAJILN : public ::HDJIGMBHENE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHCLOAJILN_CTOR_OFFSET))(this);
		}

	};
