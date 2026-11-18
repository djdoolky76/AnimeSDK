#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MDLKEKANMHL;
namespace System { template <typename T> class Action_1; }

#define IBJFJJKDFCO___C_CBAJGDMJLEB_OFFSET UNITYSDK_OFFSET(0x16F57C40)
#define IBJFJJKDFCO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F57BF0)
#define IBJFJJKDFCO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F57C30)

inline static constexpr unsigned int IBJFJJKDFCO___c_TypeDefinitionIndex = 79510;

class IBJFJJKDFCO___c : public ::System::Object
{
public:
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(IBJFJJKDFCO___c_TypeDefinitionIndex)->GetStaticField(0x37C70);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IBJFJJKDFCO___c_TypeDefinitionIndex)->GetStaticField(0x37C78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBJFJJKDFCO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJFJJKDFCO___C__CTOR_OFFSET))(this);
	}

	::System::Void CBAJGDMJLEB(::MDLKEKANMHL* CHBDNBOLLID)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + IBJFJJKDFCO___C_CBAJGDMJLEB_OFFSET))(this, CHBDNBOLLID);
	}
};
