#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CameraShakeTemplateConfig; }
namespace RPG::GameCore { class CameraShakeTemplateSingleConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5291E0)
#define RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_IPKDBIFDMHJ_OFFSET UNITYSDK_OFFSET(0x1D528EE0)
#define RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0x1D529180)
#define RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D528E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraShakeTemplateConfig_TypeDefinitionIndex = 16440;

	class CameraShakeTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CameraShakeTemplateSingleConfig*>* SingleTemplateList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::CameraShakeTemplateSingleConfig*>* _CacheDict; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CameraShakeTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CameraShakeTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::RPG::GameCore::CameraShakeTemplateSingleConfig* IPKDBIFDMHJ(::System::String* a1)
		{
			return ((::RPG::GameCore::CameraShakeTemplateSingleConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_IPKDBIFDMHJ_OFFSET))(this, a1);
		}

		::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_KHNCMBEFIKI_OFFSET))(this);
		}

	};
}
