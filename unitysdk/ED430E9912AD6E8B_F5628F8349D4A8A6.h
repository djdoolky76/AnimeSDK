#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace System { template <typename T> class Action_1; }

#define ED430E9912AD6E8B_F5628F8349D4A8A6_FE72E88999C3D59F_OFFSET UNITYSDK_OFFSET(0x1B8C590)
#define ED430E9912AD6E8B_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B916B0)
#define ED430E9912AD6E8B_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ED430E9912AD6E8B_F5628F8349D4A8A6_TypeDefinitionIndex = 2264;

class ED430E9912AD6E8B_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::ED430E9912AD6E8B_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::ED430E9912AD6E8B_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(ED430E9912AD6E8B_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::ABC::UI::MonoLocalizedTmp*>** StaticGet_E3CEE43317B9E051()
	{
		return (::System::Action_1<::ABC::UI::MonoLocalizedTmp*>**)Il2CppClass::FromTypeDefinitionIndex(ED430E9912AD6E8B_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ED430E9912AD6E8B_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED430E9912AD6E8B_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void FE72E88999C3D59F(::ABC::UI::MonoLocalizedTmp* EC35F88C87A83BEB)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoLocalizedTmp*))((::PBYTE)hIl2Cpp + ED430E9912AD6E8B_F5628F8349D4A8A6_FE72E88999C3D59F_OFFSET))(this, EC35F88C87A83BEB);
	}
};
