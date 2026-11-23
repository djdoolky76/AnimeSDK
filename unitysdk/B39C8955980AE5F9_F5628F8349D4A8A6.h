#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define B39C8955980AE5F9_F5628F8349D4A8A6_AEEAA51786C6F6FE_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define B39C8955980AE5F9_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F95810)
#define B39C8955980AE5F9_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B39C8955980AE5F9_F5628F8349D4A8A6_TypeDefinitionIndex = 7915;

class B39C8955980AE5F9_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B39C8955980AE5F9_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B39C8955980AE5F9_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B39C8955980AE5F9_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action** StaticGet_B3B5BB714B5D4029()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(B39C8955980AE5F9_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B39C8955980AE5F9_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B39C8955980AE5F9_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void AEEAA51786C6F6FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B39C8955980AE5F9_F5628F8349D4A8A6_AEEAA51786C6F6FE_OFFSET))(this);
	}
};
