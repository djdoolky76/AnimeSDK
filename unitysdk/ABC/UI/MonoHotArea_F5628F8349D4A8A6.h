#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::UI { class MonoHotArea; }
namespace F5D9B2730D543D46 { class A9BDD7E8F3994CE6; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define ABC_UI_MONOHOTAREA_F5628F8349D4A8A6_E72E69E10024ED8B_OFFSET UNITYSDK_OFFSET(0x1FC4FE0)
#define ABC_UI_MONOHOTAREA_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC5F50)
#define ABC_UI_MONOHOTAREA_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoHotArea_F5628F8349D4A8A6_TypeDefinitionIndex = 6874;

	class MonoHotArea_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::ABC::UI::MonoHotArea_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::ABC::UI::MonoHotArea_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(MonoHotArea_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_2<::ABC::UI::MonoHotArea*, ::F5D9B2730D543D46::A9BDD7E8F3994CE6*>** StaticGet_E4AE7C6234D30C14()
		{
			return (::System::Action_2<::ABC::UI::MonoHotArea*, ::F5D9B2730D543D46::A9BDD7E8F3994CE6*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHotArea_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_UI_MONOHOTAREA_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOHOTAREA_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void E72E69E10024ED8B(::ABC::UI::MonoHotArea* BD8273AB04C4B760, ::F5D9B2730D543D46::A9BDD7E8F3994CE6* BA8750D46ED2C3AF)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoHotArea*, ::F5D9B2730D543D46::A9BDD7E8F3994CE6*))((::PBYTE)hIl2Cpp + ABC_UI_MONOHOTAREA_F5628F8349D4A8A6_E72E69E10024ED8B_OFFSET))(this, BD8273AB04C4B760, BA8750D46ED2C3AF);
		}
	};
}
