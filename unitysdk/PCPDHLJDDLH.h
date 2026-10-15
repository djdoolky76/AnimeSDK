#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ElfBuff; }

#define PCPDHLJDDLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A4F70)

	class PCPDHLJDDLH : public ::System::Object
	{
	public:
		::RPG::GameCore::ElfBuff* HABJHGPFGEB; // 0x10
		::Il2CppArray<::System::Single>* NPHFIJAFHLB; // 0x18
		::System::Single GAFENHHEBPG; // 0x20
		::System::Void _ctor(::RPG::GameCore::ElfBuff* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElfBuff*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + PCPDHLJDDLH_CTOR_OFFSET))(this, a1, a2);
		}

	};
