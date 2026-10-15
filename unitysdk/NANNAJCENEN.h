#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAMPJJAPJJG;
namespace RPG::GameCore { class ChenLingBattleAnimEventConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define NANNAJCENEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C934D80)

	class NANNAJCENEN : public ::System::Object
	{
	public:
		::UnityEngine::Animator* CKDKOONONCG; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>* PIELBNECIIN; // 0x18
		::BAMPJJAPJJG* CAHCLIMGPFF; // 0x20
		::System::String* OIBKPJEGPOK; // 0x28
		::System::Single JDLCDAKNJKH; // 0x30
		::System::Single HMBJNEIEIJK; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANNAJCENEN_CTOR_OFFSET))(this);
		}

	};
