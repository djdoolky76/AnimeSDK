#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CinemachineVirtualCameraTemplateConfig; }
namespace RPG::GameCore { class VCameraBlend; }
namespace System { class String; }

#define RPG_GAMECORE_CINEMACHINEVIRTUALCAMERATEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D585610)
#define RPG_GAMECORE_CINEMACHINEVIRTUALCAMERATEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D585430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CinemachineVirtualCameraTemplateConfig_TypeDefinitionIndex = 16442;

	class CinemachineVirtualCameraTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ConfigTemplateName; // 0x10
		::System::String* PrefabTemplatePath; // 0x18
		::System::Boolean IsLocal; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* Comment; // 0x28
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CINEMACHINEVIRTUALCAMERATEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CinemachineVirtualCameraTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CinemachineVirtualCameraTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CINEMACHINEVIRTUALCAMERATEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
