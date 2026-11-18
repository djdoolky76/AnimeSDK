#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define PBDCKLJBBIF___C_ABELIMPMMAN_OFFSET UNITYSDK_OFFSET(0x172F1510)
#define PBDCKLJBBIF___C_ELDBNCKDGFB_OFFSET UNITYSDK_OFFSET(0x172F1500)
#define PBDCKLJBBIF___C_GGPLMMOHLOF_OFFSET UNITYSDK_OFFSET(0x172F1520)
#define PBDCKLJBBIF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x172F14B0)
#define PBDCKLJBBIF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x172F14F0)

inline static constexpr unsigned int PBDCKLJBBIF___c_TypeDefinitionIndex = 82911;

class PBDCKLJBBIF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PBDCKLJBBIF___c_TypeDefinitionIndex)->GetStaticField(0x4FDF0);
	}
	static ::System::Action** StaticGet___9__22_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PBDCKLJBBIF___c_TypeDefinitionIndex)->GetStaticField(0x4FDF8);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__15_8()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PBDCKLJBBIF___c_TypeDefinitionIndex)->GetStaticField(0x4FE00);
	}
	static ::System::Action** StaticGet___9__22_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PBDCKLJBBIF___c_TypeDefinitionIndex)->GetStaticField(0x4FE08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBDCKLJBBIF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDCKLJBBIF___C__CTOR_OFFSET))(this);
	}

	::System::Void ELDBNCKDGFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDCKLJBBIF___C_ELDBNCKDGFB_OFFSET))(this);
	}

	::System::Void ABELIMPMMAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDCKLJBBIF___C_ABELIMPMMAN_OFFSET))(this);
	}

	::System::Boolean GGPLMMOHLOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDCKLJBBIF___C_GGPLMMOHLOF_OFFSET))(this);
	}
};
