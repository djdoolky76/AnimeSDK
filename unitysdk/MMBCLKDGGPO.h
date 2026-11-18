#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigHollowChessboardEntityBehavior_BehaviorConfig_ConfigType.h"
#include "unitysdk/System/ValueType.h"

class ACPPDGJKDKC;
namespace System { class Object; }

#define MMBCLKDGGPO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6D4EB0)
#define MMBCLKDGGPO_EQUALS_OFFSET UNITYSDK_OFFSET(0x6D4E00)
#define MMBCLKDGGPO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6D4EC0)
#define MMBCLKDGGPO_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x6D4FA0)
#define MMBCLKDGGPO_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x12172FC0)
#define MMBCLKDGGPO_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x6D4F30)
#define MMBCLKDGGPO_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x12173280)
#define MMBCLKDGGPO_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x6D5000)
#define MMBCLKDGGPO__CCTOR_OFFSET UNITYSDK_OFFSET(0x12172FB0)

inline static constexpr unsigned int MMBCLKDGGPO_TypeDefinitionIndex = 38421;

struct alignas(8) MMBCLKDGGPO
{
	static ::MMBCLKDGGPO* StaticGet_EFMCBKOMKIH()
	{
		return (::MMBCLKDGGPO*)Il2CppClass::FromTypeDefinitionIndex(MMBCLKDGGPO_TypeDefinitionIndex)->GetStaticField(0x49650);
	}
	::MoleMole::ConfigHollowChessboardEntityBehavior_BehaviorConfig_ConfigType MGGEOFDFGBD; // 0x10
	::System::Byte _padding0[0x4];
	::ACPPDGJKDKC* IABKANPDFCA; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMBCLKDGGPO__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::MMBCLKDGGPO LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MMBCLKDGGPO))((::PBYTE)hIl2Cpp + MMBCLKDGGPO_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMBCLKDGGPO_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBCLKDGGPO_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::MMBCLKDGGPO FFKBEGIHIGG, ::MMBCLKDGGPO CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::MMBCLKDGGPO, ::MMBCLKDGGPO))((::PBYTE)hIl2Cpp + MMBCLKDGGPO_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMBCLKDGGPO_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBCLKDGGPO_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBCLKDGGPO_PGHAJOMNDDJ_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::MMBCLKDGGPO FFKBEGIHIGG, ::MMBCLKDGGPO CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::MMBCLKDGGPO, ::MMBCLKDGGPO))((::PBYTE)hIl2Cpp + MMBCLKDGGPO_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/
};
