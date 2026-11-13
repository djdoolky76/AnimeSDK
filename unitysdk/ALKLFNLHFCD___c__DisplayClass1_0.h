#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEJJDLPNKMH;
namespace RPG::Client { class GridFightRole; }

#define ALKLFNLHFCD___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x197C9060)
#define ALKLFNLHFCD___C__DISPLAYCLASS1_0___GETISACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0x197C91F0)

inline static constexpr unsigned int ALKLFNLHFCD___c__DisplayClass1_0_TypeDefinitionIndex = 67394;

	class ALKLFNLHFCD___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::HEJJDLPNKMH* teamRepository; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKLFNLHFCD___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* __GetIsActive_b__0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALKLFNLHFCD___C__DISPLAYCLASS1_0___GETISACTIVE_B__0_OFFSET))(this, a1);
		}

	};
