#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define ABC_UI_MONOLOCALIZEDTMP_F5628F8349D4A8A6_F975A35906987DE6_OFFSET UNITYSDK_OFFSET(0x21B05F0)
#define ABC_UI_MONOLOCALIZEDTMP_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x21B06F0)
#define ABC_UI_MONOLOCALIZEDTMP_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoLocalizedTmp_F5628F8349D4A8A6_TypeDefinitionIndex = 8800;

	class MonoLocalizedTmp_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::ABC::UI::MonoLocalizedTmp_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::ABC::UI::MonoLocalizedTmp_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(MonoLocalizedTmp_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_2<::ABC::UI::MonoLocalizedTmp*, ::System::String*>** StaticGet_AD64BB6C8EC2E491()
		{
			return (::System::Action_2<::ABC::UI::MonoLocalizedTmp*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoLocalizedTmp_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_UI_MONOLOCALIZEDTMP_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOLOCALIZEDTMP_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void F975A35906987DE6(::ABC::UI::MonoLocalizedTmp* BD8273AB04C4B760, ::System::String* AE40CAA6BBFEAD2C)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoLocalizedTmp*, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOLOCALIZEDTMP_F5628F8349D4A8A6_F975A35906987DE6_OFFSET))(this, BD8273AB04C4B760, AE40CAA6BBFEAD2C);
		}
	};
}
