#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define KEODDJPPKMP___C_JDBLINECEAD_OFFSET UNITYSDK_OFFSET(0x1860D690)
#define KEODDJPPKMP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1860D640)
#define KEODDJPPKMP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1860D680)

inline static constexpr unsigned int KEODDJPPKMP___c_TypeDefinitionIndex = 75687;

class KEODDJPPKMP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KEODDJPPKMP___c_TypeDefinitionIndex)->GetStaticField(0x32940);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__5_19()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KEODDJPPKMP___c_TypeDefinitionIndex)->GetStaticField(0x32948);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEODDJPPKMP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEODDJPPKMP___C__CTOR_OFFSET))(this);
	}

	::System::String* JDBLINECEAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEODDJPPKMP___C_JDBLINECEAD_OFFSET))(this);
	}
};
