#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageCaptureAliasData; }
namespace System { class String; }

#define RPG_GAMECORE_STAGECAPTUREALIASDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB08ED0)
#define RPG_GAMECORE_STAGECAPTUREALIASDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB08CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageCaptureAliasData_TypeDefinitionIndex = 19165;

	class StageCaptureAliasData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Alias; // 0x10
		::System::String* PrefabName; // 0x18
		::System::String* HierarchyPath; // 0x20
		::RPG::MVector3 Position; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECAPTUREALIASDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageCaptureAliasData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageCaptureAliasData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECAPTUREALIASDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
