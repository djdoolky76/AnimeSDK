#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADBMFDNMBIJ.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define MDJOLMBECHA_CLEAR_OFFSET UNITYSDK_OFFSET(0xB8A6460)
#define MDJOLMBECHA_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A64D0)

inline static constexpr unsigned int MDJOLMBECHA_TypeDefinitionIndex = 57756;

	class MDJOLMBECHA : public ::System::Object
	{
	public:
		::System::String* KKPCDKKLMIO; // 0x10
		::ADBMFDNMBIJ LKFNPPCHCII; // 0x18
		::ADBMFDNMBIJ KIPAGNCANAJ; // 0x30
		::ADBMFDNMBIJ CFKOIAGCFDA; // 0x48
		::ADBMFDNMBIJ FMIINGDFPKN; // 0x60
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x78
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* DMFMNGOGDOH; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJOLMBECHA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJOLMBECHA_CLEAR_OFFSET))(this);
		}

	};
