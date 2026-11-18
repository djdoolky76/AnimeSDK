#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class APCKGCCCMJJ;
namespace System { class EventArgs; }
namespace System { template <typename T> class WeakReference_1; }

#define PGPLODFEMJP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x11B67D10)
#define PGPLODFEMJP_JHHBHLMJLHB_OFFSET UNITYSDK_OFFSET(0x11B68170)
#define PGPLODFEMJP__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B67C70)

inline static constexpr unsigned int PGPLODFEMJP_TypeDefinitionIndex = 74998;

class PGPLODFEMJP : public ::System::Object
{
public:
	static ::System::WeakReference_1<::APCKGCCCMJJ*>** StaticGet_CMFLPIONJHA()
	{
		return (::System::WeakReference_1<::APCKGCCCMJJ*>**)Il2CppClass::FromTypeDefinitionIndex(PGPLODFEMJP_TypeDefinitionIndex)->GetStaticField(0x510A0);
	}
	static ::System::Boolean* StaticGet_IHFCMKMMMPP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PGPLODFEMJP_TypeDefinitionIndex)->GetStaticField(0x13280);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGPLODFEMJP__CCTOR_OFFSET))();
	}

	static ::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGPLODFEMJP_BBOMJDBNHIC_OFFSET))();
	}

	static ::System::Void JHHBHLMJLHB(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::System::EventArgs*))((::PBYTE)hIl2Cpp + PGPLODFEMJP_JHHBHLMJLHB_OFFSET))(KOIBHLHLMFC);
	}
};
