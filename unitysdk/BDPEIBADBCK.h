#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GFMKFAPADMA;
namespace RPG::Client { class LimaoNewsDutyCheckGreetingBranch; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define BDPEIBADBCK_CTOR_OFFSET UNITYSDK_OFFSET(0x16307050)
#define BDPEIBADBCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16307060)
#define BDPEIBADBCK_EPABMBIGIGK_OFFSET UNITYSDK_OFFSET(0x16307360)
#define BDPEIBADBCK_LPBFNFDNFKN_OFFSET UNITYSDK_OFFSET(0x163073B0)
#define BDPEIBADBCK_NAHNFNACDDG_OFFSET UNITYSDK_OFFSET(0x16307220)
#define BDPEIBADBCK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16307120)
#define BDPEIBADBCK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x163072B0)
#define BDPEIBADBCK_TICK_OFFSET UNITYSDK_OFFSET(0x16307300)

inline static constexpr unsigned int BDPEIBADBCK_TypeDefinitionIndex = 52950;

	class BDPEIBADBCK : public ::GELIALJDFBL
	{
	public:
		::GFMKFAPADMA* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GFMKFAPADMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GFMKFAPADMA*))((::PBYTE)hIl2Cpp + BDPEIBADBCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPEIBADBCK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPEIBADBCK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPEIBADBCK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDPEIBADBCK_TICK_OFFSET))(this, a1);
		}

		::System::Void EPABMBIGIGK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDPEIBADBCK_EPABMBIGIGK_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNewsDutyCheckGreetingBranch* NAHNFNACDDG()
		{
			return ((::RPG::Client::LimaoNewsDutyCheckGreetingBranch*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPEIBADBCK_NAHNFNACDDG_OFFSET))(this);
		}

		::System::Int32 LPBFNFDNFKN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPEIBADBCK_LPBFNFDNFKN_OFFSET))(this);
		}

	};
