#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKJDHNKLJPB;

#define CKJDHNKLJPB___C_KAMODDMEPFH_OFFSET UNITYSDK_OFFSET(0x1FCD7990)
#define CKJDHNKLJPB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCD7940)
#define CKJDHNKLJPB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCD7980)

inline static constexpr unsigned int CKJDHNKLJPB___c_TypeDefinitionIndex = 18108;

class CKJDHNKLJPB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CKJDHNKLJPB___c_TypeDefinitionIndex)->GetStaticField(0x7E60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKJDHNKLJPB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJDHNKLJPB___C__CTOR_OFFSET))(this);
	}

	::CKJDHNKLJPB* KAMODDMEPFH()
	{
		return ((::CKJDHNKLJPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJDHNKLJPB___C_KAMODDMEPFH_OFFSET))(this);
	}
};
