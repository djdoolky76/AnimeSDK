#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class ENGKPGFGGLM;
class IFLPGOKHDJI;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define HLHMPCIPHJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x724D70)
#define HLHMPCIPHJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x724CA0)
#define HLHMPCIPHJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x724D80)
#define HLHMPCIPHJK_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x724E50)
#define HLHMPCIPHJK_IGJIGJCLNKJ_OFFSET UNITYSDK_OFFSET(0x724EC0)
#define HLHMPCIPHJK_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x140BF780)
#define HLHMPCIPHJK_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x724DE0)
#define HLHMPCIPHJK_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x140BF6D0)

inline static constexpr unsigned int HLHMPCIPHJK_TypeDefinitionIndex = 82686;

struct alignas(8) HLHMPCIPHJK
{
	::System::UInt16 NADEONENDKJ; // 0x10
	::System::Byte _padding0[0x6];
	::IFLPGOKHDJI* PFIMLFPCINP; // 0x18
	::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>* GAFMFPEDHDC; // 0x20

	/*
	::System::Boolean Equals(::HLHMPCIPHJK LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HLHMPCIPHJK))((::PBYTE)hIl2Cpp + HLHMPCIPHJK_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLHMPCIPHJK_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHMPCIPHJK_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::HLHMPCIPHJK KILPCOMOCMD, ::HLHMPCIPHJK BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::HLHMPCIPHJK, ::HLHMPCIPHJK))((::PBYTE)hIl2Cpp + HLHMPCIPHJK_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::HLHMPCIPHJK KILPCOMOCMD, ::HLHMPCIPHJK BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::HLHMPCIPHJK, ::HLHMPCIPHJK))((::PBYTE)hIl2Cpp + HLHMPCIPHJK_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLHMPCIPHJK_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHMPCIPHJK_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Void IGJIGJCLNKJ(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HLHMPCIPHJK_IGJIGJCLNKJ_OFFSET))(this, FFNKDGGHBPP);
	}
};
