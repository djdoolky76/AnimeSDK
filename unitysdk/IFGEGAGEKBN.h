#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class OnMuseumPerformanceBegin; }
namespace RPG::GameCore { class TaskContext; }

#define IFGEGAGEKBN_CTOR_OFFSET UNITYSDK_OFFSET(0x15F13B60)
#define IFGEGAGEKBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F13D00)
#define IFGEGAGEKBN_KAKIAHJFAKA_OFFSET UNITYSDK_OFFSET(0x15F13DE0)
#define IFGEGAGEKBN_KIGKKADGFCC_OFFSET UNITYSDK_OFFSET(0x15F142C0)
#define IFGEGAGEKBN_NHNJMEMPOJN_OFFSET UNITYSDK_OFFSET(0x15F14120)
#define IFGEGAGEKBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F13EF0)
#define IFGEGAGEKBN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15F14170)
#define IFGEGAGEKBN_PDFBFNFBMLF_OFFSET UNITYSDK_OFFSET(0x15F13BF0)
#define IFGEGAGEKBN_TICK_OFFSET UNITYSDK_OFFSET(0x15F141C0)

inline static constexpr unsigned int IFGEGAGEKBN_TypeDefinitionIndex = 58237;

	class IFGEGAGEKBN : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x18
		::RPG::GameCore::OnMuseumPerformanceBegin* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* FKKMNKMENBJ; // 0x30
		::System::Boolean HCEDHPFKPAH; // 0x38
		// static const ::System::String* MAGNGPBKECB; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OnMuseumPerformanceBegin* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OnMuseumPerformanceBegin*))((::PBYTE)hIl2Cpp + IFGEGAGEKBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGEGAGEKBN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGEGAGEKBN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void NHNJMEMPOJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGEGAGEKBN_NHNJMEMPOJN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGEGAGEKBN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFGEGAGEKBN_TICK_OFFSET))(this, a1);
		}

		::System::Void PDFBFNFBMLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGEGAGEKBN_PDFBFNFBMLF_OFFSET))(this);
		}

		::System::Void KAKIAHJFAKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGEGAGEKBN_KAKIAHJFAKA_OFFSET))(this);
		}

		::System::Void KIGKKADGFCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + IFGEGAGEKBN_KIGKKADGFCC_OFFSET))(this, a1);
		}

	};
