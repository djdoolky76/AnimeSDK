#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKJELNMHMON;

#define HCOMIOFNMBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC81AF0)

inline static constexpr unsigned int HCOMIOFNMBB_TypeDefinitionIndex = 44216;

	class HCOMIOFNMBB : public ::System::Object
	{
	public:
		::EKJELNMHMON* DOCBCODGIEH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOMIOFNMBB_CTOR_OFFSET))(this);
		}

	};
