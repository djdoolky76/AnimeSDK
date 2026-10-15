#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimSurfaceBakedInfo; }

#define MJHNFPCAKOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92C8D0)

inline static constexpr unsigned int MJHNFPCAKOK_TypeDefinitionIndex = 43371;

	class MJHNFPCAKOK : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimSurfaceBakedInfo* OOKPCCKEANI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHNFPCAKOK_CTOR_OFFSET))(this);
		}

	};
