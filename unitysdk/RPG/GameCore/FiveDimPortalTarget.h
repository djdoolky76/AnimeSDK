#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPortalTarget; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPORTALTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D3050)
#define RPG_GAMECORE_FIVEDIMPORTALTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D0D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPortalTarget_TypeDefinitionIndex = 18572;

	class FiveDimPortalTarget : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsExit; // 0x10
		::System::Boolean IsCrossLevel; // 0x11
		::System::Byte _padding0[0x2];
		::System::UInt32 TargetEntityID; // 0x14
		::System::String* TargetLGameEntityRef; // 0x18
		::System::String* TargetLevelEntityRef; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPORTALTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPortalTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPortalTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPORTALTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
