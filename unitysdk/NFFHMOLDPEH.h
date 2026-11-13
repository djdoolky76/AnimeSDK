#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFFFJIIIMNH;

#define NFFHMOLDPEH_CTOR_OFFSET UNITYSDK_OFFSET(0x18E60090)

inline static constexpr unsigned int NFFHMOLDPEH_TypeDefinitionIndex = 54820;

	class NFFHMOLDPEH : public ::System::Object
	{
	public:
		::MFFFJIIIMNH* FGACMBOPFBL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFFHMOLDPEH_CTOR_OFFSET))(this);
		}

	};
