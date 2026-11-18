#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define DIOPCBDPBDH___C_AOOBHACJAJL_OFFSET UNITYSDK_OFFSET(0x19414AA0)
#define DIOPCBDPBDH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19414A50)
#define DIOPCBDPBDH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19414A90)

inline static constexpr unsigned int DIOPCBDPBDH___c_TypeDefinitionIndex = 44130;

class DIOPCBDPBDH___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DIOPCBDPBDH___c_TypeDefinitionIndex)->GetStaticField(0x4F370);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DIOPCBDPBDH___c_TypeDefinitionIndex)->GetStaticField(0x4F378);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIOPCBDPBDH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOPCBDPBDH___C__CTOR_OFFSET))(this);
	}

	::System::Boolean AOOBHACJAJL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOPCBDPBDH___C_AOOBHACJAJL_OFFSET))(this);
	}
};
