#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define HAECINDMOPK___C_FINENJMCDPH_OFFSET UNITYSDK_OFFSET(0x110044F0)
#define HAECINDMOPK___C_JANKKBPGNLD_OFFSET UNITYSDK_OFFSET(0x11004520)
#define HAECINDMOPK___C_JPMGLFEBPCK_OFFSET UNITYSDK_OFFSET(0x11004500)
#define HAECINDMOPK___C_PFPMKGIHMNO_OFFSET UNITYSDK_OFFSET(0x11004510)
#define HAECINDMOPK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x110044A0)
#define HAECINDMOPK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x110044E0)

inline static constexpr unsigned int HAECINDMOPK___c_TypeDefinitionIndex = 44631;

class HAECINDMOPK___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__39_24()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HAECINDMOPK___c_TypeDefinitionIndex)->GetStaticField(0x50880);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__39_25()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HAECINDMOPK___c_TypeDefinitionIndex)->GetStaticField(0x50888);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__39_22()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HAECINDMOPK___c_TypeDefinitionIndex)->GetStaticField(0x50890);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HAECINDMOPK___c_TypeDefinitionIndex)->GetStaticField(0x50898);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__39_23()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HAECINDMOPK___c_TypeDefinitionIndex)->GetStaticField(0x508A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAECINDMOPK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAECINDMOPK___C__CTOR_OFFSET))(this);
	}

	::System::Boolean FINENJMCDPH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAECINDMOPK___C_FINENJMCDPH_OFFSET))(this);
	}

	::System::Boolean JPMGLFEBPCK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAECINDMOPK___C_JPMGLFEBPCK_OFFSET))(this);
	}

	::System::Boolean PFPMKGIHMNO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAECINDMOPK___C_PFPMKGIHMNO_OFFSET))(this);
	}

	::System::Boolean JANKKBPGNLD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAECINDMOPK___C_JANKKBPGNLD_OFFSET))(this);
	}
};
