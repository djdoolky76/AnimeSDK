#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFPJBGCDOMK_EIGPPLLMLJA.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define PEMDFINAHEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6A3360)
#define PEMDFINAHEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x6A3260)
#define PEMDFINAHEA_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x6A33A0)

inline static constexpr unsigned int PEMDFINAHEA_TypeDefinitionIndex = 77702;

struct alignas(8) PEMDFINAHEA
{
	::UnityEngine::Vector3 PIBFPBOEBIN; // 0x10
	::UnityEngine::Vector3 EFKNDPBOGME; // 0x1C
	::UnityEngine::Vector3 FDCAFMGFPHD; // 0x28
	::System::Byte _padding0[0x4];
	::OFPJBGCDOMK_EIGPPLLMLJA LBHAPNMBMIJ; // 0x38
	::UnityEngine::RectTransform* JGDKPOLOAMF; // 0x70
	::System::Boolean PPCCLMOPDDH; // 0x78
	::System::Byte _padding1[0x3];
	::UnityEngine::Vector3 LBBPLGNKCOK; // 0x7C
	::UnityEngine::Vector3 KIMBGMJNAHC; // 0x88
	::System::Int32 KOPBOAHBOIM; // 0x94
	::System::Int32 DOJJPMBPHEA; // 0x98
	::System::Int32 IEDMKJLCNJL; // 0x9C
	::System::Int32 NCFOLLGCCIP; // 0xA0
	::System::Int32 OAHEADEHGAN; // 0xA4
	::System::Boolean IKBDMEOPOLO; // 0xA8
	::System::Byte _padding2[0x3];
	::System::Int32 AINFLEFDINO; // 0xAC
	::System::Boolean JEHJHPBHAMA; // 0xB0
	::System::Byte _padding3[0x3];
	::System::Single MIDBDFDLHAO; // 0xB4
	::System::Single DDEGHCKDPNE; // 0xB8
	::System::Single HEPEKDKNOHG; // 0xBC
	::System::Single ILOMBEBBBOP; // 0xC0
	::System::Single FCDGBKBNIHO; // 0xC4
	::System::Single KLMJCCDIMAH; // 0xC8
	::System::Single KIMOEBLNPDH; // 0xCC
	::System::Boolean MJIMNNFEKNB; // 0xD0
	::System::Boolean BBKPIJFOMFO; // 0xD1

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEMDFINAHEA_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	/*
	::System::Boolean Equals_1(::PEMDFINAHEA LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PEMDFINAHEA))((::PBYTE)hIl2Cpp + PEMDFINAHEA_EQUALS_1_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEMDFINAHEA_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
