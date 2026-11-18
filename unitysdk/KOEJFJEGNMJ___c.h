#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KOEJFJEGNMJ___C_JIJFAFIOOCJ_OFFSET UNITYSDK_OFFSET(0x1791A510)
#define KOEJFJEGNMJ___C_JJHPLBBMFNI_OFFSET UNITYSDK_OFFSET(0x1791A520)
#define KOEJFJEGNMJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1791A4C0)
#define KOEJFJEGNMJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1791A500)

inline static constexpr unsigned int KOEJFJEGNMJ___c_TypeDefinitionIndex = 44232;

class KOEJFJEGNMJ___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::String*>** StaticGet___9__81_0()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KOEJFJEGNMJ___c_TypeDefinitionIndex)->GetStaticField(0x48420);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KOEJFJEGNMJ___c_TypeDefinitionIndex)->GetStaticField(0x48428);
	}
	static ::System::Action_1<::System::String*>** StaticGet___9__81_1()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KOEJFJEGNMJ___c_TypeDefinitionIndex)->GetStaticField(0x48430);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOEJFJEGNMJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEJFJEGNMJ___C__CTOR_OFFSET))(this);
	}

	::System::Void JIJFAFIOOCJ(::System::String* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KOEJFJEGNMJ___C_JIJFAFIOOCJ_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void JJHPLBBMFNI(::System::String* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KOEJFJEGNMJ___C_JJHPLBBMFNI_OFFSET))(this, DJCNCELJPOM);
	}
};
