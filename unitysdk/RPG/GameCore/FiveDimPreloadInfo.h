#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPreloadInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPRELOADINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D3190)
#define RPG_GAMECORE_FIVEDIMPRELOADINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D3060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPreloadInfo_TypeDefinitionIndex = 16726;

	class FiveDimPreloadInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* PreloadViewPaths; // 0x10
		::Il2CppArray<::System::String*>* PreloadEffectPaths; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPRELOADINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPreloadInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPreloadInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPRELOADINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
