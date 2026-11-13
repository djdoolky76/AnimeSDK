#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GeometryEdit/Prism.h"

#define PRISMLAV_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C1CE0)

inline static constexpr unsigned int PrismLAV_TypeDefinitionIndex = 48344;

	class PrismLAV : public ::GeometryEdit::Prism
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PRISMLAV_CTOR_OFFSET))(this);
		}

	};
