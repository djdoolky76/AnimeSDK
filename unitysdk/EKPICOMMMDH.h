#pragma once
#include "unitysdk/unitysdk.h"
class BABNOKHOBCF;
class INMMPMDELKE;
class MNCOPNHONHO;

#define EKPICOMMMDH_CTOR_OFFSET UNITYSDK_OFFSET(0x155181F0)
#define EKPICOMMMDH__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0x155184E0)
#define EKPICOMMMDH__GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15518740)
#define EKPICOMMMDH__ONTRIGGEROUT_OFFSET UNITYSDK_OFFSET(0x15518880)
#define EKPICOMMMDH__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15518420)

	class EKPICOMMMDH
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x40
		::BABNOKHOBCF* FKINCGODJEP; // 0x48
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + EKPICOMMMDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPICOMMMDH__TEARDOWN_OFFSET))(this);
		}

		::System::Void _CreateTrigger(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + EKPICOMMMDH__CREATETRIGGER_OFFSET))(this, a1);
		}

		::INMMPMDELKE* _GetEntityByRuntimeID(::System::Int32 a1)
		{
			return ((::INMMPMDELKE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EKPICOMMMDH__GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
		}

		::System::Void _OnTriggerOut(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + EKPICOMMMDH__ONTRIGGEROUT_OFFSET))(this, a1);
		}

	};
