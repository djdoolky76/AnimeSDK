#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StagePVSOfflineSamplerInfo; }
namespace RPG::GameCore { class StagePVSOfflineVolumeInfo; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEPVSOFFLINEVOLUMEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE52E0)
#define RPG_GAMECORE_STAGEPVSOFFLINEVOLUMEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE50E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSOfflineVolumeInfo_TypeDefinitionIndex = 19179;

	class StagePVSOfflineVolumeInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* VolumeName; // 0x10
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineSamplerInfo*>* AutoGenSamplers; // 0x18
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineSamplerInfo*>* RandomSearchSamplers; // 0x20
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineSamplerInfo*>* CustomSamplers; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEVOLUMEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePVSOfflineVolumeInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePVSOfflineVolumeInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEVOLUMEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
