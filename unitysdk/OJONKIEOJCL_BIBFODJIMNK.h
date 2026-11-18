#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFMMAIKKACF;
class KIKBNICCMDG;
class OAEFGCLEHHO;
class OJONKIEOJCL;
namespace System { class Action; }

#define OJONKIEOJCL_BIBFODJIMNK_LHFFJILBCDG_OFFSET UNITYSDK_OFFSET(0xFB912C0)
#define OJONKIEOJCL_BIBFODJIMNK_NNPHHENPCKE_OFFSET UNITYSDK_OFFSET(0xFB913D0)
#define OJONKIEOJCL_BIBFODJIMNK__CTOR_OFFSET UNITYSDK_OFFSET(0xFB912B0)

inline static constexpr unsigned int OJONKIEOJCL_BIBFODJIMNK_TypeDefinitionIndex = 91167;

class OJONKIEOJCL_BIBFODJIMNK : public ::System::Object
{
public:
	::OJONKIEOJCL* KLHPEBKNIFB; // 0x10
	::KIKBNICCMDG* LAMKGIKIHCF; // 0x18
	::System::Action* EJGDHCIBCJH; // 0x20
	::System::Action* KMDHKNFMCAE; // 0x28
	::AFMMAIKKACF* AAOCANGHBDG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJONKIEOJCL_BIBFODJIMNK__CTOR_OFFSET))(this);
	}

	::System::Void LHFFJILBCDG(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OJONKIEOJCL_BIBFODJIMNK_LHFFJILBCDG_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void NNPHHENPCKE(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OJONKIEOJCL_BIBFODJIMNK_NNPHHENPCKE_OFFSET))(this, PIIPCLCCOIG);
	}
};
