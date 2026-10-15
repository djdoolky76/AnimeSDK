#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CRPVirtualCameraTargetConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_CRPVIRTUALCAMERATARGETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D516FF0)
#define RPG_GAMECORE_CRPVIRTUALCAMERATARGETCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D517000)
#define RPG_GAMECORE_CRPVIRTUALCAMERATARGETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D516DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CRPVirtualCameraTargetConfig_TypeDefinitionIndex = 22892;

	class CRPVirtualCameraTargetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x10
		::System::String* AttachPoint; // 0x18
		::System::String* CRPCameraKey; // 0x20
		::Il2CppArray<::System::String*>* WhiteListEffects; // 0x28
		::System::Boolean AlwaysRefreshCamera; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERATARGETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CRPVirtualCameraTargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CRPVirtualCameraTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERATARGETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::CRPVirtualCameraTargetConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::CRPVirtualCameraTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERATARGETCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
