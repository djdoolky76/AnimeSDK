#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDCAPEBJDIO.h"
#include "unitysdk/RPG/MVector2.h"
class IALIPBPEPOJ;
namespace System { class Object; }

#define LDPAFLGPEBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C73A460)
#define LDPAFLGPEBL_EDJKPBJMNMK_OFFSET UNITYSDK_OFFSET(0x1C73A490)
#define LDPAFLGPEBL_FKHABBFPGFA_OFFSET UNITYSDK_OFFSET(0x1C73A690)
#define LDPAFLGPEBL_IKOCHGBIGPJ_OFFSET UNITYSDK_OFFSET(0x1C73A640)

inline static constexpr unsigned int LDPAFLGPEBL_TypeDefinitionIndex = 36545;

	class LDPAFLGPEBL : public ::KDCAPEBJDIO
	{
	public:
		::RPG::MVector2 NCMEPPHLGEG; // 0x38
		::System::Single NLIFGOAGCCG; // 0x40
		::System::Single DCBJLCHENHJ; // 0x44
		::System::Void _ctor(::IALIPBPEPOJ* a1, ::System::Object* a2, ::System::Single a3, ::System::Single a4, ::RPG::MVector2 a5)
		{
			return ((::System::Void(*)(::PVOID, ::IALIPBPEPOJ*, ::System::Object*, ::System::Single, ::System::Single, ::RPG::MVector2))((::PBYTE)hIl2Cpp + LDPAFLGPEBL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EDJKPBJMNMK(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LDPAFLGPEBL_EDJKPBJMNMK_OFFSET))(this, a1, a2);
		}

		::RPG::MVector2 IKOCHGBIGPJ()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPAFLGPEBL_IKOCHGBIGPJ_OFFSET))(this);
		}

		::System::Void FKHABBFPGFA(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + LDPAFLGPEBL_FKHABBFPGFA_OFFSET))(this, a1);
		}

	};
