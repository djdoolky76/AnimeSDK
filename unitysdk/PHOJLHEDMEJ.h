#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
class PKKNEBGOION;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryRequestEnterRegion; }

#define PHOJLHEDMEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC2511B0)
#define PHOJLHEDMEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC251250)
#define PHOJLHEDMEJ_IMIPEKBPCCI_OFFSET UNITYSDK_OFFSET(0xC2519A0)
#define PHOJLHEDMEJ_MFAMHCIPGLL_OFFSET UNITYSDK_OFFSET(0xC251B70)
#define PHOJLHEDMEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC251570)
#define PHOJLHEDMEJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC251430)

inline static constexpr unsigned int PHOJLHEDMEJ_TypeDefinitionIndex = 58805;

	class PHOJLHEDMEJ
	{
	public:
		::KFELGAIGHAP* CIFKKKCHNBM; // 0x28
		::PKKNEBGOION* AABBECIEAAP; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::RPG::GameCore::TryRequestEnterRegion* OFKGLJOAMLD; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryRequestEnterRegion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryRequestEnterRegion*))((::PBYTE)hIl2Cpp + PHOJLHEDMEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOJLHEDMEJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOJLHEDMEJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOJLHEDMEJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void IMIPEKBPCCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOJLHEDMEJ_IMIPEKBPCCI_OFFSET))(this);
		}

		::System::Void MFAMHCIPGLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOJLHEDMEJ_MFAMHCIPGLL_OFFSET))(this);
		}

	};
