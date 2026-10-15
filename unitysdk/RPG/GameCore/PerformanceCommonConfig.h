#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PerformanceLoadType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PerformanceCommonConfig; }
namespace RPG::GameCore { class PerformanceIDPair; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCECOMMONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F8DB0)
#define RPG_GAMECORE_PERFORMANCECOMMONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F8660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceCommonConfig_TypeDefinitionIndex = 19038;

	class PerformanceCommonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PerformanceLoadType LoadType; // 0x10
		::System::Boolean EnableFastLoad; // 0x14
		::System::Boolean InvisibleEntityTickLowest; // 0x15
		::System::Boolean UnloadPlayerPreload; // 0x16
		::System::Boolean UnloadInvisibleMunicipal; // 0x17
		::System::Boolean UnloadInvisibleEntityArt; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::PerformanceIDPair*>* UnloadInvisibleEntityArtAffectList; // 0x20
		::System::Boolean AutoStreamingSource; // 0x28
		::System::Byte _padding1[0x3];
		::System::Int32 AutoStreamingSourceMaxCount; // 0x2C
		::System::Boolean IsControlShadow; // 0x30
		::System::Boolean IsRefreshStencil; // 0x31
		::System::Boolean EnableOC; // 0x32
		::System::Boolean ForbidPerformanceActorOC; // 0x33
		::System::Boolean EnableForceUpdateOcclusionQuery; // 0x34
		::System::Byte _padding2[0x3];
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* OptionIconTypeAutoSelectSortList; // 0x38
		::Il2CppArray<::System::String*>* UIInPerformanceWhiteList; // 0x40
		::Il2CppArray<::System::String*>* EnterPerformanceUIPageWhiteList; // 0x48
		::Il2CppArray<::System::String*>* ShiftPageWhiteList; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECOMMONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceCommonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceCommonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECOMMONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
