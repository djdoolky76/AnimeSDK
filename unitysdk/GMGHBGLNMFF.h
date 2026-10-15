#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GMGHBGLNMFF_CTOR_OFFSET UNITYSDK_OFFSET(0x15AD12B0)

inline static constexpr unsigned int GMGHBGLNMFF_TypeDefinitionIndex = 77577;

	class GMGHBGLNMFF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGHBGLNMFF_CTOR_OFFSET))(this);
		}

	};
