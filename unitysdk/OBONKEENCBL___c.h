#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }

#define OBONKEENCBL___C_IOPJCJNGCEC_OFFSET UNITYSDK_OFFSET(0x15FBF630)
#define OBONKEENCBL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FBF5E0)
#define OBONKEENCBL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FBF620)

inline static constexpr unsigned int OBONKEENCBL___c_TypeDefinitionIndex = 53611;

class OBONKEENCBL___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__15_5()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(OBONKEENCBL___c_TypeDefinitionIndex)->GetStaticField(0x4EEF0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OBONKEENCBL___c_TypeDefinitionIndex)->GetStaticField(0x4EEF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBONKEENCBL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBONKEENCBL___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* IOPJCJNGCEC()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBONKEENCBL___C_IOPJCJNGCEC_OFFSET))(this);
	}
};
