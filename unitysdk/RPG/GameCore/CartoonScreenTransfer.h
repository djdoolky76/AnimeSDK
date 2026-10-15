#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CartoonScreenTransfer; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CARTOONSCREENTRANSFER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D557A40)
#define RPG_GAMECORE_CARTOONSCREENTRANSFER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D557A50)
#define RPG_GAMECORE_CARTOONSCREENTRANSFER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D557A00)

namespace RPG::GameCore
{
	class CartoonScreenTransfer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetEntity; // 0x18
		::System::String* AttachPoint; // 0x20
		::System::Single Duration; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* AnimationCurvePath; // 0x30
		::System::Boolean Close; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CARTOONSCREENTRANSFER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CartoonScreenTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CartoonScreenTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CARTOONSCREENTRANSFER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CartoonScreenTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CartoonScreenTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CARTOONSCREENTRANSFER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
