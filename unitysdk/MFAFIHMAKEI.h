#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class ShowEnterPasswordPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define MFAFIHMAKEI_CHOOMNGLJHI_OFFSET UNITYSDK_OFFSET(0xB8E2C90)
#define MFAFIHMAKEI_CTOR_OFFSET UNITYSDK_OFFSET(0xB8E2420)
#define MFAFIHMAKEI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8E2580)
#define MFAFIHMAKEI_HBLGHOCOHAL_OFFSET UNITYSDK_OFFSET(0xB8E2F60)
#define MFAFIHMAKEI_LNMOCNDILJN_OFFSET UNITYSDK_OFFSET(0xB8E2DD0)
#define MFAFIHMAKEI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8E2790)
#define MFAFIHMAKEI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8E2A10)
#define MFAFIHMAKEI_TICK_OFFSET UNITYSDK_OFFSET(0xB8E2B50)

inline static constexpr unsigned int MFAFIHMAKEI_TypeDefinitionIndex = 58637;

	class MFAFIHMAKEI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* IKNPCLDDCDI; // 0x20
		::RPG::GameCore::ShowEnterPasswordPage* OFKGLJOAMLD; // 0x28
		::KFELGAIGHAP* GNHLFKDFLKO; // 0x30
		::KFELGAIGHAP* CDDKIBEMBOM; // 0x38
		::KFELGAIGHAP* BJLJHFHKDCA; // 0x40
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
