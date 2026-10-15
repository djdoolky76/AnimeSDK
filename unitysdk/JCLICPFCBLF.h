#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMAPCLKFJGK.h"
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define JCLICPFCBLF_BFALCBKCFFF_OFFSET UNITYSDK_OFFSET(0x16597050)
#define JCLICPFCBLF_CTOR_OFFSET UNITYSDK_OFFSET(0x16596EE0)
#define JCLICPFCBLF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16596F40)
#define JCLICPFCBLF_KKHAEKMFIOC_OFFSET UNITYSDK_OFFSET(0x16597430)
#define JCLICPFCBLF_LOHIFEMCGMP_OFFSET UNITYSDK_OFFSET(0x16597500)

inline static constexpr unsigned int JCLICPFCBLF_TypeDefinitionIndex = 69441;

	class JCLICPFCBLF : public ::PMAPCLKFJGK
	{
	public:
		::System::UInt32 IFDLFIBAFKE; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLICPFCBLF_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLICPFCBLF_DISPOSE_OFFSET))(this);
		}

		::System::Void BFALCBKCFFF(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JCLICPFCBLF_BFALCBKCFFF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KKHAEKMFIOC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCLICPFCBLF_KKHAEKMFIOC_OFFSET))(this, a1);
		}

		::System::Void LOHIFEMCGMP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCLICPFCBLF_LOHIFEMCGMP_OFFSET))(this, a1);
		}

	};
