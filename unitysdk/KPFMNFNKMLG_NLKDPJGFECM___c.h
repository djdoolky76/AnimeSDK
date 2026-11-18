#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define KPFMNFNKMLG_NLKDPJGFECM___C_BGNJHMKJMJM_OFFSET UNITYSDK_OFFSET(0x15BA9DE0)
#define KPFMNFNKMLG_NLKDPJGFECM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BA9D90)
#define KPFMNFNKMLG_NLKDPJGFECM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA9DD0)

inline static constexpr unsigned int KPFMNFNKMLG_NLKDPJGFECM___c_TypeDefinitionIndex = 51341;

class KPFMNFNKMLG_NLKDPJGFECM___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KPFMNFNKMLG_NLKDPJGFECM___c_TypeDefinitionIndex)->GetStaticField(0x3E550);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KPFMNFNKMLG_NLKDPJGFECM___c_TypeDefinitionIndex)->GetStaticField(0x3E558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPFMNFNKMLG_NLKDPJGFECM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFMNFNKMLG_NLKDPJGFECM___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BGNJHMKJMJM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFMNFNKMLG_NLKDPJGFECM___C_BGNJHMKJMJM_OFFSET))(this);
	}
};
