#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADBMFDNMBIJ.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define MDJOLMBECHA_CLEAR_OFFSET UNITYSDK_OFFSET(0xC15D0A0)
#define MDJOLMBECHA_CTOR_OFFSET UNITYSDK_OFFSET(0xC15D120)

inline static constexpr unsigned int MDJOLMBECHA_TypeDefinitionIndex = 58991;

	class MDJOLMBECHA : public ::System::Object
	{
	public:
		::ADBMFDNMBIJ KIPAGNCANAJ; // 0x10
		::System::String* KKPCDKKLMIO; // 0x28
		::ADBMFDNMBIJ CFKOIAGCFDA; // 0x30
		::ADBMFDNMBIJ LKFNPPCHCII; // 0x48
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x60
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* DMFMNGOGDOH; // 0x68
		::ADBMFDNMBIJ FMIINGDFPKN; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJOLMBECHA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJOLMBECHA_CLEAR_OFFSET))(this);
		}

	};
