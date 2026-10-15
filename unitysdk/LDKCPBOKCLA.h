#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SummonPartner; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define LDKCPBOKCLA_CKLBHOCHKON_OFFSET UNITYSDK_OFFSET(0xB6361E0)
#define LDKCPBOKCLA_CTOR_OFFSET UNITYSDK_OFFSET(0xB635660)
#define LDKCPBOKCLA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB635700)
#define LDKCPBOKCLA_IJMNILCFHLN_OFFSET UNITYSDK_OFFSET(0xB6363D0)
#define LDKCPBOKCLA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6357D0)

	class LDKCPBOKCLA
	{
	public:
		::KFELGAIGHAP* HLNGBHEHKKH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SummonPartner* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SummonPartner*))((::PBYTE)hIl2Cpp + LDKCPBOKCLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKCPBOKCLA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKCPBOKCLA_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CKLBHOCHKON(::System::String* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LDKCPBOKCLA_CKLBHOCHKON_OFFSET))(this, a1);
		}

		::System::Void IJMNILCFHLN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDKCPBOKCLA_IJMNILCFHLN_OFFSET))(this, a1);
		}

	};
