#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VCameraNoiseChange; }

#define PNDIOOHCBLB_CLEAR_OFFSET UNITYSDK_OFFSET(0xC334670)
#define PNDIOOHCBLB_CTOR_OFFSET UNITYSDK_OFFSET(0xC3346C0)

inline static constexpr unsigned int PNDIOOHCBLB_TypeDefinitionIndex = 69532;

	class PNDIOOHCBLB : public ::System::Object
	{
	public:
		::RPG::GameCore::VCameraBlend* HCHJHLOHCMI; // 0x10
		::RPG::Client::CameraNormalConfigData* HBILPEKJFNM; // 0x18
		::RPG::GameCore::VCameraNoiseChange* FNPOMHPFKAO; // 0x20
		::System::Single IFEPJHGNCOI; // 0x28
		::System::Boolean HHMIBOCMBPI; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDIOOHCBLB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDIOOHCBLB_CLEAR_OFFSET))(this);
		}

	};
