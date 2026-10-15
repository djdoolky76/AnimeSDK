#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPrepTutorialTopHintParam; }

#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALTOPHINTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73B1D0)
#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALTOPHINTPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73AAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepTutorialTopHintParam_TypeDefinitionIndex = 19966;

	class GridFightPrepTutorialTopHintParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsShow; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID TextID; // 0x18
		::System::UInt32 CurProgress; // 0x28
		::System::UInt32 TotalProgress; // 0x2C
		::System::Boolean IsFinish; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALTOPHINTPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPrepTutorialTopHintParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPrepTutorialTopHintParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALTOPHINTPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
