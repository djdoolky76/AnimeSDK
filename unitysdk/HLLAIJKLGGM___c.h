#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define HLLAIJKLGGM___C_CHDLFPCLLOL_OFFSET UNITYSDK_OFFSET(0x140BFD90)
#define HLLAIJKLGGM___C_CJCLKKABKPO_OFFSET UNITYSDK_OFFSET(0x140BFEA0)
#define HLLAIJKLGGM___C_EMMADLDDBPL_OFFSET UNITYSDK_OFFSET(0x140BFBB0)
#define HLLAIJKLGGM___C_GBEMJIHIDKD_OFFSET UNITYSDK_OFFSET(0x140BFF10)
#define HLLAIJKLGGM___C_HFIDHECDLGC_OFFSET UNITYSDK_OFFSET(0x140BFA50)
#define HLLAIJKLGGM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x140BFA00)
#define HLLAIJKLGGM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x140BFA40)

inline static constexpr unsigned int HLLAIJKLGGM___c_TypeDefinitionIndex = 43958;

class HLLAIJKLGGM___c : public ::System::Object
{
public:
	static ::System::Action_1<::OAEFGCLEHHO*>** StaticGet___9__7_3()
	{
		return (::System::Action_1<::OAEFGCLEHHO*>**)Il2CppClass::FromTypeDefinitionIndex(HLLAIJKLGGM___c_TypeDefinitionIndex)->GetStaticField(0x4D0B0);
	}
	static ::System::Action** StaticGet___9__7_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(HLLAIJKLGGM___c_TypeDefinitionIndex)->GetStaticField(0x4D0B8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HLLAIJKLGGM___c_TypeDefinitionIndex)->GetStaticField(0x4D0C0);
	}
	static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__7_10()
	{
		return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HLLAIJKLGGM___c_TypeDefinitionIndex)->GetStaticField(0x4D0C8);
	}
	static ::System::Action** StaticGet___9__7_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(HLLAIJKLGGM___c_TypeDefinitionIndex)->GetStaticField(0x4D0D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLLAIJKLGGM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLAIJKLGGM___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIWindowController* HFIDHECDLGC(::MIKOMFIBMBN JOLDOMEIKEF, ::MoleMole::UIControllerContextBase* PJCLCLCNDCG)
	{
		return ((::MoleMole::UIWindowController*(*)(::PVOID, ::MIKOMFIBMBN, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + HLLAIJKLGGM___C_HFIDHECDLGC_OFFSET))(this, JOLDOMEIKEF, PJCLCLCNDCG);
	}

	::System::Void EMMADLDDBPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLAIJKLGGM___C_EMMADLDDBPL_OFFSET))(this);
	}

	::System::Void CHDLFPCLLOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLAIJKLGGM___C_CHDLFPCLLOL_OFFSET))(this);
	}

	::System::Void CJCLKKABKPO(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLLAIJKLGGM___C_CJCLKKABKPO_OFFSET))(this, BLLNHDIDKPA);
	}

	::System::String* GBEMJIHIDKD(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HLLAIJKLGGM___C_GBEMJIHIDKD_OFFSET))(this, HAAEBCOBKFF);
	}
};
