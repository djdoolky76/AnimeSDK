#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByIsAttacker; }

#define OFEPMNENCMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C95EA50)
#define OFEPMNENCMA_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1C95EA60)

inline static constexpr unsigned int OFEPMNENCMA_TypeDefinitionIndex = 43137;

	class OFEPMNENCMA : public ::LHJPMDPJPEC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::MarbleByIsAttacker* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByIsAttacker*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + OFEPMNENCMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPMNENCMA_KHNFOOKHOJF_OFFSET))(this);
		}

	};
