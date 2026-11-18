#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define HMGKCAPDNAL___C_GCODKLLBPEG_OFFSET UNITYSDK_OFFSET(0x12E8A0C0)
#define HMGKCAPDNAL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E8A070)
#define HMGKCAPDNAL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12E8A0B0)

inline static constexpr unsigned int HMGKCAPDNAL___c_TypeDefinitionIndex = 73547;

class HMGKCAPDNAL___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__15_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HMGKCAPDNAL___c_TypeDefinitionIndex)->GetStaticField(0x40C10);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HMGKCAPDNAL___c_TypeDefinitionIndex)->GetStaticField(0x40C18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMGKCAPDNAL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGKCAPDNAL___C__CTOR_OFFSET))(this);
	}

	::System::String* GCODKLLBPEG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGKCAPDNAL___C_GCODKLLBPEG_OFFSET))(this);
	}
};
