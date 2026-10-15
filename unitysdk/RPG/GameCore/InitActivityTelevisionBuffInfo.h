#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class InitActivityTelevisionBuffInfo; }
namespace System { class String; }

#define RPG_GAMECORE_INITACTIVITYTELEVISIONBUFFINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D787520)
#define RPG_GAMECORE_INITACTIVITYTELEVISIONBUFFINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D787530)
#define RPG_GAMECORE_INITACTIVITYTELEVISIONBUFFINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7874F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitActivityTelevisionBuffInfo_TypeDefinitionIndex = 23242;

	class InitActivityTelevisionBuffInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BuffIcon; // 0x18
		::RPG::Client::TextID DescText; // 0x20
		::RPG::GameCore::DynamicFloat* InitCount; // 0x30
		::System::UInt32 TutorialGroupID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITACTIVITYTELEVISIONBUFFINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitActivityTelevisionBuffInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitActivityTelevisionBuffInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITACTIVITYTELEVISIONBUFFINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitActivityTelevisionBuffInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitActivityTelevisionBuffInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITACTIVITYTELEVISIONBUFFINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
