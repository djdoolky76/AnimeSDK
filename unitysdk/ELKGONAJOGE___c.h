#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define ELKGONAJOGE___C_PBBFANOEBMI_OFFSET UNITYSDK_OFFSET(0x158BDC90)
#define ELKGONAJOGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x158BDC40)
#define ELKGONAJOGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x158BDC80)

inline static constexpr unsigned int ELKGONAJOGE___c_TypeDefinitionIndex = 85916;

class ELKGONAJOGE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ELKGONAJOGE___c_TypeDefinitionIndex)->GetStaticField(0x31810);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__7_4()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ELKGONAJOGE___c_TypeDefinitionIndex)->GetStaticField(0x31818);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELKGONAJOGE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKGONAJOGE___C__CTOR_OFFSET))(this);
	}

	::System::String* PBBFANOEBMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKGONAJOGE___C_PBBFANOEBMI_OFFSET))(this);
	}
};
