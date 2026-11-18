#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIBBHFPDBFL.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/IMBMPPCPHOD.h"

class GDGKMEGHCJM;
class OODDDHHGKIJ;

#define KJMDOJINLMJ_LAEPOIJHOAA_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1A2CD470)
#define KJMDOJINLMJ_LAEPOIJHOAA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2CD400)
#define KJMDOJINLMJ_LAEPOIJHOAA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A2CD330)
#define KJMDOJINLMJ_LAEPOIJHOAA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CD130)

inline static constexpr unsigned int KJMDOJINLMJ_LAEPOIJHOAA_TypeDefinitionIndex = 38932;

class KJMDOJINLMJ_LAEPOIJHOAA : public ::System::Object
{
public:
	static ::MoleMole::HollowChessboard::HollowCell* StaticGet_MKBMICIIDBO()
	{
		return (::MoleMole::HollowChessboard::HollowCell*)Il2CppClass::FromTypeDefinitionIndex(KJMDOJINLMJ_LAEPOIJHOAA_TypeDefinitionIndex)->GetStaticField(0x11460);
	}
	::OODDDHHGKIJ* BIGPJNLJIIO; // 0x10
	::GDGKMEGHCJM* PACOAMGOBNP; // 0x18
	::UnityEngine::Quaternion HHJOPACPENF; // 0x20
	::System::Single HPAOBGBPIOB; // 0x30
	::UnityEngine::Vector3 NAAHNCHFBAM; // 0x34
	::System::Single FKHEAGHKOIA; // 0x40
	::System::Single BMLBFEGFHME; // 0x44
	::UnityEngine::Vector3 DBOLHIBHHGK; // 0x48
	::System::Single BECMJEKALJK; // 0x54
	::LIBBHFPDBFL DMPFKEGAOEF; // 0x58
	::System::Single FBCJOCANBJD; // 0x6C
	::System::Single HBJEECJPDKN; // 0x70

	::System::Void _ctor(::System::Single JPFEFCJCDGG, ::System::Single KLJJAPNHPDC, ::UnityEngine::Vector3 BBKAEJEHJNL, ::UnityEngine::Quaternion ODBHNPKPKOC, ::System::Single GAAGDFKDHIK, ::System::Single NLBJLICOCHO, ::System::Single GKAFEHPOFBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KJMDOJINLMJ_LAEPOIJHOAA__CTOR_OFFSET))(this, JPFEFCJCDGG, KLJJAPNHPDC, BBKAEJEHJNL, ODBHNPKPKOC, GAAGDFKDHIK, NLBJLICOCHO, GKAFEHPOFBL);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMDOJINLMJ_LAEPOIJHOAA__CTOR_1_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJMDOJINLMJ_LAEPOIJHOAA__CCTOR_OFFSET))();
	}

	::System::Void PLPONJAKNEB(::IMBMPPCPHOD& FFDHBBHAANK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::IMBMPPCPHOD&, ::System::Single))((::PBYTE)hIl2Cpp + KJMDOJINLMJ_LAEPOIJHOAA_PLPONJAKNEB_OFFSET))(this, FFDHBBHAANK, PMNLNNGEIFM);
	}
};
