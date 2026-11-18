#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PEPBHFPINGM___C_DKNGKLPDCEG_OFFSET UNITYSDK_OFFSET(0x136F6980)
#define PEPBHFPINGM___C_HIMGGHLGHFL_OFFSET UNITYSDK_OFFSET(0x136F6990)
#define PEPBHFPINGM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x136F6930)
#define PEPBHFPINGM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x136F6970)

inline static constexpr unsigned int PEPBHFPINGM___c_TypeDefinitionIndex = 42965;

class PEPBHFPINGM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PEPBHFPINGM___c_TypeDefinitionIndex)->GetStaticField(0x36290);
	}
	static ::System::Action** StaticGet___9__9_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PEPBHFPINGM___c_TypeDefinitionIndex)->GetStaticField(0x36298);
	}
	static ::System::Action** StaticGet___9__9_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PEPBHFPINGM___c_TypeDefinitionIndex)->GetStaticField(0x362A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEPBHFPINGM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPBHFPINGM___C__CTOR_OFFSET))(this);
	}

	::System::Void DKNGKLPDCEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPBHFPINGM___C_DKNGKLPDCEG_OFFSET))(this);
	}

	::System::Void HIMGGHLGHFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPBHFPINGM___C_HIMGGHLGHFL_OFFSET))(this);
	}
};
