#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMDKMIJLJFH.h"
class BIDINAPIGNA;
namespace RPG::GameCore { class ChimeraDuelAttackJumpTextNode; }

#define CLKPNGLFNGO_CTOR_OFFSET UNITYSDK_OFFSET(0xD78B5D0)
#define CLKPNGLFNGO_DCAICGJHLPP_OFFSET UNITYSDK_OFFSET(0xD78B5E0)

inline static constexpr unsigned int CLKPNGLFNGO_TypeDefinitionIndex = 77625;

	class CLKPNGLFNGO : public ::HMDKMIJLJFH
	{
	public:
		::BIDINAPIGNA* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::BIDINAPIGNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIDINAPIGNA*))((::PBYTE)hIl2Cpp + CLKPNGLFNGO_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean DCAICGJHLPP(::RPG::GameCore::ChimeraDuelAttackJumpTextNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*))((::PBYTE)hIl2Cpp + CLKPNGLFNGO_DCAICGJHLPP_OFFSET))(this, a1);
		}

	};
