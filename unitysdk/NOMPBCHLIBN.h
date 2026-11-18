#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFPDJIFPBHF.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }

#define NOMPBCHLIBN_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x590370)
#define NOMPBCHLIBN_EHAHKFDCNGC_OFFSET UNITYSDK_OFFSET(0xE0B3320)
#define NOMPBCHLIBN_FGOGAEJNAJB_OFFSET UNITYSDK_OFFSET(0x359150)
#define NOMPBCHLIBN_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x359320)
#define NOMPBCHLIBN_HPKJEIEKLPK_OFFSET UNITYSDK_OFFSET(0xE0B33F0)
#define NOMPBCHLIBN_NFDABBMMDHK_OFFSET UNITYSDK_OFFSET(0x590300)
#define NOMPBCHLIBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x5902F0)
#define NOMPBCHLIBN__CTOR_OFFSET UNITYSDK_OFFSET(0x5902B0)

inline static constexpr unsigned int NOMPBCHLIBN_TypeDefinitionIndex = 57690;

struct alignas(8) NOMPBCHLIBN
{
	::PFPDJIFPBHF _MBNIMBHGJMI_k__BackingField; // 0x10
	::System::Boolean HEKLOCIHKOP; // 0x14
	::System::Byte _padding0[0x3];
	::System::Nullable_1<::UnityEngine::Vector2> GNECIJPKDNM; // 0x18
	::System::Byte _padding1[0x8];
	::System::Object* BHHMJHDNGKN; // 0x28

	::System::Void _ctor(::PFPDJIFPBHF OBNIAHNMHPF, ::System::Nullable_1<::UnityEngine::Vector2> EMACGCNLNOB)
	{
		return ((::System::Void(*)(::PVOID, ::PFPDJIFPBHF, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + NOMPBCHLIBN__CTOR_OFFSET))(this, OBNIAHNMHPF, EMACGCNLNOB);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMPBCHLIBN_TOSTRING_OFFSET))(this);
	}

	::PFPDJIFPBHF HKELPCLHLEC()
	{
		return ((::PFPDJIFPBHF(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMPBCHLIBN_HKELPCLHLEC_OFFSET))(this);
	}

	/*
	static ::NOMPBCHLIBN EHAHKFDCNGC(::PFPDJIFPBHF OBNIAHNMHPF, ::System::Nullable_1<::UnityEngine::Vector2> EMACGCNLNOB)
	{
		return ((::NOMPBCHLIBN(*)(::PFPDJIFPBHF, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + NOMPBCHLIBN_EHAHKFDCNGC_OFFSET))(OBNIAHNMHPF, EMACGCNLNOB);
	}
	*/

	::System::Void FGOGAEJNAJB(::PFPDJIFPBHF EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::PFPDJIFPBHF))((::PBYTE)hIl2Cpp + NOMPBCHLIBN_FGOGAEJNAJB_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::NOMPBCHLIBN HPKJEIEKLPK(::PFPDJIFPBHF OBNIAHNMHPF, ::System::Nullable_1<::UnityEngine::Vector2> EMACGCNLNOB)
	{
		return ((::NOMPBCHLIBN(*)(::PFPDJIFPBHF, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + NOMPBCHLIBN_HPKJEIEKLPK_OFFSET))(OBNIAHNMHPF, EMACGCNLNOB);
	}
	*/

	/*
	::NOMPBCHLIBN NFDABBMMDHK(::System::Object* CBKAFNPAEHB)
	{
		return ((::NOMPBCHLIBN(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOMPBCHLIBN_NFDABBMMDHK_OFFSET))(this, CBKAFNPAEHB);
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMPBCHLIBN_DPIHOJBBGLA_OFFSET))(this);
	}
};
