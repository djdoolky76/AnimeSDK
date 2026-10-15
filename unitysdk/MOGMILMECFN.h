#pragma once
#include "unitysdk/unitysdk.h"
class NGFHCJIAOLH;
class PFCDAPDAHNH;
namespace RPG::GameCore { class TaskContext; }

#define MOGMILMECFN_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2BE00)
#define MOGMILMECFN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA2C310)
#define MOGMILMECFN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA2BE80)

	class MOGMILMECFN
	{
	public:
		::NGFHCJIAOLH* CKCHKBCBNIJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PFCDAPDAHNH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PFCDAPDAHNH*))((::PBYTE)hIl2Cpp + MOGMILMECFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGMILMECFN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGMILMECFN_DISPOSE_OFFSET))(this);
		}

	};
