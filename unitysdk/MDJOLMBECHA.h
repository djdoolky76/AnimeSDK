#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADBMFDNMBIJ.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define MDJOLMBECHA_CLEAR_OFFSET UNITYSDK_OFFSET(0x183E64C0)
#define MDJOLMBECHA_CTOR_OFFSET UNITYSDK_OFFSET(0x183E6540)

inline static constexpr unsigned int MDJOLMBECHA_TypeDefinitionIndex = 58991;

	class MDJOLMBECHA : public ::System::Object
	{
	public:
		::ADBMFDNMBIJ FMIINGDFPKN; // 0x10
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* DMFMNGOGDOH; // 0x28
		::ADBMFDNMBIJ LKFNPPCHCII; // 0x30
		::ADBMFDNMBIJ KIPAGNCANAJ; // 0x48
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x60
		::System::String* KKPCDKKLMIO; // 0x68
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
