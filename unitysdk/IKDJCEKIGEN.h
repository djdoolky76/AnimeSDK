#pragma once
#include "unitysdk/unitysdk.h"
class KJCIMIGBELH;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define IKDJCEKIGEN_CTOR_OFFSET UNITYSDK_OFFSET(0x164844E0)
#define IKDJCEKIGEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16484880)
#define IKDJCEKIGEN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16484560)

	class IKDJCEKIGEN
	{
	public:
		::NGFHCJIAOLH* NFJGMKPFPOC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KJCIMIGBELH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KJCIMIGBELH*))((::PBYTE)hIl2Cpp + IKDJCEKIGEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDJCEKIGEN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDJCEKIGEN_DISPOSE_OFFSET))(this);
		}

	};
