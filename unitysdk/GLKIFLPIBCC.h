#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOCCBMLAELL;

#define GLKIFLPIBCC_CTOR_OFFSET UNITYSDK_OFFSET(0x15AAFFC0)

inline static constexpr unsigned int GLKIFLPIBCC_TypeDefinitionIndex = 80571;

	class GLKIFLPIBCC : public ::System::Object
	{
	public:
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x10
		::System::Void _ctor(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + GLKIFLPIBCC_CTOR_OFFSET))(this, a1);
		}

	};
