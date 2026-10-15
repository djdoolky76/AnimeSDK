#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateEmergentBroadcastConditionType.h"
#include "unitysdk/RPG/GameCore/FateEmergentBroadcastOverrideState.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LABIBNCBFCD;
namespace System { class String; }

#define LABIBNCBFCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CF9C0)
#define LABIBNCBFCD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0CF730)

	class LABIBNCBFCD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* FFCBLPDHCFO; // 0x10
		::System::String* CIMMEBGNABD; // 0x18
		::System::UInt32 PKGJBPODCOG; // 0x20
		::RPG::GameCore::FateEmergentBroadcastOverrideState BCNBKEAJDNG; // 0x24
		::RPG::Client::TextID JGAICIJPHNO; // 0x28
		::RPG::GameCore::FateEmergentBroadcastConditionType LOAGIPDPLFM; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABIBNCBFCD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LABIBNCBFCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LABIBNCBFCD*))((::PBYTE)hIl2Cpp + LABIBNCBFCD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
