#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class JsonEnum; }

#define GGDONPKFEDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1693D7B0)

inline static constexpr unsigned int GGDONPKFEDJ_TypeDefinitionIndex = 58994;

	class GGDONPKFEDJ : public ::System::Object
	{
	public:
		::RPG::GameCore::JsonEnum* NHALJPDONCP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGDONPKFEDJ_CTOR_OFFSET))(this);
		}

	};
