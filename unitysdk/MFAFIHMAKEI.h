#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class ShowEnterPasswordPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define MFAFIHMAKEI_CHOOMNGLJHI_OFFSET UNITYSDK_OFFSET(0xB8E8D80)
#define MFAFIHMAKEI_CTOR_OFFSET UNITYSDK_OFFSET(0xB8E8520)
#define MFAFIHMAKEI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8E8680)
#define MFAFIHMAKEI_HBLGHOCOHAL_OFFSET UNITYSDK_OFFSET(0xB8E9050)
#define MFAFIHMAKEI_LNMOCNDILJN_OFFSET UNITYSDK_OFFSET(0xB8E8EC0)
#define MFAFIHMAKEI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8E8880)
#define MFAFIHMAKEI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8E8B00)
#define MFAFIHMAKEI_TICK_OFFSET UNITYSDK_OFFSET(0xB8E8C40)

	class MFAFIHMAKEI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowEnterPasswordPage* OFKGLJOAMLD; // 0x18
		::KFELGAIGHAP* BJLJHFHKDCA; // 0x20
		::KFELGAIGHAP* CDDKIBEMBOM; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::KFELGAIGHAP* GNHLFKDFLKO; // 0x38
		::KFELGAIGHAP* IKNPCLDDCDI; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEnterPasswordPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEnterPasswordPage*))((::PBYTE)hIl2Cpp + MFAFIHMAKEI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAFIHMAKEI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAFIHMAKEI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAFIHMAKEI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFAFIHMAKEI_TICK_OFFSET))(this, a1);
		}

		::System::Void CHOOMNGLJHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAFIHMAKEI_CHOOMNGLJHI_OFFSET))(this);
		}

		::System::Void LNMOCNDILJN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MFAFIHMAKEI_LNMOCNDILJN_OFFSET))(this, a1);
		}

		::System::Void HBLGHOCOHAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAFIHMAKEI_HBLGHOCOHAL_OFFSET))(this);
		}

	};
