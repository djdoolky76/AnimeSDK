#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define A1762F3593A255C7_F5628F8349D4A8A6_AA6CCD164FB14B38_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define A1762F3593A255C7_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x440EC00)
#define A1762F3593A255C7_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A1762F3593A255C7_F5628F8349D4A8A6_TypeDefinitionIndex = 19463;

class A1762F3593A255C7_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A1762F3593A255C7_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A1762F3593A255C7_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A1762F3593A255C7_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action** StaticGet_B25B9042DD5F4B8E()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(A1762F3593A255C7_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A1762F3593A255C7_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1762F3593A255C7_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void AA6CCD164FB14B38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1762F3593A255C7_F5628F8349D4A8A6_AA6CCD164FB14B38_OFFSET))(this);
	}
};
