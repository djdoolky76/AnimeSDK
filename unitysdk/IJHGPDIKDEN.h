#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOFinishReason.h"
class CEGJADNLKED;
namespace RPG::GameCore { class ST_Main_PlaySmartObject; }
namespace RPG::GameCore { class TaskContext; }

#define IJHGPDIKDEN_ABFEBBHDLFI_OFFSET UNITYSDK_OFFSET(0x164686A0)
#define IJHGPDIKDEN_CTOR_OFFSET UNITYSDK_OFFSET(0x16467F90)
#define IJHGPDIKDEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16468640)
#define IJHGPDIKDEN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16468050)
#define IJHGPDIKDEN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16468580)

	class IJHGPDIKDEN
	{
	public:
		::CEGJADNLKED* DFMOOFNKPOG; // 0x28
		::System::UInt64 OHICNFCJKCM; // 0x30
		::System::UInt32 LCJDAMMJLEI; // 0x38
		::System::UInt32 LOFEALEJFPL; // 0x3C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_PlaySmartObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_PlaySmartObject*))((::PBYTE)hIl2Cpp + IJHGPDIKDEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHGPDIKDEN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHGPDIKDEN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHGPDIKDEN_DISPOSE_OFFSET))(this);
		}

		::System::Void ABFEBBHDLFI(::RPG::GameCore::SOFinishReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SOFinishReason))((::PBYTE)hIl2Cpp + IJHGPDIKDEN_ABFEBBHDLFI_OFFSET))(this, a1);
		}

	};
