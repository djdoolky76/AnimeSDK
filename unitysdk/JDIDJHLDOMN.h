#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/System/Object.h"

#define JDIDJHLDOMN_CTOR_OFFSET UNITYSDK_OFFSET(0xB8F9380)

inline static constexpr unsigned int JDIDJHLDOMN_TypeDefinitionIndex = 67884;

	class JDIDJHLDOMN : public ::System::Object
	{
	public:
		::RPG::GameCore::Match3::GridTag BKFKAGDNGNN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIDJHLDOMN_CTOR_OFFSET))(this);
		}

	};
