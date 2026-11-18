#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KGPHFADIIBM;
namespace System { template <typename T> class Comparison_1; }

#define ECNEPDHDBFG___C_OBJMIHBDBIH_OFFSET UNITYSDK_OFFSET(0x17224D00)
#define ECNEPDHDBFG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17224CB0)
#define ECNEPDHDBFG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17224CF0)

inline static constexpr unsigned int ECNEPDHDBFG___c_TypeDefinitionIndex = 88746;

class ECNEPDHDBFG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ECNEPDHDBFG___c_TypeDefinitionIndex)->GetStaticField(0x3D9F0);
	}
	static ::System::Comparison_1<::KGPHFADIIBM*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::KGPHFADIIBM*>**)Il2CppClass::FromTypeDefinitionIndex(ECNEPDHDBFG___c_TypeDefinitionIndex)->GetStaticField(0x3D9F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECNEPDHDBFG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEPDHDBFG___C__CTOR_OFFSET))(this);
	}

	::System::Int32 OBJMIHBDBIH(::KGPHFADIIBM* EJCBEJMGFAJ, ::KGPHFADIIBM* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::KGPHFADIIBM*, ::KGPHFADIIBM*))((::PBYTE)hIl2Cpp + ECNEPDHDBFG___C_OBJMIHBDBIH_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
