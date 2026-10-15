#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StagePVSOfflineVisiblityInfo; }

#define RPG_GAMECORE_STAGEPVSOFFLINEVISIBLITYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB12980)
#define RPG_GAMECORE_STAGEPVSOFFLINEVISIBLITYINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB12520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSOfflineVisiblityInfo_TypeDefinitionIndex = 19182;

	class StagePVSOfflineVisiblityInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt16>* ObjIdx; // 0x10
		::Il2CppArray<::System::UInt32>* ObjIdxEx; // 0x18
		::Il2CppArray<::System::UInt16>* Visibility; // 0x20
		::System::Single VisibilityThreshold; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEVISIBLITYINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePVSOfflineVisiblityInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePVSOfflineVisiblityInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEVISIBLITYINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
