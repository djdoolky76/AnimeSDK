#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILEMEHDHELP.h"

#define CIADJCABOFD_CTOR_OFFSET UNITYSDK_OFFSET(0xD8CC910)

inline static constexpr unsigned int CIADJCABOFD_TypeDefinitionIndex = 66772;

	class CIADJCABOFD : public ::ILEMEHDHELP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIADJCABOFD_CTOR_OFFSET))(this);
		}

	};
