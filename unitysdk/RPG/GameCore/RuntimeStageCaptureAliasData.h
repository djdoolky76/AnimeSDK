#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RuntimeStageCaptureAliasData; }
namespace System { class String; }

#define RPG_GAMECORE_RUNTIMESTAGECAPTUREALIASDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6D760)
#define RPG_GAMECORE_RUNTIMESTAGECAPTUREALIASDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6D560)

namespace RPG::GameCore
{
	class RuntimeStageCaptureAliasData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BlockAlias; // 0x10
		::System::String* Alias; // 0x18
		::System::Int32 ObjIndex; // 0x20
		::System::Boolean MarkDelete; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMESTAGECAPTUREALIASDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RuntimeStageCaptureAliasData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RuntimeStageCaptureAliasData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMESTAGECAPTUREALIASDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
