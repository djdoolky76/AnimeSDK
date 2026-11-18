#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GBIODHNDHKA;
class MCLNHLPAAOH;
namespace System { class Action; }

#define GBIODHNDHKA_PJNOBBAMBCG_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x17463910)
#define GBIODHNDHKA_PJNOBBAMBCG__CTOR_OFFSET UNITYSDK_OFFSET(0x17463900)

inline static constexpr unsigned int GBIODHNDHKA_PJNOBBAMBCG_TypeDefinitionIndex = 17171;

class GBIODHNDHKA_PJNOBBAMBCG : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::GBIODHNDHKA* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIODHNDHKA_PJNOBBAMBCG__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::MCLNHLPAAOH* NNJOMEFILCC)
	{
		return ((::System::Void(*)(::PVOID, ::MCLNHLPAAOH*))((::PBYTE)hIl2Cpp + GBIODHNDHKA_PJNOBBAMBCG_FBNBBPGPFHK_OFFSET))(this, NNJOMEFILCC);
	}
};
