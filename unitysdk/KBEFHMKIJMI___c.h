#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define KBEFHMKIJMI___C_MGCANENIJNC_OFFSET UNITYSDK_OFFSET(0x1A4966B0)
#define KBEFHMKIJMI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A496660)
#define KBEFHMKIJMI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4966A0)

inline static constexpr unsigned int KBEFHMKIJMI___c_TypeDefinitionIndex = 92504;

class KBEFHMKIJMI___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__100_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KBEFHMKIJMI___c_TypeDefinitionIndex)->GetStaticField(0x444E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KBEFHMKIJMI___c_TypeDefinitionIndex)->GetStaticField(0x444E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBEFHMKIJMI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEFHMKIJMI___C__CTOR_OFFSET))(this);
	}

	::System::Int32 MGCANENIJNC(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KBEFHMKIJMI___C_MGCANENIJNC_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
