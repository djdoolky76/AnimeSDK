#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFJJFFMMEAF.h"
namespace RPG::GameCore { class AddAdventureModifier; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCBFBFCDKKF_CTOR_OFFSET UNITYSDK_OFFSET(0xC735DE0)
#define CCBFBFCDKKF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC735E10)

inline static constexpr unsigned int CCBFBFCDKKF_TypeDefinitionIndex = 57858;

	class CCBFBFCDKKF
	{
	public:
		::System::Collections::Generic::List_1<::CFJJFFMMEAF>* EEMDJJPDGKH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddAdventureModifier* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddAdventureModifier*))((::PBYTE)hIl2Cpp + CCBFBFCDKKF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBFBFCDKKF_ONTASKBEGIN_OFFSET))(this);
		}

	};
