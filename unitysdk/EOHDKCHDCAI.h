#pragma once
#include "unitysdk/unitysdk.h"
class KEIMDKKCGNK;
class MNBNFBAMKKI;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EOHDKCHDCAI_CTOR_OFFSET UNITYSDK_OFFSET(0x155C0780)
#define EOHDKCHDCAI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155C07F0)
#define EOHDKCHDCAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155C0830)

	class EOHDKCHDCAI
	{
	public:
		::System::Collections::Generic::List_1<::MNBNFBAMKKI*>* JBBCKPOAHCL; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KEIMDKKCGNK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KEIMDKKCGNK*))((::PBYTE)hIl2Cpp + EOHDKCHDCAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHDKCHDCAI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHDKCHDCAI_ONTASKBEGIN_OFFSET))(this);
		}

	};
