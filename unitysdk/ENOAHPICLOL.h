#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddBattleExtraPropertyAddition; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define ENOAHPICLOL_CTOR_OFFSET UNITYSDK_OFFSET(0x155B4850)
#define ENOAHPICLOL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155B5070)
#define ENOAHPICLOL_HBDAPJOONIJ_OFFSET UNITYSDK_OFFSET(0x155B4CA0)
#define ENOAHPICLOL_NGLEBDKMLEB_OFFSET UNITYSDK_OFFSET(0x155B4FC0)
#define ENOAHPICLOL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155B4880)

	class ENOAHPICLOL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddBattleExtraPropertyAddition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddBattleExtraPropertyAddition*))((::PBYTE)hIl2Cpp + ENOAHPICLOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOAHPICLOL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void NGLEBDKMLEB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENOAHPICLOL_NGLEBDKMLEB_OFFSET))(this, a1);
		}

		::System::Void HBDAPJOONIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOAHPICLOL_HBDAPJOONIJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOAHPICLOL_DISPOSE_OFFSET))(this);
		}

	};
