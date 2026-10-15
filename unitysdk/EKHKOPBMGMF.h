#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKDAANCFPGO.h"
class GKDAANCFPGO;
class PAPOPANPGIJ;
namespace RPG::GameCore { class StateTreeStateConfig; }

#define EKHKOPBMGMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C603080)

inline static constexpr unsigned int EKHKOPBMGMF_TypeDefinitionIndex = 36969;

	class EKHKOPBMGMF : public ::GKDAANCFPGO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::StateTreeStateConfig* a1, ::PAPOPANPGIJ* a2, ::GKDAANCFPGO* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StateTreeStateConfig*, ::PAPOPANPGIJ*, ::GKDAANCFPGO*, ::System::Int32))((::PBYTE)hIl2Cpp + EKHKOPBMGMF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
