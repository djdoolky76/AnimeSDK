#pragma once
#include "unitysdk/unitysdk.h"
class CIJAOPJPHDK;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define NMMNONANKJI_CTOR_OFFSET UNITYSDK_OFFSET(0xBC8F5D0)
#define NMMNONANKJI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC8F920)
#define NMMNONANKJI_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0xBC8F7E0)
#define NMMNONANKJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC8F650)

	class NMMNONANKJI
	{
	public:
		::NGFHCJIAOLH* CKCHKBCBNIJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CIJAOPJPHDK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CIJAOPJPHDK*))((::PBYTE)hIl2Cpp + NMMNONANKJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNONANKJI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void GHIFMGPKFPF(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + NMMNONANKJI_GHIFMGPKFPF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNONANKJI_DISPOSE_OFFSET))(this);
		}

	};
