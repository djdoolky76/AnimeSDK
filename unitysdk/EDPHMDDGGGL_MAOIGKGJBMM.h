#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDPHMDDGGGL_HLHGMJMBEIM;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PerformanceCaptureNPC; }

#define EDPHMDDGGGL_MAOIGKGJBMM_CTOR_OFFSET UNITYSDK_OFFSET(0x147E6790)

inline static constexpr unsigned int EDPHMDDGGGL_MAOIGKGJBMM_TypeDefinitionIndex = 62095;

	class EDPHMDDGGGL_MAOIGKGJBMM : public ::System::Object
	{
	public:
		::EDPHMDDGGGL_HLHGMJMBEIM* BHEOOHCEPFN; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::RPG::GameCore::PerformanceCaptureNPC* EABKOHGCHFP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPHMDDGGGL_MAOIGKGJBMM_CTOR_OFFSET))(this);
		}

	};
