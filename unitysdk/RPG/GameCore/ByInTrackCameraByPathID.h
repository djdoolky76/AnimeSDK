#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByInTrackCameraByPathID; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5047C0)
#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D504BA0)
#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D504B70)
#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5047D0)
#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D504790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInTrackCameraByPathID_TypeDefinitionIndex = 20836;

	class ByInTrackCameraByPathID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean UseOwnerGroup; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* DetectGroupID; // 0x28
		::RPG::GameCore::DynamicFloat* PathID; // 0x30
		::RPG::GameCore::DynamicFloat* CurveID; // 0x38
		::RPG::GameCore::DynamicFloat* DetectRange; // 0x40
		::RPG::GameCore::DynamicFloat* DetectHeightRange; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERABYPATHID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByInTrackCameraByPathID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByInTrackCameraByPathID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERABYPATHID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByInTrackCameraByPathID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByInTrackCameraByPathID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERABYPATHID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCameraByPathID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCameraByPathID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERABYPATHID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCameraByPathID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCameraByPathID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERABYPATHID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
