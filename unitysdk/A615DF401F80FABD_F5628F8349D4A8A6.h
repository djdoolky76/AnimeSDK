#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define A615DF401F80FABD_F5628F8349D4A8A6_E85D1EA23EA11460_OFFSET UNITYSDK_OFFSET(0x39B5DD0)
#define A615DF401F80FABD_F5628F8349D4A8A6_EB7E5C708830D5BE_OFFSET UNITYSDK_OFFSET(0x39B5DE0)
#define A615DF401F80FABD_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39B8530)
#define A615DF401F80FABD_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A615DF401F80FABD_F5628F8349D4A8A6_TypeDefinitionIndex = 12549;

class A615DF401F80FABD_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A615DF401F80FABD_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A615DF401F80FABD_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A615DF401F80FABD_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action** StaticGet_A57CCF40F691C0BB()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(A615DF401F80FABD_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Action** StaticGet_F05C58A6A7866D89()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(A615DF401F80FABD_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A615DF401F80FABD_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A615DF401F80FABD_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void EB7E5C708830D5BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A615DF401F80FABD_F5628F8349D4A8A6_EB7E5C708830D5BE_OFFSET))(this);
	}

	::System::Void E85D1EA23EA11460()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A615DF401F80FABD_F5628F8349D4A8A6_E85D1EA23EA11460_OFFSET))(this);
	}
};
