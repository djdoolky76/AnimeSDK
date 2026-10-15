#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EJGNKNAGOON_CTOR_OFFSET UNITYSDK_OFFSET(0x154CFAD0)

inline static constexpr unsigned int EJGNKNAGOON_TypeDefinitionIndex = 57724;

	class EJGNKNAGOON : public ::System::Object
	{
	public:
		::System::Single KLPCBAHLDBA; // 0x10
		::System::Nullable_1<::RPG::MVector3> CJENCLECEHB; // 0x14
		::System::Byte _padding0[0x8];
		::RPG::MVector3 KJHBKJPKBOP; // 0x24
		::RPG::MVector3 IGOFLKEBFLA; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGNKNAGOON_CTOR_OFFSET))(this);
		}

	};
