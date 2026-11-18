#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define ANNJHKPDHKN___C_DONDKEFJMGI_OFFSET UNITYSDK_OFFSET(0x18218400)
#define ANNJHKPDHKN___C_EBPICOBKJGK_OFFSET UNITYSDK_OFFSET(0x18218410)
#define ANNJHKPDHKN___C_JJKFDOHEFHH_OFFSET UNITYSDK_OFFSET(0x18218420)
#define ANNJHKPDHKN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x182183B0)
#define ANNJHKPDHKN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x182183F0)

inline static constexpr unsigned int ANNJHKPDHKN___c_TypeDefinitionIndex = 76087;

class ANNJHKPDHKN___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__3_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ANNJHKPDHKN___c_TypeDefinitionIndex)->GetStaticField(0x511E0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__3_25()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ANNJHKPDHKN___c_TypeDefinitionIndex)->GetStaticField(0x511E8);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__3_27()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ANNJHKPDHKN___c_TypeDefinitionIndex)->GetStaticField(0x511F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ANNJHKPDHKN___c_TypeDefinitionIndex)->GetStaticField(0x511F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANNJHKPDHKN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNJHKPDHKN___C__CTOR_OFFSET))(this);
	}

	::System::Boolean DONDKEFJMGI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNJHKPDHKN___C_DONDKEFJMGI_OFFSET))(this);
	}

	::System::Boolean EBPICOBKJGK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNJHKPDHKN___C_EBPICOBKJGK_OFFSET))(this);
	}

	::System::String* JJKFDOHEFHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNJHKPDHKN___C_JJKFDOHEFHH_OFFSET))(this);
	}
};
