#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
class PKKNEBGOION;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryRequestEnterRegion; }

#define PHOJLHEDMEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC258B70)
#define PHOJLHEDMEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC258C10)
#define PHOJLHEDMEJ_IMIPEKBPCCI_OFFSET UNITYSDK_OFFSET(0xC259360)
#define PHOJLHEDMEJ_MFAMHCIPGLL_OFFSET UNITYSDK_OFFSET(0xC259530)
#define PHOJLHEDMEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC258F30)
#define PHOJLHEDMEJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC258DF0)

inline static constexpr unsigned int PHOJLHEDMEJ_TypeDefinitionIndex = 58805;

	class PHOJLHEDMEJ
	{
	public:
		::PKKNEBGOION* AABBECIEAAP; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::RPG::GameCore::TryRequestEnterRegion* OFKGLJOAMLD; // 0x38
		::KFELGAIGHAP* CIFKKKCHNBM; // 0x40
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
