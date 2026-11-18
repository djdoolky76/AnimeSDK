#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define BEOLMICDNJB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7CD780)
#define BEOLMICDNJB_EQUALS_OFFSET UNITYSDK_OFFSET(0x7CD6C0)
#define BEOLMICDNJB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7CD790)
#define BEOLMICDNJB_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7CD810)
#define BEOLMICDNJB_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1854E2F0)
#define BEOLMICDNJB_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7CD7A0)
#define BEOLMICDNJB_LOGMNFFOOCB_OFFSET UNITYSDK_OFFSET(0x1854E2D0)
#define BEOLMICDNJB_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1854E410)
#define BEOLMICDNJB__CTOR_OFFSET UNITYSDK_OFFSET(0x4971C0)

inline static constexpr unsigned int BEOLMICDNJB_TypeDefinitionIndex = 38647;

struct alignas(8) BEOLMICDNJB
{
	::MoleMole::Config::InlevelCameraState EGKEHBGEGDK; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* ALFMPBDJLJJ; // 0x18
	::System::String* KIHGNGKBADE; // 0x20

	::System::Void _ctor(::MoleMole::Config::InlevelCameraState IIHGNBNLLNG, ::System::String* LFPLMLIKFFC, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InlevelCameraState, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BEOLMICDNJB__CTOR_OFFSET))(this, IIHGNBNLLNG, LFPLMLIKFFC, AELLPLBJELA);
	}

	/*
	::System::Boolean Equals(::BEOLMICDNJB LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::BEOLMICDNJB))((::PBYTE)hIl2Cpp + BEOLMICDNJB_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEOLMICDNJB_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOLMICDNJB_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::BEOLMICDNJB LOGMNFFOOCB()
	{
		return ((::BEOLMICDNJB(*)())((::PBYTE)hIl2Cpp + BEOLMICDNJB_LOGMNFFOOCB_OFFSET))();
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::BEOLMICDNJB EJCBEJMGFAJ, ::BEOLMICDNJB EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::BEOLMICDNJB, ::BEOLMICDNJB))((::PBYTE)hIl2Cpp + BEOLMICDNJB_INCFIJKMIGG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::BEOLMICDNJB EJCBEJMGFAJ, ::BEOLMICDNJB EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::BEOLMICDNJB, ::BEOLMICDNJB))((::PBYTE)hIl2Cpp + BEOLMICDNJB_NOGJIJMACNO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEOLMICDNJB_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOLMICDNJB_HLPHPBAODIF_OFFSET))(this);
	}
};
