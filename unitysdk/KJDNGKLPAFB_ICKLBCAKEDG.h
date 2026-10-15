#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJDNGKLPAFB_IOCMNFAEFLL.h"
class KJDNGKLPAFB;
namespace RPG::GameCore { class GameEntity; }

#define KJDNGKLPAFB_ICKLBCAKEDG_BAGFJGCLLCK_OFFSET UNITYSDK_OFFSET(0xB43FAD0)
#define KJDNGKLPAFB_ICKLBCAKEDG_CTOR_OFFSET UNITYSDK_OFFSET(0xB43BCC0)
#define KJDNGKLPAFB_ICKLBCAKEDG_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB43F8C0)
#define KJDNGKLPAFB_ICKLBCAKEDG_OBNDBPAFEOK_OFFSET UNITYSDK_OFFSET(0xB43FC50)

inline static constexpr unsigned int KJDNGKLPAFB_ICKLBCAKEDG_TypeDefinitionIndex = 57240;

	class KJDNGKLPAFB_ICKLBCAKEDG : public ::KJDNGKLPAFB_IOCMNFAEFLL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_ICKLBCAKEDG_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON(::KJDNGKLPAFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_ICKLBCAKEDG_DAMDMJJKLON_OFFSET))(this, a1);
		}

		::System::Void BAGFJGCLLCK(::KJDNGKLPAFB* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_ICKLBCAKEDG_BAGFJGCLLCK_OFFSET))(this, a1, a2);
		}

		::System::Void OBNDBPAFEOK(::KJDNGKLPAFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_ICKLBCAKEDG_OBNDBPAFEOK_OFFSET))(this, a1);
		}

	};
