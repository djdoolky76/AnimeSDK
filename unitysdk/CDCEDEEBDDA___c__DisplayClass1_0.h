#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDCEDEEBDDA;
class HEJJDLPNKMH;
namespace RPG::Client { class GridFightRole; }

#define CDCEDEEBDDA___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD0CAB70)
#define CDCEDEEBDDA___C__DISPLAYCLASS1_0___GETISACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0xD0CAC10)
#define CDCEDEEBDDA___C__DISPLAYCLASS1_0___GETISACTIVE_B__1_OFFSET UNITYSDK_OFFSET(0xD0CAD40)

inline static constexpr unsigned int CDCEDEEBDDA___c__DisplayClass1_0_TypeDefinitionIndex = 67396;

	class CDCEDEEBDDA___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::CDCEDEEBDDA* __4__this; // 0x10
		::HEJJDLPNKMH* teamRepository; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCEDEEBDDA___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* __GetIsActive_b__0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDCEDEEBDDA___C__DISPLAYCLASS1_0___GETISACTIVE_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __GetIsActive_b__1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CDCEDEEBDDA___C__DISPLAYCLASS1_0___GETISACTIVE_B__1_OFFSET))(this, a1);
		}

	};
