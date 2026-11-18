#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NBNJNBOMFOJ;
namespace MoleMole::Config { class AttackCDUpdateData; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define PCMKFMGGNKJ___C_DAGKBNKBPCI_OFFSET UNITYSDK_OFFSET(0x1A7E4C20)
#define PCMKFMGGNKJ___C_LABABFANOIB_OFFSET UNITYSDK_OFFSET(0x1A7E4BF0)
#define PCMKFMGGNKJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7E4BA0)
#define PCMKFMGGNKJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E4BE0)

inline static constexpr unsigned int PCMKFMGGNKJ___c_TypeDefinitionIndex = 57684;

class PCMKFMGGNKJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PCMKFMGGNKJ___c_TypeDefinitionIndex)->GetStaticField(0x3CF00);
	}
	static ::System::Action_1<::NBNJNBOMFOJ*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::NBNJNBOMFOJ*>**)Il2CppClass::FromTypeDefinitionIndex(PCMKFMGGNKJ___c_TypeDefinitionIndex)->GetStaticField(0x3CF08);
	}
	static ::System::Comparison_1<::MoleMole::Config::AttackCDUpdateData*>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::MoleMole::Config::AttackCDUpdateData*>**)Il2CppClass::FromTypeDefinitionIndex(PCMKFMGGNKJ___c_TypeDefinitionIndex)->GetStaticField(0x3CF10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCMKFMGGNKJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMKFMGGNKJ___C__CTOR_OFFSET))(this);
	}

	::System::Int32 LABABFANOIB(::MoleMole::Config::AttackCDUpdateData* HAAEBCOBKFF, ::MoleMole::Config::AttackCDUpdateData* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::AttackCDUpdateData*, ::MoleMole::Config::AttackCDUpdateData*))((::PBYTE)hIl2Cpp + PCMKFMGGNKJ___C_LABABFANOIB_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Void DAGKBNKBPCI(::NBNJNBOMFOJ* GFPINKJPPBC)
	{
		return ((::System::Void(*)(::PVOID, ::NBNJNBOMFOJ*))((::PBYTE)hIl2Cpp + PCMKFMGGNKJ___C_DAGKBNKBPCI_OFFSET))(this, GFPINKJPPBC);
	}
};
