#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define ADA9BA377071FEF7_F5628F8349D4A8A6_AE18412B1C87FDD5_OFFSET UNITYSDK_OFFSET(0x3953250)
#define ADA9BA377071FEF7_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39550D0)
#define ADA9BA377071FEF7_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ADA9BA377071FEF7_F5628F8349D4A8A6_TypeDefinitionIndex = 12394;

class ADA9BA377071FEF7_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::ADA9BA377071FEF7_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::ADA9BA377071FEF7_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(ADA9BA377071FEF7_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action** StaticGet_E3CEE43317B9E051()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ADA9BA377071FEF7_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADA9BA377071FEF7_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADA9BA377071FEF7_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void AE18412B1C87FDD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADA9BA377071FEF7_F5628F8349D4A8A6_AE18412B1C87FDD5_OFFSET))(this);
	}
};
