#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EJGNKNAGOON_CTOR_OFFSET UNITYSDK_OFFSET(0x19AAB100)

inline static constexpr unsigned int EJGNKNAGOON_TypeDefinitionIndex = 58957;

	class EJGNKNAGOON : public ::System::Object
	{
	public:
		::System::Single KLPCBAHLDBA; // 0x10
		::RPG::MVector3 KJHBKJPKBOP; // 0x14
		::RPG::MVector3 IGOFLKEBFLA; // 0x20
		::System::Nullable_1<::RPG::MVector3> CJENCLECEHB; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGNKNAGOON_CTOR_OFFSET))(this);
		}

	};
