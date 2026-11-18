#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LPHENAAIPJP___C_KOFPMCOAFMI_OFFSET UNITYSDK_OFFSET(0x14D55250)
#define LPHENAAIPJP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D55200)
#define LPHENAAIPJP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D55240)

inline static constexpr unsigned int LPHENAAIPJP___c_TypeDefinitionIndex = 50094;

class LPHENAAIPJP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LPHENAAIPJP___c_TypeDefinitionIndex)->GetStaticField(0x38550);
	}
	static ::System::Func_2<::System::String*, ::System::Int32>** StaticGet___9__28_0()
	{
		return (::System::Func_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LPHENAAIPJP___c_TypeDefinitionIndex)->GetStaticField(0x38558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPHENAAIPJP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHENAAIPJP___C__CTOR_OFFSET))(this);
	}

	::System::Int32 KOFPMCOAFMI(::System::String* MKBCMHIAMHF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LPHENAAIPJP___C_KOFPMCOAFMI_OFFSET))(this, MKBCMHIAMHF);
	}
};
