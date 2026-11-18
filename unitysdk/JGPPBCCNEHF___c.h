#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define JGPPBCCNEHF___C_BFKKFHJBDDP_OFFSET UNITYSDK_OFFSET(0x17B243C0)
#define JGPPBCCNEHF___C_GNOGKHEJBHP_OFFSET UNITYSDK_OFFSET(0x17B243F0)
#define JGPPBCCNEHF___C_KHFKKCDHFJK_OFFSET UNITYSDK_OFFSET(0x17B243E0)
#define JGPPBCCNEHF___C_NMICDLPIOHI_OFFSET UNITYSDK_OFFSET(0x17B243D0)
#define JGPPBCCNEHF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B24370)
#define JGPPBCCNEHF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B243B0)

inline static constexpr unsigned int JGPPBCCNEHF___c_TypeDefinitionIndex = 87800;

class JGPPBCCNEHF___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__5_3()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(JGPPBCCNEHF___c_TypeDefinitionIndex)->GetStaticField(0x325B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JGPPBCCNEHF___c_TypeDefinitionIndex)->GetStaticField(0x325B8);
	}
	static ::System::Action** StaticGet___9__5_5()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(JGPPBCCNEHF___c_TypeDefinitionIndex)->GetStaticField(0x325C0);
	}
	static ::System::Action** StaticGet___9__5_4()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(JGPPBCCNEHF___c_TypeDefinitionIndex)->GetStaticField(0x325C8);
	}
	static ::System::Action** StaticGet___9__5_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(JGPPBCCNEHF___c_TypeDefinitionIndex)->GetStaticField(0x325D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGPPBCCNEHF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPPBCCNEHF___C__CTOR_OFFSET))(this);
	}

	::System::Void BFKKFHJBDDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPPBCCNEHF___C_BFKKFHJBDDP_OFFSET))(this);
	}

	::System::Void NMICDLPIOHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPPBCCNEHF___C_NMICDLPIOHI_OFFSET))(this);
	}

	::System::Void KHFKKCDHFJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPPBCCNEHF___C_KHFKKCDHFJK_OFFSET))(this);
	}

	::System::Void GNOGKHEJBHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPPBCCNEHF___C_GNOGKHEJBHP_OFFSET))(this);
	}
};
