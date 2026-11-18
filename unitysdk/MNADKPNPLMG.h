#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDOANFNDFEM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ILNNGINIHDO.h"

class DLIIKLOIMCJ;

#define MNADKPNPLMG_DDHMJFLKCIM_OFFSET UNITYSDK_OFFSET(0x1DCF00B0)
#define MNADKPNPLMG_FKKPNCFKLIL_OFFSET UNITYSDK_OFFSET(0x1DCEFE90)
#define MNADKPNPLMG_PMHEELEHMEH_1_OFFSET UNITYSDK_OFFSET(0x1DCF0010)
#define MNADKPNPLMG_PMHEELEHMEH_OFFSET UNITYSDK_OFFSET(0x1DCEFF30)

inline static constexpr unsigned int MNADKPNPLMG_TypeDefinitionIndex = 95138;

class MNADKPNPLMG : public ::System::Object
{
public:
	static ::Il2CppArray<::BDOANFNDFEM>** StaticGet_FAJOOEOGOIJ()
	{
		return (::Il2CppArray<::BDOANFNDFEM>**)Il2CppClass::FromTypeDefinitionIndex(MNADKPNPLMG_TypeDefinitionIndex)->GetStaticField(0x529C0);
	}

	static ::System::Void FKKPNCFKLIL()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNADKPNPLMG_FKKPNCFKLIL_OFFSET))();
	}

	static ::System::Void PMHEELEHMEH(::System::Int32 ABHBKFJKINO, ::System::Boolean DGMGMEICCGE, ::System::Boolean KBHFBLJPFJH, ::System::Boolean NHEHGJDAEIO)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MNADKPNPLMG_PMHEELEHMEH_OFFSET))(ABHBKFJKINO, DGMGMEICCGE, KBHFBLJPFJH, NHEHGJDAEIO);
	}

	static ::System::Void PMHEELEHMEH_1(::Il2CppArray<::BDOANFNDFEM>* DGDCPNBAKMF, ::System::Int32 ABHBKFJKINO, ::System::Boolean DGMGMEICCGE, ::System::Boolean KBHFBLJPFJH, ::System::Boolean NHEHGJDAEIO)
	{
		return ((::System::Void(*)(::Il2CppArray<::BDOANFNDFEM>*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MNADKPNPLMG_PMHEELEHMEH_1_OFFSET))(DGDCPNBAKMF, ABHBKFJKINO, DGMGMEICCGE, KBHFBLJPFJH, NHEHGJDAEIO);
	}

	static ::ILNNGINIHDO DDHMJFLKCIM(::DLIIKLOIMCJ* DDKICDNCJCF)
	{
		return ((::ILNNGINIHDO(*)(::DLIIKLOIMCJ*))((::PBYTE)hIl2Cpp + MNADKPNPLMG_DDHMJFLKCIM_OFFSET))(DDKICDNCJCF);
	}
};
