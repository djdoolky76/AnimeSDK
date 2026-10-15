#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define AGOFDNJAOMA_CLEAR_OFFSET UNITYSDK_OFFSET(0xCF3EF50)
#define AGOFDNJAOMA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF3EFA0)

inline static constexpr unsigned int AGOFDNJAOMA_TypeDefinitionIndex = 54386;

	class AGOFDNJAOMA : public ::System::Object
	{
	public:
		::System::Nullable_1<::RPG::GameCore::FixPoint> DEOMLDMGCOO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOFDNJAOMA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOFDNJAOMA_CLEAR_OFFSET))(this);
		}

	};
