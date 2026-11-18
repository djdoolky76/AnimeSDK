#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KHGICIAFCFM;
namespace System { template <typename T> class Action_1; }

#define HJDIFPECOIA___C_IJEIOENOFOI_OFFSET UNITYSDK_OFFSET(0x17A51700)
#define HJDIFPECOIA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A516B0)
#define HJDIFPECOIA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A516F0)

inline static constexpr unsigned int HJDIFPECOIA___c_TypeDefinitionIndex = 49070;

class HJDIFPECOIA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HJDIFPECOIA___c_TypeDefinitionIndex)->GetStaticField(0x4BAD0);
	}
	static ::System::Action_1<::KHGICIAFCFM*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::KHGICIAFCFM*>**)Il2CppClass::FromTypeDefinitionIndex(HJDIFPECOIA___c_TypeDefinitionIndex)->GetStaticField(0x4BAD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJDIFPECOIA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDIFPECOIA___C__CTOR_OFFSET))(this);
	}

	::System::Void IJEIOENOFOI(::KHGICIAFCFM* FBANPFGOCJA)
	{
		return ((::System::Void(*)(::PVOID, ::KHGICIAFCFM*))((::PBYTE)hIl2Cpp + HJDIFPECOIA___C_IJEIOENOFOI_OFFSET))(this, FBANPFGOCJA);
	}
};
