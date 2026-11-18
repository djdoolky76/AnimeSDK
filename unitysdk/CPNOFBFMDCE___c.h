#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardAtmosphere; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CPNOFBFMDCE___C_LNHPMGCCOGL_OFFSET UNITYSDK_OFFSET(0x1497D8E0)
#define CPNOFBFMDCE___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1497DA10)
#define CPNOFBFMDCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1497D890)
#define CPNOFBFMDCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1497D8D0)

inline static constexpr unsigned int CPNOFBFMDCE___c_TypeDefinitionIndex = 82202;

class CPNOFBFMDCE___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigHollowChessboardAtmosphere*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigHollowChessboardAtmosphere*>**)Il2CppClass::FromTypeDefinitionIndex(CPNOFBFMDCE___c_TypeDefinitionIndex)->GetStaticField(0x31300);
	}
	static ::System::Action_1<::MoleMole::Config::ConfigHollowChessboardAtmosphere*>** StaticGet___9__2_1()
	{
		return (::System::Action_1<::MoleMole::Config::ConfigHollowChessboardAtmosphere*>**)Il2CppClass::FromTypeDefinitionIndex(CPNOFBFMDCE___c_TypeDefinitionIndex)->GetStaticField(0x31308);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CPNOFBFMDCE___c_TypeDefinitionIndex)->GetStaticField(0x31310);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPNOFBFMDCE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNOFBFMDCE___C__CTOR_OFFSET))(this);
	}

	::System::Void LNHPMGCCOGL(::MoleMole::Config::ConfigHollowChessboardAtmosphere* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardAtmosphere*))((::PBYTE)hIl2Cpp + CPNOFBFMDCE___C_LNHPMGCCOGL_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::Config::ConfigHollowChessboardAtmosphere* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardAtmosphere*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNOFBFMDCE___C_LPCHADDECLC_OFFSET))(this);
	}
};
