#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define EB0D50DE6F105A6A_F5628F8349D4A8A6_A484299EF73105CC_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define EB0D50DE6F105A6A_F5628F8349D4A8A6_F87516A4F2E26E88_OFFSET UNITYSDK_OFFSET(0x29CE500)
#define EB0D50DE6F105A6A_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x29CF8B0)
#define EB0D50DE6F105A6A_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EB0D50DE6F105A6A_F5628F8349D4A8A6_TypeDefinitionIndex = 15645;

class EB0D50DE6F105A6A_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::EB0D50DE6F105A6A_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::EB0D50DE6F105A6A_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(EB0D50DE6F105A6A_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action** StaticGet_E7075C39E6B63936()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EB0D50DE6F105A6A_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Action** StaticGet_A157EC71E86EA67F()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EB0D50DE6F105A6A_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EB0D50DE6F105A6A_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB0D50DE6F105A6A_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void A484299EF73105CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB0D50DE6F105A6A_F5628F8349D4A8A6_A484299EF73105CC_OFFSET))(this);
	}

	::System::Void F87516A4F2E26E88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB0D50DE6F105A6A_F5628F8349D4A8A6_F87516A4F2E26E88_OFFSET))(this);
	}
};
