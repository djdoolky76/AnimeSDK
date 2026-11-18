#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JCLMLILFGPJ;
namespace System { template <typename T> class Action_1; }

#define APJFPFFGHJK___C_BLLEPNNFLAP_OFFSET UNITYSDK_OFFSET(0x12673D40)
#define APJFPFFGHJK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12673CF0)
#define APJFPFFGHJK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12673D30)

inline static constexpr unsigned int APJFPFFGHJK___c_TypeDefinitionIndex = 40988;

class APJFPFFGHJK___c : public ::System::Object
{
public:
	static ::System::Action_1<::JCLMLILFGPJ*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::JCLMLILFGPJ*>**)Il2CppClass::FromTypeDefinitionIndex(APJFPFFGHJK___c_TypeDefinitionIndex)->GetStaticField(0x30B20);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(APJFPFFGHJK___c_TypeDefinitionIndex)->GetStaticField(0x30B28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APJFPFFGHJK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APJFPFFGHJK___C__CTOR_OFFSET))(this);
	}

	::System::Void BLLEPNNFLAP(::JCLMLILFGPJ* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::JCLMLILFGPJ*))((::PBYTE)hIl2Cpp + APJFPFFGHJK___C_BLLEPNNFLAP_OFFSET))(this, GBELIHABEDH);
	}
};
