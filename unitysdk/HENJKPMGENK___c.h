#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define HENJKPMGENK___C_AIBJBNIPHOE_OFFSET UNITYSDK_OFFSET(0x16F2E530)
#define HENJKPMGENK___C_IBHAAOHKEEM_OFFSET UNITYSDK_OFFSET(0x16F2E590)
#define HENJKPMGENK___C_PGMGJBDECPC_OFFSET UNITYSDK_OFFSET(0x16F2E5B0)
#define HENJKPMGENK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F2E4E0)
#define HENJKPMGENK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2E520)

inline static constexpr unsigned int HENJKPMGENK___c_TypeDefinitionIndex = 54976;

class HENJKPMGENK___c : public ::System::Object
{
public:
	static ::System::Func_2<::ENGKPGFGGLM*, ::System::Boolean>** StaticGet___9__61_0()
	{
		return (::System::Func_2<::ENGKPGFGGLM*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HENJKPMGENK___c_TypeDefinitionIndex)->GetStaticField(0x3DE80);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__25_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HENJKPMGENK___c_TypeDefinitionIndex)->GetStaticField(0x3DE88);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HENJKPMGENK___c_TypeDefinitionIndex)->GetStaticField(0x3DE90);
	}
	static ::System::Action** StaticGet___9__38_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(HENJKPMGENK___c_TypeDefinitionIndex)->GetStaticField(0x3DE98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HENJKPMGENK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENJKPMGENK___C__CTOR_OFFSET))(this);
	}

	::System::Void AIBJBNIPHOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENJKPMGENK___C_AIBJBNIPHOE_OFFSET))(this);
	}

	::System::Int32 IBHAAOHKEEM(::System::Int32 DPGFPHIMDEL, ::System::Int32 DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HENJKPMGENK___C_IBHAAOHKEEM_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}

	::System::Boolean PGMGJBDECPC(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HENJKPMGENK___C_PGMGJBDECPC_OFFSET))(this, FFNKDGGHBPP);
	}
};
