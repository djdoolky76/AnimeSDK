#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define FLOBLBODJPD___C_DBLFIDFGMJJ_OFFSET UNITYSDK_OFFSET(0x191FD420)
#define FLOBLBODJPD___C_JDLGIIHDFKA_OFFSET UNITYSDK_OFFSET(0x191FD460)
#define FLOBLBODJPD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x191FD3D0)
#define FLOBLBODJPD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x191FD410)

inline static constexpr unsigned int FLOBLBODJPD___c_TypeDefinitionIndex = 39314;

class FLOBLBODJPD___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__0_9()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FLOBLBODJPD___c_TypeDefinitionIndex)->GetStaticField(0x4F470);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FLOBLBODJPD___c_TypeDefinitionIndex)->GetStaticField(0x4F478);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__0_4()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FLOBLBODJPD___c_TypeDefinitionIndex)->GetStaticField(0x4F480);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLOBLBODJPD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOBLBODJPD___C__CTOR_OFFSET))(this);
	}

	::System::String* DBLFIDFGMJJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOBLBODJPD___C_DBLFIDFGMJJ_OFFSET))(this);
	}

	::System::String* JDLGIIHDFKA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOBLBODJPD___C_JDLGIIHDFKA_OFFSET))(this);
	}
};
