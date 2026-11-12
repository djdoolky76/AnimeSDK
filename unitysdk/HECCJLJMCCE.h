#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateMasterTalkSituation.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HECCJLJMCCE;

#define HECCJLJMCCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E076420)
#define HECCJLJMCCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E0760C0)

inline static constexpr unsigned int HECCJLJMCCE_TypeDefinitionIndex = 11554;

	class HECCJLJMCCE : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BIFDDEDBGAL; // 0x10
		::Il2CppArray<::System::UInt32>* NFIKBPNJGDG; // 0x18
		::RPG::Client::TextID HHDKOKBHBCA; // 0x20
		::System::UInt32 LJPJOPFFGGF; // 0x30
		::System::UInt32 MGNIIAODKMF; // 0x34
		::RPG::GameCore::FateMasterTalkSituation KLAGNGDGAIC; // 0x38
		::System::UInt32 NNDOABPFDMI; // 0x3C
		::RPG::Client::TextID OKHNDIGJMIG; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HECCJLJMCCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HECCJLJMCCE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HECCJLJMCCE*))((::PBYTE)hIl2Cpp + HECCJLJMCCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
