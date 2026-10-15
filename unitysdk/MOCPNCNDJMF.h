#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialNotify; }

#define MOCPNCNDJMF_CAAKANLPFLB_OFFSET UNITYSDK_OFFSET(0xBA25890)
#define MOCPNCNDJMF_CPPPPAHJLMO_OFFSET UNITYSDK_OFFSET(0xBA26600)
#define MOCPNCNDJMF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA25290)
#define MOCPNCNDJMF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA252A0)
#define MOCPNCNDJMF_FFGLBPMJLNE_OFFSET UNITYSDK_OFFSET(0xBA25740)
#define MOCPNCNDJMF_GJEJJJONFOG_OFFSET UNITYSDK_OFFSET(0xBA26D50)
#define MOCPNCNDJMF_JKBLJBIPIMM_OFFSET UNITYSDK_OFFSET(0xBA26C20)
#define MOCPNCNDJMF_MMLLBIEGBEK_OFFSET UNITYSDK_OFFSET(0xBA256B0)
#define MOCPNCNDJMF_OFLOJLICNOP_OFFSET UNITYSDK_OFFSET(0xBA25FE0)
#define MOCPNCNDJMF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA252E0)
#define MOCPNCNDJMF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA26CA0)
#define MOCPNCNDJMF_POEJHNPFGOC_OFFSET UNITYSDK_OFFSET(0xBA258D0)
#define MOCPNCNDJMF_TICK_OFFSET UNITYSDK_OFFSET(0xBA26CF0)

inline static constexpr unsigned int MOCPNCNDJMF_TypeDefinitionIndex = 58826;

	class MOCPNCNDJMF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TutorialNotify* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialNotify* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialNotify*))((::PBYTE)hIl2Cpp + MOCPNCNDJMF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCPNCNDJMF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCPNCNDJMF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCPNCNDJMF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOCPNCNDJMF_TICK_OFFSET))(this, a1);
		}

		::System::Void MMLLBIEGBEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCPNCNDJMF_MMLLBIEGBEK_OFFSET))(this);
		}

		::System::Void FFGLBPMJLNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCPNCNDJMF_FFGLBPMJLNE_OFFSET))(this);
		}

		::System::Void JKBLJBIPIMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCPNCNDJMF_JKBLJBIPIMM_OFFSET))(this);
		}

		::System::Void CAAKANLPFLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCPNCNDJMF_CAAKANLPFLB_OFFSET))(this);
		}

		::System::Void POEJHNPFGOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCPNCNDJMF_POEJHNPFGOC_OFFSET))(this);
		}

		::System::Void CPPPPAHJLMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCPNCNDJMF_CPPPPAHJLMO_OFFSET))(this);
		}

		::System::Void OFLOJLICNOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCPNCNDJMF_OFLOJLICNOP_OFFSET))(this);
		}

		::System::Void GJEJJJONFOG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOCPNCNDJMF_GJEJJJONFOG_OFFSET))(this, a1);
		}

	};
