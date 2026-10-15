#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADBMFDNMBIJ.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define MDJOLMBECHA_CLEAR_OFFSET UNITYSDK_OFFSET(0xB8AD230)
#define MDJOLMBECHA_CTOR_OFFSET UNITYSDK_OFFSET(0xB8AD2A0)

	class MDJOLMBECHA : public ::System::Object
	{
	public:
		::ADBMFDNMBIJ FMIINGDFPKN; // 0x10
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* DMFMNGOGDOH; // 0x28
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x30
		::ADBMFDNMBIJ KIPAGNCANAJ; // 0x38
		::System::String* KKPCDKKLMIO; // 0x50
		::ADBMFDNMBIJ LKFNPPCHCII; // 0x58
		::ADBMFDNMBIJ CFKOIAGCFDA; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJOLMBECHA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJOLMBECHA_CLEAR_OFFSET))(this);
		}

	};
