#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJDNGKLPAFB;
namespace RPG::GameCore { class GameEntity; }

#define KJDNGKLPAFB_IOCMNFAEFLL_BAGFJGCLLCK_OFFSET UNITYSDK_OFFSET(0xB440350)
#define KJDNGKLPAFB_IOCMNFAEFLL_CTOR_OFFSET UNITYSDK_OFFSET(0xB43BCF0)
#define KJDNGKLPAFB_IOCMNFAEFLL_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB4402A0)
#define KJDNGKLPAFB_IOCMNFAEFLL_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB4402F0)
#define KJDNGKLPAFB_IOCMNFAEFLL_OBNDBPAFEOK_OFFSET UNITYSDK_OFFSET(0xB4403A0)
#define KJDNGKLPAFB_IOCMNFAEFLL_PIIAFPHMEFG_OFFSET UNITYSDK_OFFSET(0xB4403F0)

inline static constexpr unsigned int KJDNGKLPAFB_IOCMNFAEFLL_TypeDefinitionIndex = 57236;

	class KJDNGKLPAFB_IOCMNFAEFLL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_IOCMNFAEFLL_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON(::KJDNGKLPAFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_IOCMNFAEFLL_DAMDMJJKLON_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::KJDNGKLPAFB* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*, ::System::Single))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_IOCMNFAEFLL_LJOLGCNKIEH_OFFSET))(this, a1, a2);
		}

		::System::Void BAGFJGCLLCK(::KJDNGKLPAFB* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_IOCMNFAEFLL_BAGFJGCLLCK_OFFSET))(this, a1, a2);
		}

		::System::Void OBNDBPAFEOK(::KJDNGKLPAFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_IOCMNFAEFLL_OBNDBPAFEOK_OFFSET))(this, a1);
		}

		::System::Void PIIAFPHMEFG(::KJDNGKLPAFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_IOCMNFAEFLL_PIIAFPHMEFG_OFFSET))(this, a1);
		}

	};
