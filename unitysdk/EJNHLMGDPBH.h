#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarInfo; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJNHLMGDPBH_CTOR_OFFSET UNITYSDK_OFFSET(0x154EF3E0)
#define EJNHLMGDPBH_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x154EF460)

	class EJNHLMGDPBH : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* CIPONGCFEJP; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* ODEIMPNDAEF; // 0x28
		::System::Void _ctor(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*))((::PBYTE)hIl2Cpp + EJNHLMGDPBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNHLMGDPBH_ONEXECUTE_OFFSET))(this);
		}

	};
