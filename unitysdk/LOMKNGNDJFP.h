#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class SwitchChallengeTurnLimitType; }
namespace RPG::GameCore { class TaskContext; }

#define LOMKNGNDJFP_BBLAGJIFKEK_OFFSET UNITYSDK_OFFSET(0x1A5BD010)
#define LOMKNGNDJFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5BC990)
#define LOMKNGNDJFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5BCB60)
#define LOMKNGNDJFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A5BCE00)
#define LOMKNGNDJFP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A5BD080)
#define LOMKNGNDJFP_TICK_OFFSET UNITYSDK_OFFSET(0x1A5BD0D0)

inline static constexpr unsigned int LOMKNGNDJFP_TypeDefinitionIndex = 56881;

	class LOMKNGNDJFP : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* EAJNBAKNEIG; // 0x18
		::RPG::GameCore::SwitchChallengeTurnLimitType* OFKGLJOAMLD; // 0x20
		::KFELGAIGHAP* JPMOKOKJEJC; // 0x28
		::KFELGAIGHAP* ELJLJDKNFKE; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::KFELGAIGHAP* MMOICOEJACI; // 0x40
		::KFELGAIGHAP* CFPDPMEKCPJ; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchChallengeTurnLimitType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchChallengeTurnLimitType*))((::PBYTE)hIl2Cpp + LOMKNGNDJFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMKNGNDJFP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMKNGNDJFP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMKNGNDJFP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOMKNGNDJFP_TICK_OFFSET))(this, a1);
		}

		::System::Void BBLAGJIFKEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMKNGNDJFP_BBLAGJIFKEK_OFFSET))(this);
		}

	};
