#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

template <typename T> class AE87E26128277374;

#define ED209F22C740095D_B0C41A8A54CFF47B_OFFSET UNITYSDK_OFFSET(0x209B7E0)
#define ED209F22C740095D_E836DA5D3D1EB240_OFFSET UNITYSDK_OFFSET(0x209B990)
#define ED209F22C740095D__CCTOR_OFFSET UNITYSDK_OFFSET(0x209BA30)
#define ED209F22C740095D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ED209F22C740095D_TypeDefinitionIndex = 8637;

class ED209F22C740095D : public ::System::Object
{
public:
	static ::AE87E26128277374<::System::Char>** StaticGet_A6E547C4E8E4C9F3()
	{
		return (::AE87E26128277374<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(ED209F22C740095D_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ED209F22C740095D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED209F22C740095D__CTOR_OFFSET))(this);
	}

	static ::System::Void E836DA5D3D1EB240()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ED209F22C740095D_E836DA5D3D1EB240_OFFSET))();
	}

	static ::System::Void B0C41A8A54CFF47B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ED209F22C740095D_B0C41A8A54CFF47B_OFFSET))();
	}
};
