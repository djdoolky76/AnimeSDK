#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BMCKIGMJJJA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define OGLOKNCDMAH___C_JHLCAJLMKOL_OFFSET UNITYSDK_OFFSET(0xFB8A4E0)
#define OGLOKNCDMAH___C_NFDBHDNHOCD_OFFSET UNITYSDK_OFFSET(0xFB8A4C0)
#define OGLOKNCDMAH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB8A470)
#define OGLOKNCDMAH___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFB8A4B0)

inline static constexpr unsigned int OGLOKNCDMAH___c_TypeDefinitionIndex = 47155;

class OGLOKNCDMAH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OGLOKNCDMAH___c_TypeDefinitionIndex)->GetStaticField(0x4DDB0);
	}
	static ::System::Func_2<::BMCKIGMJJJA*, ::System::Boolean>** StaticGet___9__26_0()
	{
		return (::System::Func_2<::BMCKIGMJJJA*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OGLOKNCDMAH___c_TypeDefinitionIndex)->GetStaticField(0x4DDB8);
	}
	static ::System::Func_2<::BMCKIGMJJJA*, ::System::Boolean>** StaticGet___9__26_1()
	{
		return (::System::Func_2<::BMCKIGMJJJA*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OGLOKNCDMAH___c_TypeDefinitionIndex)->GetStaticField(0x4DDC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGLOKNCDMAH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLOKNCDMAH___C__CTOR_OFFSET))(this);
	}

	::System::Boolean NFDBHDNHOCD(::BMCKIGMJJJA* GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::PVOID, ::BMCKIGMJJJA*))((::PBYTE)hIl2Cpp + OGLOKNCDMAH___C_NFDBHDNHOCD_OFFSET))(this, GEGOALONGBI);
	}

	::System::Boolean JHLCAJLMKOL(::BMCKIGMJJJA* GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::PVOID, ::BMCKIGMJJJA*))((::PBYTE)hIl2Cpp + OGLOKNCDMAH___C_JHLCAJLMKOL_OFFSET))(this, GEGOALONGBI);
	}
};
