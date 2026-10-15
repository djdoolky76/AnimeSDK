#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAMPJJAPJJG;
namespace RPG::GameCore { class ChenLingBattleAnimEventConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define NANNAJCENEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C906980)

inline static constexpr unsigned int NANNAJCENEN_TypeDefinitionIndex = 43727;

	class NANNAJCENEN : public ::System::Object
	{
	public:
		::BAMPJJAPJJG* CAHCLIMGPFF; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>* PIELBNECIIN; // 0x18
		::UnityEngine::Animator* CKDKOONONCG; // 0x20
		::System::String* OIBKPJEGPOK; // 0x28
		::System::Single HMBJNEIEIJK; // 0x30
		::System::Single JDLCDAKNJKH; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANNAJCENEN_CTOR_OFFSET))(this);
		}

	};
