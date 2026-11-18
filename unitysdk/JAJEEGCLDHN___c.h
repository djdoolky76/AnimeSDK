#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define JAJEEGCLDHN___C_DONDKEFJMGI_OFFSET UNITYSDK_OFFSET(0x1ACC7220)
#define JAJEEGCLDHN___C_FKPOANIFJKG_OFFSET UNITYSDK_OFFSET(0x1ACC7230)
#define JAJEEGCLDHN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACC71D0)
#define JAJEEGCLDHN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC7210)

inline static constexpr unsigned int JAJEEGCLDHN___c_TypeDefinitionIndex = 91963;

class JAJEEGCLDHN___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__3_8()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JAJEEGCLDHN___c_TypeDefinitionIndex)->GetStaticField(0x3B430);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__3_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JAJEEGCLDHN___c_TypeDefinitionIndex)->GetStaticField(0x3B438);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JAJEEGCLDHN___c_TypeDefinitionIndex)->GetStaticField(0x3B440);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAJEEGCLDHN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJEEGCLDHN___C__CTOR_OFFSET))(this);
	}

	::System::Boolean DONDKEFJMGI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJEEGCLDHN___C_DONDKEFJMGI_OFFSET))(this);
	}

	::System::String* FKPOANIFJKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJEEGCLDHN___C_FKPOANIFJKG_OFFSET))(this);
	}
};
