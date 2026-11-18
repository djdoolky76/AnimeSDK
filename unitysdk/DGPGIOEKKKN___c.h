#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define DGPGIOEKKKN___C_AKDABPKIEFC_OFFSET UNITYSDK_OFFSET(0x13296A30)
#define DGPGIOEKKKN___C_LCMFCIHFAKN_OFFSET UNITYSDK_OFFSET(0x132969E0)
#define DGPGIOEKKKN___C_LDONAONHAHE_OFFSET UNITYSDK_OFFSET(0x13296A20)
#define DGPGIOEKKKN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13296990)
#define DGPGIOEKKKN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x132969D0)

inline static constexpr unsigned int DGPGIOEKKKN___c_TypeDefinitionIndex = 56995;

class DGPGIOEKKKN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DGPGIOEKKKN___c_TypeDefinitionIndex)->GetStaticField(0x3A900);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__13_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DGPGIOEKKKN___c_TypeDefinitionIndex)->GetStaticField(0x3A908);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__13_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DGPGIOEKKKN___c_TypeDefinitionIndex)->GetStaticField(0x3A910);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__13_5()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DGPGIOEKKKN___c_TypeDefinitionIndex)->GetStaticField(0x3A918);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGPGIOEKKKN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPGIOEKKKN___C__CTOR_OFFSET))(this);
	}

	::System::String* LCMFCIHFAKN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPGIOEKKKN___C_LCMFCIHFAKN_OFFSET))(this);
	}

	::System::Boolean LDONAONHAHE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPGIOEKKKN___C_LDONAONHAHE_OFFSET))(this);
	}

	::System::String* AKDABPKIEFC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPGIOEKKKN___C_AKDABPKIEFC_OFFSET))(this);
	}
};
