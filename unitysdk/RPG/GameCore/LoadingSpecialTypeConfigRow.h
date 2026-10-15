#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoadingSpecialTypeConfigRow; }

#define RPG_GAMECORE_LOADINGSPECIALTYPECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7ECB10)
#define RPG_GAMECORE_LOADINGSPECIALTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7EC950)

namespace RPG::GameCore
{
	class LoadingSpecialTypeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AvailableEntranceIDList; // 0x10
		::System::UInt32 SubMissionID; // 0x18
		::System::UInt32 Priority; // 0x1C
		::System::UInt32 LoadingType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGSPECIALTYPECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoadingSpecialTypeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoadingSpecialTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGSPECIALTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
