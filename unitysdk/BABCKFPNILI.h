#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreeTemplateType.h"
#include "unitysdk/System/Object.h"

#define BABCKFPNILI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8ADE00)

inline static constexpr unsigned int BABCKFPNILI_TypeDefinitionIndex = 42233;

	class BABCKFPNILI : public ::System::Object
	{
	public:
		::RPG::GameCore::MatchThreeTemplateType FAAHGCGEBPI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABCKFPNILI_CTOR_OFFSET))(this);
		}

	};
