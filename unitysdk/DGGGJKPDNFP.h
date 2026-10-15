#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class ECCKLFIHNOH;
namespace RPG::GameCore { class BackToMainPage; }
namespace RPG::GameCore { class TaskContext; }

#define DGGGJKPDNFP_AGKMHDGHOLE_OFFSET UNITYSDK_OFFSET(0xE83BA80)
#define DGGGJKPDNFP_CTOR_OFFSET UNITYSDK_OFFSET(0xE83B9E0)
#define DGGGJKPDNFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE83BD30)
#define DGGGJKPDNFP_LNOMHHFNFGM_OFFSET UNITYSDK_OFFSET(0xE83BF80)
#define DGGGJKPDNFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE83B9F0)
#define DGGGJKPDNFP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE83BE90)
#define DGGGJKPDNFP_TICK_OFFSET UNITYSDK_OFFSET(0xE83BEE0)

inline static constexpr unsigned int DGGGJKPDNFP_TypeDefinitionIndex = 57943;

	class DGGGJKPDNFP : public ::GELIALJDFBL
	{
	public:
		::ECCKLFIHNOH* GEGNDMIMMNL; // 0x18
		::RPG::GameCore::BackToMainPage* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Single HBANLBGKNKP; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BackToMainPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BackToMainPage*))((::PBYTE)hIl2Cpp + DGGGJKPDNFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGGJKPDNFP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGGJKPDNFP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGGJKPDNFP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGGGJKPDNFP_TICK_OFFSET))(this, a1);
		}

		::System::Void AGKMHDGHOLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGGJKPDNFP_AGKMHDGHOLE_OFFSET))(this);
		}

		::System::Void LNOMHHFNFGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGGJKPDNFP_LNOMHHFNFGM_OFFSET))(this);
		}

	};
