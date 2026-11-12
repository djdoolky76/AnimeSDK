#pragma once
#include "unitysdk/unitysdk.h"
class BABNOKHOBCF;
class INMMPMDELKE;
class MNCOPNHONHO;

#define EKPICOMMMDH_CTOR_OFFSET UNITYSDK_OFFSET(0x16460700)
#define EKPICOMMMDH__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0x164609E0)
#define EKPICOMMMDH__GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x16460C40)
#define EKPICOMMMDH__ONTRIGGEROUT_OFFSET UNITYSDK_OFFSET(0x16460D80)
#define EKPICOMMMDH__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x16460920)

inline static constexpr unsigned int EKPICOMMMDH_TypeDefinitionIndex = 79138;

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
