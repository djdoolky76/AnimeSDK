#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CAFPCPPDJOJ___C_DLBOPIJMFJN_OFFSET UNITYSDK_OFFSET(0x14522CE0)
#define CAFPCPPDJOJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14522C90)
#define CAFPCPPDJOJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14522CD0)

inline static constexpr unsigned int CAFPCPPDJOJ___c_TypeDefinitionIndex = 53822;

class CAFPCPPDJOJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CAFPCPPDJOJ___c_TypeDefinitionIndex)->GetStaticField(0x45CF0);
	}
	static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__80_0()
	{
		return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CAFPCPPDJOJ___c_TypeDefinitionIndex)->GetStaticField(0x45CF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAFPCPPDJOJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFPCPPDJOJ___C__CTOR_OFFSET))(this);
	}

	::System::String* DLBOPIJMFJN(::System::String* EMIKCAHJLGB)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CAFPCPPDJOJ___C_DLBOPIJMFJN_OFFSET))(this, EMIKCAHJLGB);
	}
};
