#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLIBBDCFOHE.h"
class FEKGOOFCJLC;
class PEEDLCHFAFL;
namespace RPG::GameCore { class TaskContext; }

#define JDEOFNLOPFP_CTOR_OFFSET UNITYSDK_OFFSET(0x165B30E0)
#define JDEOFNLOPFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165B32F0)
#define JDEOFNLOPFP_DLHBNPMFMJD_OFFSET UNITYSDK_OFFSET(0x165B33D0)
#define JDEOFNLOPFP_KKLIFEHFLMD_OFFSET UNITYSDK_OFFSET(0x165B3170)
#define JDEOFNLOPFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165B3120)
#define JDEOFNLOPFP_TICK_OFFSET UNITYSDK_OFFSET(0x165B3360)

inline static constexpr unsigned int JDEOFNLOPFP_TypeDefinitionIndex = 52883;

	class JDEOFNLOPFP : public ::LLIBBDCFOHE
	{
	public:
		::RPG::GameCore::TaskContext* FHGMKOOMHCN; // 0x40
		::PEEDLCHFAFL* EDKOLBIBJPJ; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FEKGOOFCJLC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FEKGOOFCJLC*))((::PBYTE)hIl2Cpp + JDEOFNLOPFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFNLOPFP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFNLOPFP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDEOFNLOPFP_TICK_OFFSET))(this, a1);
		}

		::System::Single DLHBNPMFMJD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFNLOPFP_DLHBNPMFMJD_OFFSET))(this);
		}

		::System::Void KKLIFEHFLMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFNLOPFP_KKLIFEHFLMD_OFFSET))(this);
		}

	};
