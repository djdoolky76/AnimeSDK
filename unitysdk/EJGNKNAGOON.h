#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
namespace System { class Nullable; }

#define EJGNKNAGOON_CTOR_OFFSET UNITYSDK_OFFSET(0x154DB8F0)

inline static constexpr unsigned int EJGNKNAGOON_TypeDefinitionIndex = 57724;

	class EJGNKNAGOON : public ::System::Object
	{
	public:
		::RPG::MVector3 IGOFLKEBFLA; // 0x10
		::System::Single KLPCBAHLDBA; // 0x1C
		::RPG::MVector3 KJHBKJPKBOP; // 0x20
		::System::Nullable* CJENCLECEHB; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGNKNAGOON_CTOR_OFFSET))(this);
		}

	};
