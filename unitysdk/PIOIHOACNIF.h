#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/KJFIKOKBCCA.h"
class GNJBEJPFDBO;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }

#define PIOIHOACNIF_ADHFLFMPAGO_OFFSET UNITYSDK_OFFSET(0xCB9DC50)
#define PIOIHOACNIF_AIJPDJLIEMJ_OFFSET UNITYSDK_OFFSET(0xCB9E070)
#define PIOIHOACNIF_CTOR_OFFSET UNITYSDK_OFFSET(0xCB9D430)
#define PIOIHOACNIF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB9D530)
#define PIOIHOACNIF_HJGMONLIJGF_OFFSET UNITYSDK_OFFSET(0xCB9D6B0)
#define PIOIHOACNIF_IKAAONKFLGM_OFFSET UNITYSDK_OFFSET(0xCB9E000)
#define PIOIHOACNIF_KHLHHKKAEEH_OFFSET UNITYSDK_OFFSET(0xCB9DDD0)
#define PIOIHOACNIF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCB9D980)
#define PIOIHOACNIF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCB9DF50)
#define PIOIHOACNIF_TICK_OFFSET UNITYSDK_OFFSET(0xCB9DFA0)

inline static constexpr unsigned int PIOIHOACNIF_TypeDefinitionIndex = 53988;

	class PIOIHOACNIF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* PJJKDBGLNJE; // 0x20
		::KFELGAIGHAP* AKCOOJOALKP; // 0x28
		::GNJBEJPFDBO* OFKGLJOAMLD; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GNJBEJPFDBO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GNJBEJPFDBO*))((::PBYTE)hIl2Cpp + PIOIHOACNIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOIHOACNIF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOIHOACNIF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOIHOACNIF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIOIHOACNIF_TICK_OFFSET))(this, a1);
		}

		::System::Void IKAAONKFLGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOIHOACNIF_IKAAONKFLGM_OFFSET))(this);
		}

		::System::Void AIJPDJLIEMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOIHOACNIF_AIJPDJLIEMJ_OFFSET))(this);
		}

		::System::Void HJGMONLIJGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOIHOACNIF_HJGMONLIJGF_OFFSET))(this);
		}

		::KJFIKOKBCCA ADHFLFMPAGO()
		{
			return ((::KJFIKOKBCCA(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOIHOACNIF_ADHFLFMPAGO_OFFSET))(this);
		}

		::KJFIKOKBCCA KHLHHKKAEEH()
		{
			return ((::KJFIKOKBCCA(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOIHOACNIF_KHLHHKKAEEH_OFFSET))(this);
		}

	};
